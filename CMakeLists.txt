cmake_minimum_required(VERSION 3.22)

project(CanOpenNode C CXX)

# Now generate executable for test purposes
if (NOT PROJECT_IS_TOP_LEVEL)
    add_subdirectory(canopennode)
else()
    # More for test purposes
    add_executable(${CMAKE_PROJECT_NAME})

    # Here we can set variables before including subdirectory

    # Add library to project
    add_subdirectory(canopennode)

    # Add example to the project...
    target_include_directories(${CMAKE_PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/example
    )
    target_sources(${CMAKE_PROJECT_NAME} PUBLIC
        ${CMAKE_CURRENT_LIST_DIR}/example/CO_driver_blank.c
        ${CMAKE_CURRENT_LIST_DIR}/example/CO_storageBlank.c
        ${CMAKE_CURRENT_LIST_DIR}/example/main_blank.c
        ${CMAKE_CURRENT_LIST_DIR}/example/OD.c
    )

    # Link CanOpen lib publicly
    target_link_libraries(${CMAKE_PROJECT_NAME} CanOpenNode_Lib)
endif()
