#include <iostream>
#include <fstream>
#include <cstdio>
#include <ctime>
//#include "rapidjson/document.h"
//#include "rapidjson/filereadstream.h"
//#include "base64/base64.h"
#include "../protos/proto3/agent.pb.h"
#include "../protos/proto3/switch_parcel.pb.h"


#include <sstream>




std::string bytes2string(std::vector<uint8_t> &v) {
  std::stringstream out;
  for (unsigned int i=0; i<v.size(); i++) {
    if (i == 0) {
      out << "[";
    }

    out << unsigned(v[i]);

    if (i < v.size() - 1) {
      out << ", ";
    } else {
      out << "]";
    }
  }
  return out.str();
}


std::string parcel2string(SwitchParcel &parcel) {
  size_t nbytes = parcel.ByteSizeLong();
  std::vector<uint8_t> bytes(nbytes);
  parcel.SerializeToArray(bytes.data(), nbytes);

  return bytes2string(bytes);
}


SwitchParcel string2parcel(std::string &s) {
  std::string o = s.substr(1, s.size() - 2);

  std::vector<uint8_t> bytes;
  std::string byte;

  std::stringstream ss(o);

  while (getline(ss, byte, ',')) {
    bytes.push_back(std::stoi(byte));
  }

  SwitchParcel parcel;
  parcel.ParseFromArray(bytes.data(), bytes.size());

  return parcel;
}



int main(int argc, char *argv[]) {

  SwitchParcel protobuffer = SwitchParcel();

  protobuffer.set_id(1);
  protobuffer.set_name("test");
  for (unsigned int i = 0; i < 10; i++) {
    float data = 1.5 * i;
    protobuffer.add_weight(data);
  }

  // Save the protobuffer to a binary file
  std::string out_file = "/home/icirauqui/w4rkspace/protobuf-base/data/weights.pb";
  std::fstream output_stream(out_file, std::ios::out | std::ios::trunc | std::ios::binary);
  protobuffer.SerializeToOstream(&output_stream);

  std::string parcel_bytes = parcel2string(protobuffer);
  std::cout << "parcel_bytes = " << parcel_bytes << std::endl;
  

  SwitchParcel parcel_in = string2parcel(parcel_bytes);

  std::vector<float> weights;
  int weight_size = parcel_in.weight_size();
  for (int i = 0; i < weight_size; i++) {
      weights.push_back(parcel_in.weight(i));
  }

  std::cout << "Weights = ";
  for (auto weight : weights)
      std::cout << weight << " ";
  std::cout << std::endl;

  std::cout << "[ OK ]" << std::endl;

  return 0;
}