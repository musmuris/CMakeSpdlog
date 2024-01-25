# CMakeList.txt : CMake project for CMakeSpdlog, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (CMakeSpdlog "CMakeSpdlog.cpp" "CMakeSpdlog.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeSpdlog PROPERTY CXX_STANDARD 11)
endif()


target_compile_definitions(CMakeSpdlog PUBLIC SPDLOG_COMPILED_LIB)
target_include_directories(CMakeSpdlog PUBLIC "spdlog/include")
target_link_libraries(CMakeSpdlog spdlog)

