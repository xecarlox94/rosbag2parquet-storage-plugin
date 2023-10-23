
#include <rosbag2_cpp/readers/sequential_reader.hpp>
#include <rosbag2_storage/storage_options.hpp>
#include <rosbag2_cpp/converter_options.hpp>

#include <iostream>





int main(int argc, char ** argv)
{
    (void) argc;
    (void) argv;

    printf("\nhello world rosbag2_converter_parquet package\n");

    rosbag2_storage::StorageOptions storage_options;
    storage_options.uri = "test.bag";
    //storage_options.uri = "test.bag";

    rosbag2_cpp::ConverterOptions converter_options;
    converter_options.input_serialization_format = "cdr";
    converter_options.output_serialization_format = "cdr";

    rosbag2_cpp::readers::SequentialReader reader;

    reader.open(storage_options, converter_options);


    return 0;
}





/*
#include <cstdio>
#include <rosbag2_storage/storage_interfaces/read_write_interface.hpp>
#include <rosbag2_storage/serialized_bag_message.hpp>
#include <rosbag2_storage/topic_metadata.hpp>
#include <atomic>
#include <rosbag2_cpp/reader.hpp>
#include <rosbag2_cpp/storage_options.hpp>
namespace parquet {

    class ParquetStorage
        : public rosbag2_storage::storage_interfaces::ReadWriteInterface
    {
        public:
            ParquetStorage() {}

            ~ParquetStorage() {}

            void open(
                const rosbag2_storage::StorageOptions&,
                rosbag2_storage::storage_interfaces::IOFlag
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            bool has_next() override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            std::shared_ptr<rosbag2_storage::SerializedBagMessage> read_next() override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            std::vector<rosbag2_storage::TopicMetadata> get_all_topics_and_types() override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void write(
                std::shared_ptr<const rosbag2_storage::SerializedBagMessage>
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void write(
                const std::vector<std::shared_ptr<const rosbag2_storage::SerializedBagMessage> >&
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void create_topic(
                const rosbag2_storage::TopicMetadata&
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void remove_topic(
                const rosbag2_storage::TopicMetadata&
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            rosbag2_storage::BagMetadata get_metadata() override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            std::string get_relative_file_path() const override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            uint64_t get_bagfile_size() const override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            std::string get_storage_identifier() const override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void set_filter(
                const rosbag2_storage::StorageFilter&
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void reset_filter() override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            void seek(
                const rcutils_time_point_value_t&
            ) override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

            uint64_t get_minimum_split_file_size() const override
            {
                throw std::runtime_error("Function not implemented in ParquetStorage");
            }

    };

}
#include "pluginlib/class_list_macros.hpp"
PLUGINLIB_EXPORT_CLASS(
    parquet::ParquetStorage,
    rosbag2_storage::storage_interfaces::ReadWriteInterface
)
*/
