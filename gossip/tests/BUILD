cc_test(
    name = "test_tips_cache",
    timeout = "short",
    srcs = ["test_tips_cache.c"],
    deps = [
        "//gossip:tips_cache",
        "@unity",
    ],
)

cc_test(
    name = "test_recent_seen_bytes_cache",
    timeout = "short",
    srcs = ["test_recent_seen_bytes_cache.c"],
    deps = [
        "//consensus/test_utils",
        "//gossip:recent_seen_bytes_cache",
        "@unity",
    ],
)
