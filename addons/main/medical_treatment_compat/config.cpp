#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_medical_treatment"
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

class ace_medical_replacementItems {
    ItemType_401[] = {{"ACE_packingBandage",2},{"ACE_morphine",1},{"ACE_tourniquet",1}};
    ItemType_619[] = {{"ACE_packingBandage",4},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_bloodIV_500",3},{"ACE_tourniquet",1},{"ACE_splint",2}};
};
