print("│   ├───[baz.lua] running...")
package.path = package.path .. ";../shared_state/lua/?.lua"
utils = require("utils")

print("│   ├───[baz.lua] shared: '" .. a_selector .. "'")
print("│   ├───[bar.lua] table: '" .. utils.dump(table) .. "'")
print("│   └───[bar.lua] table_cpp_clone: '" .. utils.dump(table_cpp_clone) .. "'")