#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
#include "../protos/proto3/agent.pb.h"

int main(int argc, char *argv[]) {
  Weights *protobuffer = new Weights();

  std::string in_file = "/home/icirauqui/w4rkspace/rust-protobuf/data/weights.pb";

  std::fstream input_stream(in_file, std::ios::in | std::ios::binary);
  if(!protobuffer->ParseFromIstream(&input_stream)) {
    std::cerr << "Error: could not read protobuffer file" << std::endl;
    return -1;
  }

  std::cout << "Id: " << protobuffer->id() << std::endl;
  std::cout << "Name: " << protobuffer->name() << std::endl;

  int weight_size = protobuffer->weight_size();
  std::vector<float> weights;
  for (int i = 0; i < weight_size; i++) {
      weights.push_back(protobuffer->weight(i));
  }

  std::cout << "Weights: ";
  for (auto weight : weights) {
      std::cout << weight << " ";
  }
  std::cout << std::endl;
  



  delete protobuffer;
  return 0;
}