
add_library(${CUS_LIBRARY_NAME} STATIC cuslib.cc)
target_include_directories(${CUS_LIBRARY_NAME} PUBLIC "./" "${CMAKE_BINARY_DIR}/configured_files/include")
