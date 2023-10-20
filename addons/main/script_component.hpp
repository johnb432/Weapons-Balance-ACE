#define COMPONENT main
#define COMPONENT_BEAUTIFIED ACE
#include "script_mod.hpp"

// #define DEBUG_MODE_FULL
// #define DISABLE_COMPILE_CACHE
// #define DEBUG_SYNCHRONOUS
// #define ENABLE_PERFORMANCE_COUNTERS

#ifdef DEBUG_ENABLED_WB_ACE
    #define DEBUG_MODE_FULL
#endif

#ifdef DEBUG_SETTINGS_WB_ACE
    #define DEBUG_SETTINGS DEBUG_SETTINGS_WB_ACE
#endif

#include "script_macros.hpp"
