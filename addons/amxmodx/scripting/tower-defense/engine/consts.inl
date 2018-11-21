#if defined td_engine_consts_includes
  #endinput
#endif
#define td_engine_consts_includes

#define MAP_START_ENTITY_NAME "start"
#define MAP_END_ENTITY_NAME "end"
#define MAP_TRACK_ENTITY_PREFIX "track"
#define MAP_END_TRACK_ENTITY_NAME "end_wall"

#define START_SPRITE_ENTITY_NAME "start_sprite"
#define END_SPRITE_ENTITY_NAME "end_sprite"

#define TOWER_ENTITY_NAME "tower"
#define MONSTER_ENTITY_NAME "monster"
#define MONSTER_DEAD_ENTITY_NAME "monster_dead"
#define MONSTER_HEALTHBAR_ENTITY_NAME "monster_healthbar"

#define MONSTER_TARGET_END_ID -1

#define ANIMATION_RUN_SEQUENCE_ID 4
#define MONSTER_ANIMATION_SPEED_DIVIDER 240.0

#define EMPTY_STRING ""

#define MODEL_MAIN_SCHEMA "MAIN"
#define WAVES_SCHEMA "WAVES"
#define WAVE_CONFIG_SCHEMA "CONFIG"
#define WAVE_MONSTER_TYPES_SCHEMA "MONSTER_TYPES"

#define CONFIG_DIRECTORY "addons/amxmodx/configs/Tower Defense"
#define DEFAULT_CONFIG_FILE "default_config_file"
#define MODELS_CONFIG_FILE "td_models"

#define MAP_CONFIG_KEY_LENGTH 64
#define MODELS_CONFIG_KEY_LENGTH 64
#define MODELS_CONFIG_PATH_LENGTH 128
#define WAVE_MONSTER_TYPE_KEY_LENGTH 64
#define WAVE_CONFIGURATION_KEY_LENGTH 64

#define MONSTER_BIT 1 << 1
#define MONSTER_HEALTHBAR_BIT 1 << 2
#define TRACK_WALL_BIT 1 << 3
#define END_WALL_BIT 1 << 4

enum MAP_ENTITIES_ENUM
{
  START_ENTITY,
  START_SPRITE_ENTITY,
  END_ENTITY,
  END_SPRITE_ENTITY,
  TOWER_ENTITY,
}

enum MAP_CONFIGURATION_ENUM
{
  bool:SHOW_START_SPRITE,
  bool:SHOW_END_SPRITE,
  bool:SHOW_TOWER,
  bool:SHOW_BLAST_ON_MONSTER_TOUCH,
  TOWER_HEALTH,
  MAP_TIME_TO_WAVE
}

enum MODELS_ENUM
{
  TOWER_MODEL,
  START_SPRITE_MODEL,
  END_SPRITE_MODEL,
  HEALTHBAR_SPRITE_MODEL
}

enum WAVE_MONSTER_DATA_ENUM
{
  MONSTER_TYPE,
  MONSTER_COUNT,
  MONSTER_HEALTH,
  MONSTER_SPEED,
  MONSTER_DEPLOY_INTERVAL,
  MONSTER_DEPLOY_EXTRA_DELAY
}

enum WAVE_CONFIG_ENUM
{
  WAVE_CONFIG,
  WAVE_MONSTER_TYPES
}

enum WAVE_CONFIGURATION_ENUM
{
  WAVE_TIME_TO_WAVE
}