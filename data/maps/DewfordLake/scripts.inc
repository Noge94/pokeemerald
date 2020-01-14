DewfordLake_MapScripts::
	.byte 0

DewfordLake_EventScript_Brawly:: @ 81FC8B7
	msgbox DewfordLake_Text_Brawly, MSGBOX_NPC
	fadescreen 1
	removeobject 4
	setflag FLAG_MET_BRAWLY_AT_LAKE
	delay 30
	fadescreen 0
	end

DewfordLake_Text_Brawly: @ 81FCB9F
	.string "Oh,\l"
	.string "you came to challenge the gym leader?\p"
	.string "Nice to meet you,\n"
	.string "My name is BRAWLY.\p"
	.string "I usually come to the\n"
	.string "lake to focus my mind.\p"
	.string "I will go to the gym right now and\n"
	.string "get everything ready for our match,\l"
	.string "sorry to keep you wating!$"

DewfordLake_EventScript_Seki:: @ 81FC8B7
	trainerbattle_single TRAINER_SEKI, DewfordLake_Text_SekiPreBattle, DewfordLake_Text_SekiDefeat
	msgbox DewfordLake_Text_SekiPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordLake_Text_SekiPreBattle: @ 81FCB9F
	.string "Humans are free.\p"
	.string "Although we can't fly through\n"
	.string "the skies all alone,\p"
	.string "if we can think of it,\n"
	.string "we can do almost anything.$"

DewfordLake_Text_SekiDefeat: @ 81FCBB8
	.string "I was so hungry that I was thinking\n"
	.string "about the most useless things.$"

DewfordLake_Text_SekiPostBattle: @ 81FCBCA
	.string "Dewford is so small...\n"
	.string "Here, every day is the same.\p"
	.string "Some days I just want to move far away\n"
	.string "and start all over again from scratch.$"

DewfordLake_EventScript_Aiko:: @ 81FC8B7
	trainerbattle_single TRAINER_AIKO, DewfordLake_Text_AikoPreBattle, DewfordLake_Text_AikoDefeat
	msgbox DewfordLake_Text_AikoPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordLake_Text_AikoPreBattle: @ 81FCB9F
	.string "Say, if we saw shooting stars...\n"
	.string "What would you wish for?$"

DewfordLake_Text_AikoDefeat: @ 81FCBB8
	.string "I would wish for shooting stars\n"
	.string "to disappear forever.$"

DewfordLake_Text_AikoPostBattle: @ 81FCBCA
	.string "Guess what? In the near future,\n"
	.string "oil's going to run out.\p"
	.string "And the environment will be so\n"
	.string "polluted that humans will go extinct.\p"
	.string "So we'll have to colonize other stars!\n"
	.string "Did you know that!?$"

DewfordLake_EventScript_Shimizu:: @ 81FC8B7
	trainerbattle_single TRAINER_SHIMIZU, DewfordLake_Text_ShimizuPreBattle, DewfordLake_Text_ShimizuDefeat
	msgbox DewfordLake_Text_ShimizuPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordLake_Text_ShimizuPreBattle: @ 81FCB9F
	.string "I can see God,\n"
	.string "can you see him?$"

DewfordLake_Text_ShimizuDefeat: @ 81FCBB8
	.string "After all,\n"
	.string "I can't do much by myself…$"

DewfordLake_Text_ShimizuPostBattle: @ 81FCBCA
	.string "SEKI told me that the Good of Poop\n"
	.string "doesn't exist.\p"
	.string "But when I look at him,\n"
	.string "he looks so real...$"
