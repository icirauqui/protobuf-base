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



fn main() {
    //let args: Vec<String> = std::env::args().collect();
    //if args.len() != 2 {
    //    println!("Error: could not read protobuffer file {}", args[1]);
    //    std::process::exit(1);
    //}

    let in_file = "/home/icirauqui/w4rkspace/rust-protobuf/data/weights.pb";

    

    let data = file::read_file(in_file).unwrap();
    let _protobuffer = Weights::parse_from_bytes(&data).unwrap();

    let id = _protobuffer.id;
    let name = _protobuffer.name;
    let weights = _protobuffer.weight;

    println!("id: {}", id);
    println!("name: {}", name);
    println!("weights: {:?}", weights);
    


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


    
    let out_bytes: Vec<u8> = _protobuffer2.write_to_bytes().unwrap();
    let out_file = "/home/icirauqui/w4rkspace/rust-protobuf/data/weights3.pb";
    file::write_file(out_file, &out_bytes).unwrap();

        


    std::process::exit(0);
}