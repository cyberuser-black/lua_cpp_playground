print("│   ├───[bar.lua] running...")
package.path = package.path .. ";../lua/?.lua"
utils = require("utils")

print("│   ├───[bar.lua] shared: '" .. shared .. "'")
table = { a = 1, b = 2, c = 3 }
print("│   └───[bar.lua] table = '" .. utils.dump(table) .. "'")