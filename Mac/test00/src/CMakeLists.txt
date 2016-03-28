
include_directories(
  ${CMAKE_SOURCE_DIR}/include
)

set(CMAKE_C_FLAGS -Wall -g)
add_definitions(-std=c++14)

add_executable(test00 main.cpp)

find_library(CURL_LIBRARY Curl)
set(EXTRA_LIBS
  ${CURL_LIBRARY}
  ${CMAKE_SOURCE_DIR}/lib/libcurlpp.dylib
)

target_link_libraries(test00 ${EXTRA_LIBS})