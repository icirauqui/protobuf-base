load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")



cc_library (
    name = "agent_pb",
    srcs = ["protos/proto3/agent.pb.cc"],
    hdrs = ["protos/proto3/agent.pb.h"],
    deps = ["@com_google_protobuf//:protobuf"],
    visibility = ["//visibility:public"],
)

cc_library (
    name = "switch_parcel_pb",
    srcs = ["protos/proto3/switch_parcel.pb.cc"],
    hdrs = ["protos/proto3/switch_parcel.pb.h"],
    deps = ["@com_google_protobuf//:protobuf"],
    visibility = ["//visibility:public"],
)



cc_binary(
    name = "create_pb",
    srcs = [
        "src/create_pb.cpp",
    ],
    deps = [
        ":agent_pb",
        ":switch_parcel_pb",
    ],
    visibility = ["//visibility:public"],
)



cc_binary(
    name = "read_pb",
    srcs = [
        "src/read_pb.cpp",
    ],
    deps = [
        ":agent_pb",
        ":switch_parcel_pb",
    ],
    visibility = ["//visibility:public"],
)

