#! /usr/bin/python

import agent_pb2
import sys


out_file = "/home/icirauqui/w4rkspace/rust-protobuf/data/weights2.pb";



_protobuffer = agent_pb2.Weights()

_protobuffer.id = 1
_protobuffer.name = "test"
_protobuffer.weight.append(1.0)
_protobuffer.weight.append(2.0)
_protobuffer.weight.append(3.0)


# Write the new address book back to disk.
f = open(out_file, "wb")
f.write(_protobuffer.SerializeToString())
f.close()