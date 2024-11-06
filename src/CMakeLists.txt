
file(GLOB_RECURSE SRC_FILES CONFIGURE_DEPENDS
  ${CMAKE_CURRENT_SOURCE_DIR}/*.cpp
)

# Add the source files to the library
add_library(PBRP STATIC
    ${SRC_FILES}  # Main library source files
)

# Include directory for headers
target_link_libraries(PBRP PRIVATE CURL::libcurl)
target_include_directories(PBRP PUBLIC ${CMAKE_SOURCE_DIR}/include)