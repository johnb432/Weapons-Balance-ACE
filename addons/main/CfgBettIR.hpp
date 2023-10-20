#define BETTIR_COMPAT(classname) class classname: NVGoggles {}
#define BETTIR_COMPAT_MONO(classname) class classname: __base_Monocular {}

class BettIR_Config {
    class CompatibleNightvisionGoggles {
        class __base_Monocular;
        class NVGoggles;

        BETTIR_COMPAT(ACE_NVG_Binocular);
        BETTIR_COMPAT(ACE_NVG_Biocular);
        BETTIR_COMPAT(ACE_NVG_Quadocular);
        BETTIR_COMPAT(ACE_NVG_Gen1_Brown);
        BETTIR_COMPAT(ACE_NVG_Gen1_Green);
        BETTIR_COMPAT(ACE_NVG_Gen2_Black);
        BETTIR_COMPAT(ACE_NVG_Gen2_Brown);
        BETTIR_COMPAT(ACE_NVG_Gen4_Black);
        BETTIR_COMPAT(ACE_NVG_Gen4_Green);
        BETTIR_COMPAT(ACE_NVG_Wide_Black);
        BETTIR_COMPAT(ACE_NVG_Wide_Green);

        BETTIR_COMPAT(ACE_NVGoggles_OPFOR_WP);
        BETTIR_COMPAT(ACE_NVGoggles_WP);
        BETTIR_COMPAT(ACE_NVGoggles_INDEP_WP);
        BETTIR_COMPAT(ACE_NVG_Gen4_Black_WP);
        BETTIR_COMPAT(ACE_NVG_Gen4_WP);
        BETTIR_COMPAT(ACE_NVG_Gen4_Green_WP);
        BETTIR_COMPAT(ACE_NVG_Wide_Black_WP);
        BETTIR_COMPAT(ACE_NVG_Wide_WP);
        BETTIR_COMPAT(ACE_NVG_Wide_Green_WP);

        BETTIR_COMPAT_MONO(ACE_NVG_Monocular);
    };

    class CompatibleAttachments {
        delete ACE_acc_pointer_green;

        class __base_rightSiderailPointer;
        class ACE_acc_pointer_green_IR: __base_rightSiderailPointer {};
    };
};
