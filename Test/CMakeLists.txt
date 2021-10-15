project(Intent)
cmake_minimum_required(VERSION 3.0)

enable_testing()

include_directories(${gtest_INCLUDE_DIRS})

add_executable(Test test.cpp ../Intent/intent.h)
target_link_libraries(Intent ${gtest_LIBRARIES})
add_test(NAME Test COMMAND Intent)
