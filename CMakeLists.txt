cmake_minimum_required(VERSION 3.28)
include(pico_sdk_import.cmake)

set(projname "main")

project(pico_examples C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

pico_sdk_init()

# Add include directories
include_directories(${CMAKE_SOURCE_DIR}/include)

# Define the target executable and link source files
add_executable(${projname}
    src/main.c
    src/led.c
)

#Enable the USB Virtual COM Port
pico_enable_stdio_usb(${projname} 1)
pico_enable_stdio_uart(${projname} 0)

target_link_libraries(${projname} pico_stdlib)
target_link_libraries(${projname} hardware_spi)
target_link_libraries(${projname} hardware_i2c)
target_link_libraries(${projname} pico_binary_info)
pico_add_extra_outputs(${projname})