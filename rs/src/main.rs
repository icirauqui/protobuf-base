use protobuf::{EnumOrUnknown, Message};

//include!(concat!(env!("OUT_DIR"), "/protos/mod.rs"));

//include!("/home/icirauqui/w4rkspace/rust-protobuf/src/protos/mod.rs");

fn main() {
    println!("Hello, world!");

    let mut out_msg = GetRequest::new();
    out_msg.name = "test".to_string();
    out_msg.age = 10;
    out_msg.features.push("feature1".to_string());
    out_msg.features.push("feature2".to_string());

    let out_bytes: Vec<u8> = out_msg.write_to_bytes().unwrap();

    


}
