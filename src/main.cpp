#include <iostream>
#include <rocksdb/db.h>

int main() {
    // RocksDB 示例代码
    rocksdb::DB* db;
    rocksdb::Options options;
    options.create_if_missing = true;

    // 创建数据库
    rocksdb::Status status = rocksdb::DB::Open(options, "testdb", &db);
    if (!status.ok()) {
        std::cerr << "Unable to open/create test database: " << status.ToString() << std::endl;
        return 1;
    }

    // 关闭数据库
    delete db;
    return 0;
}
