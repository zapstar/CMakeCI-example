project(example_test)

include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})
include_directories(${example_SOURCE_DIR})

add_executable(example_test example_test.cpp)
target_link_libraries(example_test gtest gtest_main)
target_link_libraries(example_test example)
add_test(example_test example_test)