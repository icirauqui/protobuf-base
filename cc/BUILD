load("@rules_cc//cc:defs.bzl", "cc_binary", "cc_library")
load("@rules_proto//proto:defs.bzl", "proto_library")

cc_proto_library(
    name = "person_cc_proto",
    deps = [":person_proto"],
)
proto_library(
    name = "person_proto",
    srcs = ["person.proto"],
    deps = [":address_proto"],
)

proto_library(
    name = "address_proto",
    srcs = ["address.proto"],
    deps = [":zip_code_proto"],
)

proto_library(
    name = "zip_code_proto",
    srcs = ["zip_code.proto"],
)


cc_binary(
    name = "main",
    srcs = [
        "src/main.cpp",
    ],
    deps = [
    ],
    visibility = ["//visibility:public"],
)

