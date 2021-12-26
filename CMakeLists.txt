cmake_minimum_required(VERSION 3.21)
project(lua_cpp_playground)


set(CMAKE_CXX_STANDARD 14)

add_executable(lua_cpp_playground main.cpp)
target_link_libraries(lua_cpp_playground ${LUA_LIBRARY} ${CMAKE_DL_LIBS})