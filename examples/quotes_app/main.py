def main():
    import ConfiguratorBundle_pb2

    # Variables from optimizer input sheet
    optimizer_input_sheet_Name = "Davis Ave"
    optimizer_input_sheet_Latitude = "40.4406248"
    optimizer_input_sheet_Longitude = "-79.9958864"
    optimizer_input_sheet_LengthInFt = "100.00"
    optimizer_input_sheet_AmountOfBays = "16"
    optimizer_input_sheet_BackwallHeightInFt = "N/A"
    # and so on...

    # Create the variable for the proto file

    data_in = ""
    data_in += optimizer_input_sheet_Name + "\n"
    data_in += optimizer_input_sheet_Latitude + "\n"
    data_in += optimizer_input_sheet_Longitude + "\n"
    data_in += optimizer_input_sheet_LengthInFt + "\n"
    data_in += optimizer_input_sheet_AmountOfBays + "\n"
    data_in += optimizer_input_sheet_BackwallHeightInFt + "\n"
    # and so on...


    # Create the proto object that we will binary serialize
    _protobuffer = ConfiguratorBundle_pb2.ConfiguratorBundle()

    # Fill the proto object with the data.
    # Since we are exporting from flutter/dart/python, we only need to fill the data_in field of the proto object
    _protobuffer.data_in = data_in

    # Write the file to disk
    out_file = "flutter_out.pb"
    f = open(out_file, "wb")
    f.write(_protobuffer.SerializeToString())
    f.close()
    # This will create a file called flutter_out.pb in the same directory as this file.
    # This file will contain the binary serialized proto object.
    # This file will be read by the configurator.

    
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
    while not os.path.exists("csharp_out.pb") and timer < 120:
        time.sleep(1)
        timer+=1

    # Now you can read the file and get the variables for the optimizer output sheet
    # First read the file
    f = open("csharp_out.pb", "rb")
    csharp_out = f.read()
    f.close()

    # Now you have to parse the data_out variable.
    # You can do this by creating a proto object and calling the ParseFromString method.
    # For example:
    _protobuffer_read = ConfiguratorBundle_pb2.ConfiguratorBundle()
    _protobuffer_read.ParseFromString(csharp_out)

    # There are two relevant variables in the proto object:
    # _protobuffer_read.data_out contains the actual data
    # _protobuffer_read.is_valid is a boolean that indicates if the data is valid or not, if false, the configurator failed.
    data_out = _protobuffer_read.data_out
    is_valid = _protobuffer_read.is_valid

    # Assumin that the configurator succeeded, you can now parse the data_out variable.
    # For example:
    data_out = data_out.split("\n")
    optimizer_output_sheet_Name = data_out[0]
    optimizer_output_sheet_Latitude = data_out[1]
    optimizer_output_sheet_Longitude = data_out[2]
    optimizer_output_sheet_LengthInFt = data_out[3]
    # and so on...

    print("optimizer_output_sheet_Name: " + optimizer_output_sheet_Name)
    print("optimizer_output_sheet_Latitude: " + optimizer_output_sheet_Latitude)
    print("optimizer_output_sheet_Longitude: " + optimizer_output_sheet_Longitude)
    print("optimizer_output_sheet_LengthInFt: " + optimizer_output_sheet_LengthInFt)
    # and so on...

if __name__ == '__main__':
    main()


