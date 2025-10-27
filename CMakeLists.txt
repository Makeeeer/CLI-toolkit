cmake_minimum_required(VERSION 3.16)
project(CLI_Toolkit VERSION 1.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED True)


include_directories(include src include/commands include/utils)


add_executable(CLI_toolkit
    src/main.cpp
    include/commands/find_duplicates.cpp
    include/commands/find_word.cpp
    include/commands/make_copy.cpp
    include/commands/stats.cpp
    include/utils/file_utils.cpp
)

enable_testing()
