cc_test(
    name = "test_exit_probability_randomizer",
    timeout = "short",
    srcs = ["test_exit_probability_randomizer.c"],
    data = [
        ":db_file",
        ":snapshot.txt",
        "//consensus/snapshot/tests:snapshot_test_files",
    ],
    flaky = True,
    visibility = ["//visibility:public"],
    deps = [
        "//common/storage/sql/sqlite3:sqlite3_storage",
        "//common/storage/tests/helpers",
        "//common/trinary:trit_ptrit",
        "//consensus/test_utils",
        "//consensus/tip_selection/cw_rating_calculator",
        "//consensus/tip_selection/exit_probability_randomizer",
        "@unity",
    ],
)

genrule(
    name = "db_file",
    srcs = ["//common/storage/sql:schema"],
    outs = ["ciri.db"],
    cmd = "$(location @sqlite3//:shell) $@ < $<",
    tools = ["@sqlite3//:shell"],
)
