
add_library(spdlog spdlog.cpp stdout_sinks.cpp color_sinks.cpp file_sinks.cpp async.cpp cfg.cpp)

target_compile_definitions(spdlog PUBLIC SPDLOG_COMPILED_LIB)

# We need this directory, and users of our library will need it too
target_include_directories(spdlog PUBLIC "../include")

# All users of this library will need at least C++11
target_compile_features(spdlog PUBLIC cxx_std_11)