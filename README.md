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
$ ./rs/protoc-rust-cli/target/debug/protoc-rust-cli --out=./rs/protos ./proto
3/agent.proto

# C++
$ protoc --cpp_out=cc/protos ./proto3/agent.proto

# Python
$ protoc --python_out=py/protos ./proto3/agent.proto
```
