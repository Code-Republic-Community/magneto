cc_library(
    name = "magneto_lib",
    hdrs = [
        "magneto.h",
    ],
    srcs = [
        "magneto.cpp",
    ]
)

cc_test(
    name = "magneto_lib_test",
    srcs = ["magneto_test.cpp"],
    deps = [
        ":magneto_lib",
        "@gtest//:gtest_main",
    ]
)
