# rust-protobuf

Protobuf usage from Rust



## Dependencies

Protobuf compiler

```bash	
$ sudo apt install protobuf-compiler
```

## Usage

```bash
$ cargo build
$ cargo run
```


## Compile protos

```bash	
# Rust
$ ./rs/protoc-rust-cli/target/debug/protoc-rust-cli --out=./rs/protos ./proto3/agent.proto

$ protoc --rust_out ./rs/protos ./proto3/agent.proto

# C++
$ protoc --cpp_out=cc/protos ./proto3/agent.proto
$ protoc --cpp_out=cc/protos ./proto3/switch_parcel.proto

# PhP+
$ protoc --php_out=php/protos ./proto3/agent.proto

# Python
$ protoc --python_out=py/protos ./proto3/agent.proto
```


## Notes

```bash	
https://github.com/protocolbuffers/protobuf/releases/download/v21.9/protobuf-all-21.9.tar.gz

protobuf-21.9

c00f05e19e89b04ea72e92a3c204eedda91f871cd29b0bbe5188550d783c73c7

cargo install protobuf-codegen
```