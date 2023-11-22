import json
import python.ConfiguratorBundle_pb2

def main():

    # Read json file
    filename = "sales_input.json"
    with open(filename) as f:
        data = json.load(f)
    f.close()
    sales_input = data["sales_input"]
    print(sales_input)

    
    # Create the variable for the proto file
    data_in = ""
    for i, datum in enumerate(sales_input):
        data_in += str(datum)
        if i < len(sales_input) - 1:
            data_in += "\n"
    print(data_in)


    # Create the proto object that we will binary serialize
    _protobuffer = python.ConfiguratorBundle_pb2.ConfiguratorBundle()
    _protobuffer.data_in = data_in

    # Write the file to disk
    out_file = "data/configurator_bundle.in"
    with open(out_file, "wb") as f:
        f.write(_protobuffer.SerializeToString())
    f.close()

    return
    
    # In order to trigger the configurator, you'll need to 'call' it from the command line.
    # For example, let's assume that the configurator executable is in below path:
    configurator_path = "~./configurator"
    # In reality it'll be somewhere in the server

    # Then you'll need to call it like this:
    import os
    os.system(configurator_path + " " + out_file)
    # This will call the configurator executable with the path to the flutter_out.pb file as input.

    # Now you have to wait for the configurator to finish.
    # You can do this by checking if a file exists.
    # For example, the configurator will create a file called csharp_out.pb when it finishes.
    # So you can do something like this:
    import time
    timer = 0
    while not os.path.exists("data/configurator_bundle.pb") and timer < 120:
        time.sleep(1)
        timer+=1



if __name__ == '__main__':
    main()


