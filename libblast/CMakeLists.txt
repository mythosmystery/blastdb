add_library(libblast SHARED
    src/libblast.cpp
)

target_include_directories(libblast PUBLIC
    ${CMAKE_CURRENT_SOURCE_DIR}/include
)

# Optionally, set the output directory for the library
set_target_properties(libblast PROPERTIES
    LIBRARY_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/lib"
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
