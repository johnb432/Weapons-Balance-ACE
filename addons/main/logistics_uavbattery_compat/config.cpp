#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_logistics_uavbattery"
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

class CfgWeapons {
    class CBA_MiscItem_ItemInfo;
    class ACE_ItemCore;
    class ACE_UAVBattery: ACE_ItemCore {
        class ItemInfo: CBA_MiscItem_ItemInfo {
            mass = 8;
        };
    };
};
