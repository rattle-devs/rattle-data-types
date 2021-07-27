cmake_minimum_required(VERSION 3.21)

# set the project name
project(Rattle-data-types VERSION 0.1)

#config file
configure_file(config.h.in config.h)
include_directories(${PROJECT_BINARY_DIR})

# specify the C standard
set(CMAKE_C_STANDARD_REQUIRED ON)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_EXTENSIONS OFF)
set(CMAKE_C_FLAGS_DEBUG "${CMAKE_C_FLAGS} -std=c17 -Wall -Wall -Werror -Wshadow -Wdouble-promotion -Wformat -Wformat -Wformat-overflow -Wformat-truncation -Wundef -fno-common -Wconversion -ffunction-sections -Wpadded -g3")

add_subdirectory("Vector")
message("sub")
add_library(data-types null.c)
target_link_libraries(data-types PUBLIC Vector)

IF(CMAKE_BUILD_TYPE MATCHES DEBUG)
    enable_testing()

    add_executable(VectorTest Tests/VectorTest.c)
    target_link_libraries(VectorTest PUBLIC Vector)

    add_test(NAME Vector_Test_10 COMMAND VectorTest 10)
    add_test(NAME Vector_Test_100000000 COMMAND VectorTest 100000000)

ENDIF(CMAKE_BUILD_TYPE MATCHES DEBUG)
