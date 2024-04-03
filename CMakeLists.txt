cmake_minimum_required(VERSION 3.22)

project(CanOpenNode C CXX)

# Custom include directory
set(CO_CUSTOM_INC_DIR ${CMAKE_CURRENT_BINARY_DIR}/lib_inc)

# Setup generic source files
file(GLOB_RECURSE co_301_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/301/*.c)
file(GLOB_RECURSE co_303_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/303/*.c)
file(GLOB_RECURSE co_304_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/304/*.c)
file(GLOB_RECURSE co_305_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/305/*.c)
file(GLOB_RECURSE co_309_SRCS ${CMAKE_CURRENT_LIST_DIR}/src/309/*.c)

# Debug sources
set(co_debug_SRCS
    ${CMAKE_CURRENT_LIST_DIR}/src/CanOpenNode/co_debug.c
)

# Setup include directories
set(co_include_DIRS
    ${CMAKE_CURRENT_LIST_DIR}/src/include
    ${CO_CUSTOM_INC_DIR}
)

# Register core library to the system
# add_library(${CMAKE_PROJECT_NAME} INTERFACE)
add_executable(${CMAKE_PROJECT_NAME})
target_sources(${CMAKE_PROJECT_NAME} PUBLIC ${co_301_SRCS} ${co_303_SRCS} ${co_304_SRCS} ${co_305_SRCS} ${co_309_SRCS})
target_include_directories(${CMAKE_PROJECT_NAME} INTERFACE ${co_include_DIRS})
target_compile_options(${CMAKE_PROJECT_NAME} PRIVATE ${CO_COMPILE_OPTIONS})
target_compile_definitions(${CMAKE_PROJECT_NAME} INTERFACE ${CO_COMPILE_DEFINITIONS} CO_INCLUDE_USER_FILE)

# Create config file if user didn't provide one himself
if(NOT CO_OPTS_FILE)
    set(CO_OPTS_FILE ${CMAKE_CURRENT_LIST_DIR}/include/co/co_opts_template.h)
    message(STATUS "Using default co_opts.h file from ${CO_OPTS_FILE}")
else()
    message(STATUS "Using custom co_opts.h file from ${CO_OPTS_FILE}")
endif()

configure_file(${CO_OPTS_FILE} ${CO_CUSTOM_INC_DIR}/co_opts.h COPYONLY)
