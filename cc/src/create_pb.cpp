#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
//#include "rapidjson/document.h"
//#include "rapidjson/filereadstream.h"
//#include "base64/base64.h"
#include "../protos/proto3/agent.pb.h"

int main(int argc, char *argv[]) {

  Weights *protobuffer = new Weights();

  protobuffer->set_id(1);
  protobuffer->set_name("test");

  for (unsigned int i = 0; i < 10; i++) {
    float data = 1.5 * i;
    protobuffer->add_weight(data);
  }

  std::string out_file = "/home/icirauqui/w4rkspace/rust-protobuf/data/weights.pb";

  // Save the protobuffer to a binary file
  std::fstream output_stream(out_file, std::ios::out | std::ios::trunc | std::ios::binary);
  if(!protobuffer->SerializeToOstream(&output_stream)) {
    std::cerr << "[ ERROR ] Failed to write to file" << argv[2] << std::endl;
    delete protobuffer;
    return -1;
  }

  std::cout << "[ OK ]" << std::endl;

  delete protobuffer;
  return 0;
}