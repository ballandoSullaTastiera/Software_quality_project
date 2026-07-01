cmake_minimum_required(VERSION 3.20)
project(firmware C)

add_executable(firmware
    src/main.c 
    src/prime.c
)

target_compile_options(firmware PRIVATE -Wall -O2)

enable_testing()

add_executable(testfiles
    src/prime.c
    tests/CUnityTests/prime_test.c 
)