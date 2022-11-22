#! /usr/bin/python

import sys

import agent_pb2

in_file = "/home/icirauqui/w4rkspace/rust-protobuf/data/weights3.pb";



# Main procedure:  Reads the entire address book from a file and prints all
#   the information inside.
_protobuffer = agent_pb2.Weights()
f = open(in_file, "rb")
_protobuffer.ParseFromString(f.read())
f.close()

print(_protobuffer.id)
print(_protobuffer.name)
print(_protobuffer.weight)
