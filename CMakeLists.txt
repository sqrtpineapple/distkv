project(distkv CXX)
cmake_minimum_required(VERSION 3.10)

# 设置 C++ 标准
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 查找 RocksDB 和依赖的静态库
find_library(Z_LIB NAMES libz.a PATHS /usr/lib/x86_64-linux-gnu/ NO_DEFAULT_PATH)
find_library(GFLAGS_LIB NAMES libgflags.a PATHS /usr/lib/x86_64-linux-gnu/ NO_DEFAULT_PATH)
find_library(SNAPPY_LIB NAMES libsnappy.a PATHS /usr/lib/x86_64-linux-gnu/ NO_DEFAULT_PATH)
find_library(ZSTD_LIB NAMES libzstd.a PATHS /usr/lib/x86_64-linux-gnu/ NO_DEFAULT_PATH)
find_library(LZ4_LIB NAMES liblz4.a PATHS /usr/lib/x86_64-linux-gnu/ NO_DEFAULT_PATH)
find_library(BZ2_LIB NAMES libbz2.a PATHS /usr/lib/x86_64-linux-gnu/ NO_DEFAULT_PATH)
find_library(ROCKSDB_LIB NAMES rocksdb PATHS /usr/local/lib NO_DEFAULT_PATH)

if(NOT ROCKSDB_LIB)
    message(FATAL_ERROR "Could not find RocksDB library.")
endif()

add_executable(distkv src/main.cpp)

# 链接静态库
target_link_libraries(distkv PRIVATE ${ROCKSDB_LIB} ${BZ2_LIB} ${LZ4_LIB} ${ZSTD_LIB} ${SNAPPY_LIB} ${GFLAGS_LIB} ${Z_LIB})
