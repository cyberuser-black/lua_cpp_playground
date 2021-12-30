print("│   │   └───[utils.lua] running...")
local utils = {}

--[[https://stackoverflow.com/questions/9168058/how-to-dump-a-table-to-console]]
function utils.dump(o)
    if type(o) == 'table' then
        local s = '{ '
        for k,v in pairs(o) do
            if type(k) ~= 'number' then k = '"'..k..'"' end
            s = s .. '['..k..'] = ' .. utils.dump(v) .. ','
        end
        return s .. '} '
    else
        return tostring(o)
    end
end

return utils