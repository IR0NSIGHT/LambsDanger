#define COMPONENT wp
#define COMPONENT_BEAUTIFIED Danger WP
#include "\z\lambs\addons\main\script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE

#ifdef DEBUG_ENABLED_WP
    #define DEBUG_MODE_FULL
#endif
    #ifdef DEBUG_SETTINGS_WP
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WP
#endif

#include "\z\lambs\addons\main\script_macros.hpp"

#define TASK_ARTILLERY_ROUNDS 6
#define TASK_ARTILLERY_SPREAD 75
#define TASK_ARTILLERY_SKIPCHECKROUNDS false

#define TASK_ASSAULT_ISRETREAT false
#define TASK_ASSAULT_DELETEONSTARTUP false
#define TASK_ASSAULT_DISTANCETHRESHOLD 15
#define TASK_ASSAULT_CYCLETIME 3

#define TASK_CAMP_TELEPORT false
#define TASK_CAMP_PATROL false
#define TASK_CAMP_SIZE 50
#define TASK_CAMP_EXITWP 0

#define TASK_CQB_CYCLETIME 21
#define TASK_CQB_DELETEONSTARTUP false
#define TASK_CQB_SIZE 50

#define TASK_GARRISON_EXITCONDITIONS -2
#define TASK_GARRISON_SORTBYHEIGHT false
#define TASK_GARRISON_TELEPORT false
#define TASK_GARRISON_PATROL false
#define TASK_GARRISON_SIZE 50

#define TASK_PATROL_WAYPOINTCOUNT 4
#define TASK_PATROL_MOVEWAYPOINTS false
#define TASK_PATROL_SIZE 200

#define TASK_CREEP_MOVINGCENTER false
#define TASK_CREEP_PLAYERSONLY false
#define TASK_CREEP_CYCLETIME 30
#define TASK_CREEP_SIZE 1000

#define TASK_HUNT_MOVINGCENTER false
#define TASK_HUNT_PLAYERSONLY false
#define TASK_HUNT_CYCLETIME 70
#define TASK_HUNT_SIZE 1000

#define TASK_RUSH_MOVINGCENTER false
#define TASK_RUSH_PLAYERSONLY false
#define TASK_RUSH_CYCLETIME 15
#define TASK_RUSH_SIZE 1000
