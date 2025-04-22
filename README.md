# DistKV

## RocksDB

### Dependencies

- You can link RocksDB with the following compression libraries:
  - [zlib](http://www.zlib.net/) - A library for data compression.
  - [bzip2](http://www.bzip.org/) - A library for high-quality data compression.
  - [lz4](https://github.com/lz4/lz4) - A library for extremely fast and efficient data compression.
  - [snappy](http://google.github.io/snappy/) - A library designed for fast data compression and decompression.
  - [zstandard](http://www.zstd.net) - An advanced, fast real-time compression algorithm providing high compression ratios.

- All our tools depend on:
  - [gflags](https://gflags.github.io/gflags/) - A library that facilitates command line flags processing. Note that you can compile the RocksDB library even if gflags is not installed.

- If you wish to build the RocksJava static target, please ensure that CMake is installed, as it is required for building Snappy.

### Supported Platforms

- **Linux - Ubuntu**
  - Upgrade your GCC compiler to version 4.8 or higher to ensure C++11 support.
  - Install gflags with the following command:
    ```bash
    sudo apt-get install libgflags-dev
    ```
    If this command doesn't work and you're using Ubuntu, you can refer to this helpful tutorial: [Installing gflags on Ubuntu](http://askubuntu.com/questions/312173/installing-gflags-12-04).
  - Install Snappy:
    ```bash
    sudo apt-get install libsnappy-dev
    ```
  - Install zlib:
    ```bash
    sudo apt-get install zlib1g-dev
    ```
  - Install bzip2:
    ```bash
    sudo apt-get install libbz2-dev
    ```
  - Install lz4:
    ```bash
    sudo apt-get install liblz4-dev
    ```
  - Install zstandard:
    ```bash
    sudo apt-get install libzstd-dev
    ```

### Compilation

To compile RocksDB, follow these recommended steps:

1. Compile the static library:

    Run the following command to compile the static library:
    ```bash
    make static_lib
This command will compile librocksdb.a, the RocksDB static library, in release mode.

2. Install the compiled library:
    Once compilation is complete, run this command to install it:
    
    ```bash
    sudo make install
## Running DistKV
### Compilation

To compile DistKV, follow these recommended steps:

1. Create a build directory:
   ```bash
   mkdir build
   cd build
2. Run CMake in the build directory:

   ```bash
    cmake ..
3. Compile the code:


   ```bash
    make 
### Running DistKV
To execute the compiled DistKV program, use the following command in the terminal:
   ```bash
./distkv
