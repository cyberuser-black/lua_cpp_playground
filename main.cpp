#include <iostream>
#include "include/Selene/include/selene/State.h"

int main() {
    std::cout << "├───[main.cpp] hello, world!" << std::endl;

    // Create a Lua runtime
    std::cout << "├───[main.cpp] creating Lua state..." << std::endl;
    sel::State lua(true);

    // Execute a Lua script (foo.lua) which defines a shared variable ('shared')
    std::cout << "├───[main.cpp] calling foo.lua..." << std::endl;
    lua.Load("../lua/foo.lua");

    // Access the variable from Lua runtime
    std::string shared = lua["shared"];
    std::cout << "├───[main.cpp] shared: '" << shared << "'" << std::endl;

    // Execute another Lua script (bar.lua) which defines a table
    std::cout << "├───[main.cpp] calling bar.lua..." << std::endl;
    lua.Load("../lua/bar.lua");

    // Access the table
    std::string table = lua["table"];
    std::cout << "├───[main.cpp] table: '" << table << "'" << std::endl;

    // Execute a final Lua script (baz.lua) which uses the same table
    std::cout << "├───[main.cpp] calling baz.lua..." << std::endl;
    lua.Load("../lua/baz.lua");

    std::cout << "└───[main.cpp] done." << std::endl;
    return 0;
}
