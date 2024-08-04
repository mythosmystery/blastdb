add_executable(blastcli src/main.cpp)

target_link_libraries(blastcli PRIVATE libblast)

# Optionally, set the output directory for the executable
set_target_properties(blastcli PROPERTIES
    RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin"
)
