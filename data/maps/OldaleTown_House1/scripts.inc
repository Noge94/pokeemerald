OldaleTown_House1_MapScripts:: @ 81FBE85
	.byte 0
	
OldaleTown_House1_EventScript_Laptop:: @ 822B345
	msgbox OldaleTown_House1_Text_Laptop, MSGBOX_YESNO
	closemessage
	compare VAR_RESULT, YES
	goto_if_eq OldaleTown_House1_EventScript_TwitterFollow
	releaseall
	end


OldaleTown_House1_EventScript_TwitterFollow:: @ 825E569
	msgbox OldaleTown_House1_Text_TwitterFollow, MSGBOX_DEFAULT
	release
	end

OldaleTown_House1_Text_Laptop: @ 822B6FC
	.string "NOGE's twitter acount is on the screen.\p"
	.string "Most of the content is about cats,\n"
	.string "smash and bad indie games.\p"
	.string "Follow him?$"

OldaleTown_House1_Text_TwitterFollow: @ 822B6FC
	.string "You're now following NogeSky!$"
	
OldaleTown_House1_EventScript_Trophy:: @ 822B345
	msgbox OldaleTown_House1_Text_Trophy, MSGBOX_SIGN
	end

OldaleTown_House1_Text_Trophy: @ 822B6FC
	.string "Champion of the Indigo League\n"
	.string "          Year 2000          $"
	
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
	.string "The fridge contains unbelievable\n"
	.string "amounts of pizza.$"

OldaleToun_House1_EventScript_GameCube:: @ 81F865F
	msgbox OldaleToun_House1_Text_ItsAGameCube, MSGBOX_SIGN
	end
	
OldaleToun_House1_Text_ItsAGameCube: @ 81F884F
	.string "It may look like a Nintendo GameCube,\n"
	.string "but it is actually a Nintendo Switch.$"


OldaleTown_House1_EventScript_ItemUltraball:: @ 8290D26
	giveitem_std ITEM_ULTRA_BALL, 1, 1
	end
