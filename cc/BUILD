load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")



cc_library (
    name = "pb",
    srcs = ["protos/proto3/agent.pb.cc"],
    hdrs = ["protos/proto3/agent.pb.h"],
    deps = ["@com_google_protobuf//:protobuf"],
    visibility = ["//visibility:public"],
)

cc_binary(
    name = "create_pb",
    srcs = [
        "src/create_pb.cpp",
    ],
    deps = [
        ":pb",
    ],
    visibility = ["//visibility:public"],
)



cc_binary(
    name = "read_pb",
    srcs = [
        "src/read_pb.cpp",
    ],
    deps = [
        ":pb",
    ],
    visibility = ["//visibility:public"],
)

