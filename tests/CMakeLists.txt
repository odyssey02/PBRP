
file(GLOB_RECURSE TEST_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# Add the executable for the test
add_executable(PBRPTest ${TEST_FILES})

# Link the test executable with the library
target_link_libraries(PBRPTest PBRP)