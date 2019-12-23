OldaleTown_House1_MapScripts:: @ 81FBE85
	.byte 0
	
OldaleTown_House1_EventScript_Laptop:: @ 822B345
	msgbox OldaleTown_House1_Text_Laptop, MSGBOX_SIGN
	end

OldaleTown_House1_Text_Laptop: @ 822B6FC
	.string "There's a message on the screen:\p"
	.string "“Null pointer exception”\p"
	.string "...............\n"
	.string "Does this guy know how to code?$"
	
OldaleTown_House1_EventScript_Box:: @ 822B345
	msgbox OldaleTown_House1_Text_Box, MSGBOX_SIGN
	end

OldaleTown_House1_Text_Box: @ 822B6FC
	.string "It's full of videogames and manga.$"

OldaleTown_House1_EventScript_Books:: @ 822B345
	msgbox OldaleTown_House1_Text_Books, MSGBOX_SIGN
	end

OldaleTown_House1_Text_Books: @ 822B6FC
	.string "There are programming books on the floor.$"

OldaleTown_House1_EventScript_Fridge:: @ 822B345
	msgbox OldaleTown_House1_Text_Fridge, MSGBOX_SIGN
	end

OldaleTown_House1_Text_Fridge: @ 822B6FC
	.string "Looks like he eats pizza every day.$"

OldaleToun_House1_EventScript_GameCube:: @ 81F865F
	msgbox OldaleToun_House1_Text_ItsAGameCube, MSGBOX_SIGN
	end
	
OldaleToun_House1_Text_ItsAGameCube: @ 81F884F
	.string "It's a Nintendo GameCube.$"


OldaleTown_House1_EventScript_ItemUltraball:: @ 8290D26
	giveitem_std ITEM_ULTRA_BALL, 1, 1
	end
