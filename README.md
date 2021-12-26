# lua_cpp_playground
A small demo of C++ ⇔ Lua interface capabilities.
This example demonstrates the following:
* Creating a Lua runtime in C++.
* Defining a global variable (string) in Lua, then accessing it from C++ and other Lua scripts executed on that same runtime.
* Defining a table in Lua, then accessing it from C++ and other Lua scripts executed on the same runtime.
* Passing a table from lua to lua through C++ (FAILED)
## Setup
```
git clone https://github.com/cyberuser-black/lua_cpp_playground.git
```
## Compile
```
cmake --build lua_cpp_playground/cmake-build-debug --target lua_cpp_playground
```
## Run
```
./cmake-build-debug/lua_cpp_playground
```
## Output
```bash
$ lua_cpp_playground/cmake-build-debug/lua_cpp_playground
├───[main.cpp] hello, world!
├───[main.cpp] creating Lua state...
├───[main.cpp] calling foo.lua...
│   ├───[foo.lua] running...
│   └───[foo.lua] shared = 'foo'
├───[main.cpp] shared: 'foo'
├───[main.cpp] calling bar.lua...
│   ├───[bar.lua] running...
│   │   └───[utils.lua] running...
│   ├───[bar.lua] shared: 'foo'
│   └───[bar.lua] table = '{ ["c"] = 3,["a"] = 1,["b"] = 2,} '
├───[main.cpp] table: ''
├───[main.cpp] cloning table_cpp_clone = table ... 
├───[main.cpp] calling baz.lua...
│   ├───[baz.lua] running...
│   ├───[baz.lua] shared: 'foo'
│   ├───[bar.lua] table: '{ ["c"] = 3,["a"] = 1,["b"] = 2,} '
│   └───[bar.lua] table_cpp_clone: 'nil'
└───[main.cpp] done.

```
