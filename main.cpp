#include <iostream>
#include "include/Selene/include/selene/State.h"

int main() {
    std::cout << "├───[main.cpp] hello, world!" << std::endl;
    std::cout << "├───[main.cpp] creating Lua state..." << std::endl;
    sel::State lua(true);
    std::cout << "├───[main.cpp] calling foo.lua..." << std::endl;
    lua.Load("../lua/foo.lua");
    std::string shared = lua["shared"];
    std::cout << "├───[main.cpp] shared: '" << shared << "'" << std::endl;
    std::cout << "├───[main.cpp] calling bar.lua..." << std::endl;
    lua.Load("../lua/bar.lua");
    std::string table = lua["table"];
    std::cout << "├───[main.cpp] table: '" << table << "'" << std::endl;
    std::cout << "├───[main.cpp] calling baz.lua..." << std::endl;
    lua.Load("../lua/baz.lua");
    std::cout << "└───[main.cpp] done." << std::endl;
//    lua["get_data_current"] = &DataAccess::get_data_current; //TODO: change to new cache get_data method/function
//    lua["action"] = &Action::invoke_action;
//    lua["API_trace"] = &API_trace;
//    lua["invoke_rule"]();
    return 0;
}
