//
// Created by cyber on 12/30/21.
//

#ifndef LUA_CPP_PLAYGROUND_DEMO_SHARED_STATE_H
#define LUA_CPP_PLAYGROUND_DEMO_SHARED_STATE_H

#include <iostream>
#include "../include/Selene/include/selene/State.h"

int demo_shared_state(){
    std::cout << "├───[main.cpp] ENTER demo_shared_state" << std::endl;

    // Create a Lua runtime
    std::cout << "├───[main.cpp] creating Lua state..." << std::endl;
    sel::State lua(true);

    // Execute a Lua script (foo.lua) which defines a shared variable ('shared')
    std::cout << "├───[main.cpp] calling foo.lua..." << std::endl;
    lua.Load("../shared_state/lua/foo.lua");

    // Access the variable from Lua runtime
    std::string shared = lua["shared"];
    std::cout << "├───[main.cpp] shared: '" << shared << "'" << std::endl;

    // Execute another Lua script (bar.lua) which defines a table
    std::cout << "├───[main.cpp] calling bar.lua..." << std::endl;
    lua.Load("../shared_state/lua/bar.lua");

    // Access the table as a string
    std::string table = lua["table"];
    std::cout << "├───[main.cpp] table: '" << table << "'" << std::endl;

    // Clone the table
    lua["table_cpp_clone"] = lua["table"];
    std::cout << "├───[main.cpp] cloning table_cpp_clone = table ... " << std::endl;

    // Execute a final Lua script (baz.lua) which uses the same table
    std::cout << "├───[main.cpp] calling baz.lua..." << std::endl;
    lua.Load("../shared_state/lua/baz.lua");

    std::cout << "└───[main.cpp] done." << std::endl;
    return 0;
}

#endif //LUA_CPP_PLAYGROUND_DEMO_SHARED_STATE_H
