cmake_minimum_required(VERSION 3.13)

# Include the Pico SDK
include($ENV{PICO_SDK_PATH}/external/pico_sdk_import.cmake)

project(pico_poe_tool C CXX ASM)
set(CMAKE_C_STANDARD 11)
set(CMAKE_CXX_STANDARD 17)

# Initialize the Pico SDK
pico_sdk_init()

# Add your executable
add_executable(pico_poe_tool
    src/main.c
)

# Link libraries
target_link_libraries(pico_poe_tool
    pico_stdlib
)

# Enable USB output, disable UART output
pico_enable_stdio_usb(pico_poe_tool 1)
pico_enable_stdio_uart(pico_poe_tool 0)

# Create map/bin/hex/uf2 files
pico_add_extra_outputs(pico_poe_tool)