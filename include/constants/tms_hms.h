#ifndef GUARD_CONSTANTS_TMS_HMS_H
#define GUARD_CONSTANTS_TMS_HMS_H

#define FOREACH_TM(F) \
    F(GIGA_IMPACT) \
    F(DRAGON_CLAW) \
    F(WATER_PULSE) \
    F(CALM_MIND) \
    F(HYPER_VOICE) \
    F(TOXIC) \
    F(SNOWSCAPE) \
    F(BULK_UP) \
    F(WORK_UP) \
    F(BATON_PASS) \
    F(SUNNY_DAY) \
    F(TAUNT) \
    F(ICE_BEAM) \
    F(BLIZZARD) \
    F(HYPER_BEAM) \
    F(LIGHT_SCREEN) \
    F(PROTECT) \
    F(RAIN_DANCE) \
    F(GIGA_DRAIN) \
    F(RAGING_FURY) \
    F(BLAZE_KICK) \
    F(SOLAR_BEAM) \
    F(CLOSE_COMBAT) \
    F(THUNDERBOLT) \
    F(THUNDER) \
    F(EARTHQUAKE) \
    F(FOCUS_BLAST) \
    F(DIG) \
    F(PSYCHIC) \
    F(SHADOW_BALL) \
    F(BRICK_BREAK) \
    F(DRAIN_PUNCH) \
    F(REFLECT) \
    F(BODY_PRESS) \
    F(FLAMETHROWER) \
    F(SLUDGE_BOMB) \
    F(SANDSTORM) \
    F(FIRE_BLAST) \
    F(LIQUIDATION) \
    F(AERIAL_ACE) \
    F(TORMENT) \
    F(FACADE) \
    F(SECRET_POWER) \
    F(REST) \
    F(BRAVE_BIRD) \
    F(THIEF) \
    F(HURRICANE) \
    F(SKILL_SWAP) \
    F(AIR_SLASH) \
    F(OVERHEAT) \
    F(STEALTH_ROCK) \
    F(THUNDER_WAVE) \
    F(SOLAR_BLADE)

#define FOREACH_HM(F) \
    F(CUT) \
    F(FLY) \
    F(SURF) \
    F(STRENGTH) \
    F(FLASH) \
    F(ROCK_SMASH) \
    F(WATERFALL) \
    F(DIVE)

#define FOREACH_TMHM(F) \
    FOREACH_TM(F) \
    FOREACH_HM(F)

#endif
