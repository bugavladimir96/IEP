cmake_minimum_required(VERSION 2.8)
project(myapp)
add_subdirectory(libtest_project)
add_executable(myapp test.cpp)
target_link_libraries(myapp test)
install(TARGETS myapp DESTINATION bin)

