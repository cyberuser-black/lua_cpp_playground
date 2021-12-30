cmake_minimum_required(VERSION 3.21)
project(lua_cpp_playground)

find_package(Lua REQUIRED)
set(INCLUDE_DIRS ${LUA_INCLUDE_DIR})
include_directories(${INCLUDE_DIRS})

set(CMAKE_CXX_STANDARD 14)

add_executable(lua_cpp_playground main.cpp shared_state/demo_shared_state.h unique_state/demo_unique_state.h)
target_link_libraries(lua_cpp_playground ${LUA_LIBRARY} ${CMAKE_DL_LIBS})