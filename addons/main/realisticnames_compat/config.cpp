#include "script_component.hpp"

class CfgPatches {
    class SUBADDON {
        addonRootClass = QUOTE(ADDON);
        units[] = {};
        weapons[] = {};
        requiredVersion = REQUIRED_VERSION;
        requiredAddons[] = {
            "ace_realisticnames"
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
    class arifle_AKM_base_F;
    class arifle_AKM_F: arifle_AKM_base_F {
        displayName = "AKMN";
    };
    class arifle_AKM_FL_F: arifle_AKM_F {
        displayName = "AKM (Flashlight)";
    };

    class arifle_AK12_GL_base_F;
    class arifle_AK12_GL_F: arifle_AK12_GL_base_F {
        displayName = "AK-15 (GP-25)";
    };
    class arifle_AK12_GL_arid_F: arifle_AK12_GL_base_F {
        displayName = "AK-15 (GP-25/Arid)";
    };
    class arifle_AK12_GL_lush_F: arifle_AK12_GL_base_F {
        displayName = "AK-15 (GP-25/Lush)";
    };

    class arifle_RPK12_base_F;
    class arifle_RPK12_F: arifle_RPK12_base_F {
        displayName = "RPKM";
    };
    class arifle_RPK12_arid_F: arifle_RPK12_base_F {
        displayName = "RPKM (Arid)";
    };
    class arifle_RPK12_lush_F: arifle_RPK12_base_F {
        displayName = "RPKM (Lush)";
    };

    class LMG_03_base_F;
    class LMG_03_F: LMG_03_base_F {
        displayName = "FN Minimi Mk3";
    };

    class Rifle_Long_Base_F;
    class LMG_Zafir_F: Rifle_Long_Base_F {
        displayName = "Negev NG-7R";
    };

    class SMG_05_base_F;
    class SMG_05_F: SMG_05_base_F {
        displayName = "HK MP5K-PDW";
    };
};
