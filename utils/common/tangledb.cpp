#include <unordered_map>
#include <memory>
#include <shared_mutex>
#include "tangledb.hpp"

TangleDB& TangleDB::instance(){
    static TangleDB db;
    return db;
}

TangleDB::TXRecord TangleDB::find(const std::string &hash) {

    std::shared_lock<std::shared_mutex> lock(mutex_);
    auto tx = _txs.find(hash);
    if (tx != _txs.end()) {
        return tx->second;
    }
    return std::move(TXRecord());
}

void TangleDB::put(const std::string &hash, const TXRecord& tx) {
    std::unique_lock<std::shared_mutex> lock(mutex_);
    _txs[hash] = tx;
}
