extern crate chrono;
extern crate fsio;

#[path = "../../protos/agent.rs"] mod agent;

use chrono::prelude::DateTime;
use chrono::Local;
//use protobuf::parse_from_bytes;
use protobuf::*;
use std::time::{Duration, UNIX_EPOCH};

use crate::fsio::file;
use crate::agent::Weights;



fn print_type_of<T>(_: &T) {
    println!("{}", std::any::type_name::<T>())
}


fn string_to_u8vec(mut s: &String) -> Vec<u8> {
    let mut v = s.clone();
    v.pop();
    v.remove(0);

    let s_in : Vec<u8> = vec![];
    let s_out = v.split(",").fold(s_in, |mut acc, x| {
        acc.push(x.trim().parse::<u8>().unwrap());
        acc
    });

    s_out
}


fn u8vec_to_string(v: &Vec<u8>) -> String {
    format!("{:?}", &v)
}




fn main() {
    //let args: Vec<String> = std::env::args().collect();
    //if args.len() != 2 {
    //    println!("Error: could not read protobuffer file {}", args[1]);
    //    std::process::exit(1);
    //}

    // Example proto file containing pre-generated data
    // Read file and creade protobuf object
    let in_file = "/home/icirauqui/w4rkspace/CloudFlare/protobuf-base/data/weights.pb";
    let data = file::read_file(in_file).unwrap();
    let _protobuffer = Weights::parse_from_bytes(&data).unwrap();

    // Assign the data and print it
    let id = _protobuffer.id;
    let name = _protobuffer.name;
    let weights = _protobuffer.weight;

    println!("_protobuffer");
    println!(" - id: {}", id);
    println!(" - name: {}", name);
    println!(" - weights: {:?}", weights);
    



    // Create a new protobuf object
    let mut _protobuffer2 = Weights::new();
    let mut _weights = Vec::new();
    _weights.push(1.0);
    _weights.push(2.0);
    _weights.push(3.0);
    _weights.push(4.0);
    _weights.push(5.0);
    _protobuffer2.id = 1;
    _protobuffer2.name = "test2".to_string();
    _protobuffer2.weight = _weights.clone();

    // Save object to file
    let out_bytes: Vec<u8> = _protobuffer2.write_to_bytes().unwrap();
    let out_file = "/home/icirauqui/w4rkspace/CloudFlare/protobuf-base/data/weights31.pb";
    file::write_file(out_file, &out_bytes).unwrap();

    // Save object to string variable
    let out_string = u8vec_to_string(&out_bytes);

    // Read object from string variable
    let in_bytes = string_to_u8vec(&out_string);
    let _protobuffer3 = Weights::parse_from_bytes(&in_bytes).unwrap();

    // Print the object
    println!("_protobuffer3");
    println!(" - id: {}", _protobuffer3.id);
    println!(" - name: {}", _protobuffer3.name);
    println!(" - weights: {:?}", _protobuffer3.weight);

    


    std::process::exit(0);
}