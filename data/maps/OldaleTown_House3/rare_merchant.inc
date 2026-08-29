OldaleTown_EventScript_RareMerchant::
# 2 "data/maps/OldaleTown_House3/rare_merchant.pory"
	lock
# 3 "data/maps/OldaleTown_House3/rare_merchant.pory"
	faceplayer
# 4 "data/maps/OldaleTown_House3/rare_merchant.pory"
	msgbox OldaleTown_Text_RareMerchantGreeting
# 5 "data/maps/OldaleTown_House3/rare_merchant.pory"
	goto_if_set FLAG_BADGE08_GET, OldaleTown_EventScript_RareMerchant_2
# 7 "data/maps/OldaleTown_House3/rare_merchant.pory"
	goto_if_set FLAG_BADGE06_GET, OldaleTown_EventScript_RareMerchant_3
# 9 "data/maps/OldaleTown_House3/rare_merchant.pory"
	goto_if_set FLAG_BADGE04_GET, OldaleTown_EventScript_RareMerchant_4
# 11 "data/maps/OldaleTown_House3/rare_merchant.pory"
	goto_if_set FLAG_BADGE02_GET, OldaleTown_EventScript_RareMerchant_5
# 14 "data/maps/OldaleTown_House3/rare_merchant.pory"
	pokemart OldaleTown_Pokemart_RareMerchant_Starter
OldaleTown_EventScript_RareMerchant_1:
# 16 "data/maps/OldaleTown_House3/rare_merchant.pory"
	msgbox OldaleTown_Text_RareMerchantComeAgain
# 17 "data/maps/OldaleTown_House3/rare_merchant.pory"
	release
	return

OldaleTown_EventScript_RareMerchant_2:
# 6 "data/maps/OldaleTown_House3/rare_merchant.pory"
	pokemart OldaleTown_Pokemart_RareMerchant_Tier4
	goto OldaleTown_EventScript_RareMerchant_1

OldaleTown_EventScript_RareMerchant_3:
# 8 "data/maps/OldaleTown_House3/rare_merchant.pory"
	pokemart OldaleTown_Pokemart_RareMerchant_Tier3
	goto OldaleTown_EventScript_RareMerchant_1

OldaleTown_EventScript_RareMerchant_4:
# 10 "data/maps/OldaleTown_House3/rare_merchant.pory"
	pokemart OldaleTown_Pokemart_RareMerchant_Tier2
	goto OldaleTown_EventScript_RareMerchant_1

OldaleTown_EventScript_RareMerchant_5:
# 12 "data/maps/OldaleTown_House3/rare_merchant.pory"
	pokemart OldaleTown_Pokemart_RareMerchant_Tier1
	goto OldaleTown_EventScript_RareMerchant_1


	.align 2
# 28 "data/maps/OldaleTown_House3/rare_merchant.pory"
OldaleTown_Pokemart_RareMerchant_Starter:
# 29 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 30 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NET_BALL
# 31 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TIMER_BALL
# 32 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUXURY_BALL
# 33 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ORAN_BERRY
	.2byte ITEM_NONE

	.align 2
# 36 "data/maps/OldaleTown_House3/rare_merchant.pory"
OldaleTown_Pokemart_RareMerchant_Tier1:
# 37 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 38 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ORAN_BERRY
# 39 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHERI_BERRY
# 40 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHESTO_BERRY
# 41 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PECHA_BERRY
# 42 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAWST_BERRY
# 43 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PERSIM_BERRY
# 44 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NET_BALL
# 45 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TIMER_BALL
# 46 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUXURY_BALL
# 47 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LURE_BALL
# 48 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REPEAT_BALL
# 49 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DUSK_BALL
# 50 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAVY_BALL
# 51 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAST_BALL
# 52 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEVEL_BALL
# 53 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAL_BALL
# 54 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAIRY_FEATHER
# 55 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_EVERSTONE
# 56 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEEK
# 57 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THICK_CLUB
# 58 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_POWDER
# 59 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_POWDER
# 60 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LIGHT_BALL
# 61 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SOOTHE_BELL
# 62 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_OVAL_STONE
# 63 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHIPPED_POT
# 64 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CRACKED_POT
# 65 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 66 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 67 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SYRUPY_APPLE
# 68 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TART_APPLE
# 69 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SWEET_APPLE
	.2byte ITEM_NONE

	.align 2
# 73 "data/maps/OldaleTown_House3/rare_merchant.pory"
OldaleTown_Pokemart_RareMerchant_Tier2:
# 74 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 75 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ORAN_BERRY
# 76 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SITRUS_BERRY
# 77 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHERI_BERRY
# 78 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHESTO_BERRY
# 79 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PECHA_BERRY
# 80 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAWST_BERRY
# 81 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PERSIM_BERRY
# 82 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_PATCH
# 83 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NET_BALL
# 84 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TIMER_BALL
# 85 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUXURY_BALL
# 86 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LURE_BALL
# 87 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REPEAT_BALL
# 88 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DUSK_BALL
# 89 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAVY_BALL
# 90 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAST_BALL
# 91 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEVEL_BALL
# 92 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAL_BALL
# 93 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_BALL
# 94 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LOVE_BALL
# 95 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAIRY_FEATHER
# 96 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_EVERSTONE
# 97 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEEK
# 98 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THICK_CLUB
# 99 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_POWDER
# 100 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_POWDER
# 101 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LIGHT_BALL
# 102 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SOOTHE_BELL
# 103 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_OVAL_STONE
# 104 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHIPPED_POT
# 105 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CRACKED_POT
# 106 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 107 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 108 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SYRUPY_APPLE
# 109 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TART_APPLE
# 110 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SWEET_APPLE
# 111 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ICE_STONE
# 112 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THUNDER_STONE
# 113 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FIRE_STONE
# 114 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_WATER_STONE
# 115 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEAF_STONE
# 116 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MOON_STONE
# 117 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SUN_STONE
# 118 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 119 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 120 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UPGRADE
# 121 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_KINGS_ROCK
# 122 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAZOR_CLAW
# 123 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAZOR_FANG
# 124 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_BLACK_AUGURITE
# 125 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 126 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LOVE_SWEET
# 127 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_BERRY_SWEET
# 128 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CLOVER_SWEET
# 129 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FLOWER_SWEET
# 130 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_STAR_SWEET
# 131 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RIBBON_SWEET
# 132 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_COAT
# 133 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ROTOM_CATALOG
# 134 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GALARICA_CUFF
# 135 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GALARICA_WREATH
	.2byte ITEM_NONE

	.align 2
# 140 "data/maps/OldaleTown_House3/rare_merchant.pory"
OldaleTown_Pokemart_RareMerchant_Tier3:
# 141 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 142 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_PATCH
# 143 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ORAN_BERRY
# 144 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SITRUS_BERRY
# 145 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHERI_BERRY
# 146 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUM_BERRY
# 147 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEPPA_BERRY
# 148 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHESTO_BERRY
# 149 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PECHA_BERRY
# 150 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAWST_BERRY
# 151 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PERSIM_BERRY
# 152 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NET_BALL
# 153 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TIMER_BALL
# 154 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUXURY_BALL
# 155 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LURE_BALL
# 156 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REPEAT_BALL
# 157 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DUSK_BALL
# 158 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAVY_BALL
# 159 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAST_BALL
# 160 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEVEL_BALL
# 161 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAL_BALL
# 162 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_BALL
# 163 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LOVE_BALL
# 164 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAIRY_FEATHER
# 165 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_EVERSTONE
# 166 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEEK
# 167 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THICK_CLUB
# 168 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_POWDER
# 169 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_POWDER
# 170 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LIGHT_BALL
# 171 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SOOTHE_BELL
# 172 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_OVAL_STONE
# 173 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHIPPED_POT
# 174 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CRACKED_POT
# 175 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 176 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 177 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SYRUPY_APPLE
# 178 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TART_APPLE
# 179 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SWEET_APPLE
# 180 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ICE_STONE
# 181 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THUNDER_STONE
# 182 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FIRE_STONE
# 183 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_WATER_STONE
# 184 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEAF_STONE
# 185 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MOON_STONE
# 186 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SUN_STONE
# 187 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 188 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 189 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UPGRADE
# 190 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_KINGS_ROCK
# 191 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAZOR_CLAW
# 192 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAZOR_FANG
# 193 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 194 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LOVE_SWEET
# 195 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_BERRY_SWEET
# 196 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CLOVER_SWEET
# 197 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FLOWER_SWEET
# 198 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_STAR_SWEET
# 199 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RIBBON_SWEET
# 200 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_COAT
# 201 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GALARICA_CUFF
# 202 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GALARICA_WREATH
# 203 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 204 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 205 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PRISM_SCALE
# 206 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PEAT_BLOCK
# 207 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_ALLOY
# 208 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 209 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 210 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DUBIOUS_DISC
# 211 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ELECTIRIZER
# 212 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MAGMARIZER
# 213 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PROTECTOR
# 214 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DRAGON_SCALE
# 215 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REAPER_CLOTH
	.2byte ITEM_NONE

	.align 2
# 219 "data/maps/OldaleTown_House3/rare_merchant.pory"
OldaleTown_Pokemart_RareMerchant_Tier4:
# 220 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_CAPSULE
# 221 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ABILITY_PATCH
# 222 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ORAN_BERRY
# 223 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SITRUS_BERRY
# 224 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHERI_BERRY
# 225 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUM_BERRY
# 226 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEPPA_BERRY
# 227 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHESTO_BERRY
# 228 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PECHA_BERRY
# 229 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAWST_BERRY
# 230 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PERSIM_BERRY
# 231 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LONELY_MINT
# 232 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ADAMANT_MINT
# 233 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NAUGHTY_MINT
# 234 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_BRAVE_MINT
# 235 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_BOLD_MINT
# 236 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_IMPISH_MINT
# 237 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LAX_MINT
# 238 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RELAXED_MINT
# 239 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MODEST_MINT
# 240 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MILD_MINT
# 241 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RASH_MINT
# 242 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUIET_MINT
# 243 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CALM_MINT
# 244 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GENTLE_MINT
# 245 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CAREFUL_MINT
# 246 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SASSY_MINT
# 247 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TIMID_MINT
# 248 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HASTY_MINT
# 249 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_JOLLY_MINT
# 250 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NAIVE_MINT
# 251 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SERIOUS_MINT
# 252 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_NET_BALL
# 253 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TIMER_BALL
# 254 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUXURY_BALL
# 255 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LURE_BALL
# 256 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DUSK_BALL
# 257 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REPEAT_BALL
# 258 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAVY_BALL
# 259 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAST_BALL
# 260 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEVEL_BALL
# 261 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_HEAL_BALL
# 262 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_BALL
# 263 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LOVE_BALL
# 264 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FAIRY_FEATHER
# 265 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_EVERSTONE
# 266 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEEK
# 267 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THICK_CLUB
# 268 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_POWDER
# 269 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_QUICK_POWDER
# 270 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LIGHT_BALL
# 271 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SOOTHE_BELL
# 272 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_OVAL_STONE
# 273 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CHIPPED_POT
# 274 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CRACKED_POT
# 275 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UNREMARKABLE_TEACUP
# 276 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MASTERPIECE_TEACUP
# 277 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SYRUPY_APPLE
# 278 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_TART_APPLE
# 279 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SWEET_APPLE
# 280 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ICE_STONE
# 281 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_THUNDER_STONE
# 282 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FIRE_STONE
# 283 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_WATER_STONE
# 284 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LEAF_STONE
# 285 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MOON_STONE
# 286 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SUN_STONE
# 287 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_AUSPICIOUS_ARMOR
# 288 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MALICIOUS_ARMOR
# 289 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_UPGRADE
# 290 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_KINGS_ROCK
# 291 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAZOR_CLAW
# 292 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RAZOR_FANG
# 293 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_STRAWBERRY_SWEET
# 294 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LOVE_SWEET
# 295 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_BERRY_SWEET
# 296 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_CLOVER_SWEET
# 297 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_FLOWER_SWEET
# 298 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_STAR_SWEET
# 299 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_RIBBON_SWEET
# 300 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_COAT
# 301 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GALARICA_CUFF
# 302 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GALARICA_WREATH
# 303 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DEEP_SEA_TOOTH
# 304 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DEEP_SEA_SCALE
# 305 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PRISM_SCALE
# 306 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PEAT_BLOCK
# 307 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_METAL_ALLOY
# 308 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SCROLL_OF_DARKNESS
# 309 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SCROLL_OF_WATERS
# 310 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DUBIOUS_DISC
# 311 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ELECTIRIZER
# 312 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_MAGMARIZER
# 313 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PROTECTOR
# 314 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_DRAGON_SCALE
# 315 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REAPER_CLOTH
# 316 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GRISEOUS_ORB
# 317 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REVEAL_GLASS
# 318 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_ADAMANT_ORB
# 319 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_LUSTROUS_ORB
# 320 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_GRACIDEA
# 321 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_REINS_OF_UNITY
# 322 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_SOUL_DEW
# 323 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.2byte ITEM_PRISON_BOTTLE
	.2byte ITEM_NONE

OldaleTown_Text_RareMerchantGreeting::
# 20 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.string "Welcome to my little shop! We're a small\n"
	.string "but mighty operation right now, but\l"
	.string "we're planning on expanding into rare\l"
	.string "items!$"

OldaleTown_Text_RareMerchantComeAgain::
# 24 "data/maps/OldaleTown_House3/rare_merchant.pory"
	.string "Thanks for stopping by!$"
