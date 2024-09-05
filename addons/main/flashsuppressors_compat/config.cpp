#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_flashsuppressors"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-ACE";
        skipWhenMissingDependencies = 1;
        VERSION_CONFIG;
    };
};

class asdg_MuzzleSlot_556;
class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot_556 {
    class compatibleItems {
        ACE_muzzle_mzls_L = 1;
    };
};

class asdg_MuzzleSlot_762;
class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot_762 {
    class compatibleItems {
        ACE_muzzle_mzls_B = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot_762 {
    class compatibleItems {
        ACE_muzzle_mzls_B = 1;
    };
};

class asdg_MuzzleSlot;
class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        ACE_muzzle_mzls_smg_02 = 1;
    };
};
