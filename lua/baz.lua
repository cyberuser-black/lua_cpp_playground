print("│   ├───[baz.lua] running...")
package.path = package.path .. ";../lua/?.lua"
utils = require("utils")

print("│   ├───[baz.lua] shared: '" .. shared .. "'")
print("│   └───[bar.lua] table: '" .. utils.dump(table) .. "'")