#include "script_component.hpp"

class CfgPatches {
    class ADDON {
        name = COMPONENT_NAME;
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "cba_main",
            "ace_ballistics",
            "ace_medical_treatment",
            "ace_logistics_uavbattery",
            "ace_realisticweights",
            "ace_realisticnames"
        };
        author = "johnb43";
        authors[] = {
            "johnb43"
        };
        url = "https://github.com/johnb432/Weapons-Balance-ACE";
        VERSION_CONFIG;
    };
};

#include "CfgAcc.hpp"
#include "CfgBettIR.hpp"
#include "CfgMagazines.hpp"
#include "CfgMagazineWells.hpp"
#include "CfgWeapons.hpp"

class ace_medical_replacementItems {
    ItemType_401[] = {{"ACE_packingBandage",2},{"ACE_morphine",1},{"ACE_tourniquet",1}};
    ItemType_619[] = {{"ACE_packingBandage",4},{"ACE_epinephrine",1},{"ACE_morphine",1},{"ACE_bloodIV_500",3},{"ACE_tourniquet",1},{"ACE_splint",2}};
};
