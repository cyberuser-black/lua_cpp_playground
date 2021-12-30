print("│   ├───[bar.lua] running...")
package.path = package.path .. ";../shared_state/lua/?.lua"
utils = require("utils")

print("│   ├───[bar.lua] shared: '" .. a_selector .. "'")
table = { a = 1, b = 2, c = 3 }
print("│   └───[bar.lua] table = '" .. utils.dump(table) .. "'")

function print_shared()
    print("│   │   └───[print_shared] running...")
    return
end