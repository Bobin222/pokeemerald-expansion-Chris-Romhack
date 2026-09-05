PacifidlogTown_House2_MapScripts::
	.byte 0

PacifidlogTown_House2_EventScript_FanClubYoungerBrother::
	lock
	faceplayer
	call_if_set FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_MonAssessment
	call_if_unset FLAG_MET_FANCLUB_YOUNGER_BROTHER, PacifidlogTown_House2_EventScript_FirstMonAssessment
	setflag FLAG_MET_FANCLUB_YOUNGER_BROTHER
	special IsFairyTypeOnLead
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House2_EventScript_CheckFairyFriendship
	special IsDragonTypeOnLead
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House2_EventScript_CheckDragonFriendship
	msgbox PacifidlogTown_House2_Text_NeitherType, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_CheckFairyFriendship:
	goto_if_set FLAG_RECEIVED_FANCLUB_MOONBLAST_TM, PacifidlogTown_House2_EventScript_AlreadyGotMoonblast
	special IsLeadMonAtFriendshipEvoThreshold
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House2_EventScript_GiveMoonblast
	msgbox PacifidlogTown_House2_Text_NotFriendlyEnough, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_CheckDragonFriendship:
	goto_if_set FLAG_RECEIVED_FANCLUB_DRAGON_PULSE_TM, PacifidlogTown_House2_EventScript_AlreadyGotDragonPulse
	special IsLeadMonAtFriendshipEvoThreshold
	goto_if_eq VAR_RESULT, TRUE, PacifidlogTown_House2_EventScript_GiveDragonPulse
	msgbox PacifidlogTown_House2_Text_NotFriendlyEnough, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_GiveMoonblast:
	msgbox PacifidlogTown_House2_Text_GiveMoonblast, MSGBOX_DEFAULT
	giveitem ITEM_TM_MOONBLAST
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_MOONBLAST_TM
	release
	end

PacifidlogTown_House2_EventScript_GiveDragonPulse:
	msgbox PacifidlogTown_House2_Text_GiveDragonPulse, MSGBOX_DEFAULT
	giveitem ITEM_TM_DRAGON_PULSE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_FANCLUB_DRAGON_PULSE_TM
	release
	end

PacifidlogTown_House2_EventScript_AlreadyGotMoonblast:
	msgbox PacifidlogTown_House2_Text_AlreadyGotIt, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_AlreadyGotDragonPulse:
	msgbox PacifidlogTown_House2_Text_AlreadyGotIt, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_MonAssessment::
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_FirstMonAssessment::
	msgbox PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation, MSGBOX_DEFAULT
	msgbox PacifidlogTown_House2_Text_AhYourPokemon, MSGBOX_DEFAULT
	return

PacifidlogTown_House2_EventScript_HappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_NORMAL
	msgbox PacifidlogTown_House2_Text_Rurii, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_VeryFriendlyWithTrainer, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_EventScript_UnhappyAzurill::
	lock
	faceplayer
	waitse
	playmoncry SPECIES_AZURILL, CRY_MODE_ENCOUNTER
	msgbox PacifidlogTown_House2_Text_Rururi, MSGBOX_DEFAULT
	waitmoncry
	msgbox PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch, MSGBOX_DEFAULT
	release
	end

PacifidlogTown_House2_Text_AhYourPokemon:
	.string "Ah!\n"
	.string "Your POKéMON…$"

PacifidlogTown_House2_Text_ChairmansYoungerBrotherOnVacation:
	.string "Er-hem!\p"
	.string "I am the POKéMON FAN CLUB's most\n"
	.string "important person, the CHAIRMAN's\l"
	.string "younger brother.\p"
	.string "I'm here enjoying my vacation with\n"
	.string "POKéMON, yes, indeed.$"

PacifidlogTown_House2_Text_NeitherType:
	.string "Hm? That's a fine POKéMON, but it's\n"
	.string "not quite what I'm looking for today.$"

PacifidlogTown_House2_Text_NotFriendlyEnough:
	.string "It's a good match, but you two aren't\n"
	.string "close enough yet. Bond a little more\l"
	.string "and come back!$"

PacifidlogTown_House2_Text_GiveMoonblast:
	.string "A POKéMON that trusts you THIS much…\n"
	.string "And a FAIRY TYPE, too? Here, take this!$"

PacifidlogTown_House2_Text_GiveDragonPulse:
	.string "A DRAGON that adores you like that…\n"
	.string "Now THAT deserves a TM like this!$"

PacifidlogTown_House2_Text_AlreadyGotIt:
	.string "I've already given you my best for\n"
	.string "that type. Come back with something\l"
	.string "else sometime!$"

PacifidlogTown_House2_Text_Rurii:
	.string "AZURILL: Rurii.$"

PacifidlogTown_House2_Text_VeryFriendlyWithTrainer:
	.string "It appears to be very friendly with the\n"
	.string "TRAINER.$"

PacifidlogTown_House2_Text_Rururi:
	.string "AZURILL: Rururi!$"

PacifidlogTown_House2_Text_DoesntLikeTrainerVeryMuch:
	.string "It doesn't appear to like the TRAINER\n"
	.string "very much.$"

