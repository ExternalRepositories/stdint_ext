cmake_minimum_required(VERSION 3.14)
project(stdint_ext
        VERSION 0.1.0
        DESCRIPTION "Extensions to the C++ <cstdint> header"
        HOMEPAGE_URL "https://github.com/jessestricker/stdint_ext"
        LANGUAGES CXX)

add_library(stdint_ext INTERFACE)
target_include_directories(stdint_ext INTERFACE ${PROJECT_SOURCE_DIR}/include)
target_compile_features(stdint_ext INTERFACE cxx_std_11)
