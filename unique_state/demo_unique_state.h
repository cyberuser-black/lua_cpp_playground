//
// Created by cyber on 12/30/21.
//

#ifndef LUA_CPP_PLAYGROUND_DEMO_UNIQUE_STATES_H
#define LUA_CPP_PLAYGROUND_DEMO_UNIQUE_STATES_H

#include <iostream>
#include "../include/Selene/include/selene/State.h"

struct DemoStruct{
    int x;
    int y;
    int z;
    DemoStruct(int x_, int y_, int z_) : x(x_), y(y_), z(z_) {}
    int magic(int num) { return ((num * x) + y) * z;}
};

int demo_unique_states(){
    std::cout << "├───[main.cpp] ENTER demo_unique_states" << std::endl;

    // Create a Lua runtime for a.lua
    std::cout << "├───[main.cpp] creating Lua state 'lua_a'..." << std::endl;
    sel::State lua_a(true);
    lua_a.Load("../unique_state/lua/a.lua");

    // Access the variable from Lua runtime
    std::string a_string = lua_a["a"];
    std::cout << "├───[main.cpp] a: '" << a_string << "'" << std::endl;

    // Create a Lua runtime for b.lua
    std::cout << "├───[main.cpp] creating Lua state 'lua_b'..." << std::endl;
    sel::State lua_b(true);
    lua_b["a_selector"] = lua_a["a"]; // transfer directly using selectors
    lua_b["a_string"] = a_string;
    lua_b.Load("../unique_state/lua/b.lua");



    return 0;
}

#endif //LUA_CPP_PLAYGROUND_DEMO_UNIQUE_STATES_H
