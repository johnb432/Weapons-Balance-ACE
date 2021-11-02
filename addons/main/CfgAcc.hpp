class asdg_SlotInfo;
class CowsSlot;
class CowsSlot_Rail: CowsSlot {
    class compatibleItems {
        ace_optic_arco_pip = 1;
        ace_optic_arco_2d = 1;
        ace_optic_mrco_2d = 1;
        ace_optic_hamr_2d = 1;
        ace_optic_lrps_pip = 1;
        ace_optic_sos_2d = 1;
        ace_optic_sos_pip = 1;
        ace_optic_lrps_2d = 1;
        ace_optic_hamr_pip = 1;
    };
};

class asdg_MuzzleSlot: asdg_SlotInfo {
    class compatibleItems {};
};

class UK3CB_MuzzleSlot_556_HK33: asdg_MuzzleSlot {
    class compatibleItems {
        ace_muzzle_mzls_l = 1;
    };
};

class UK3CB_MuzzleSlot_762_G3: asdg_MuzzleSlot {
    class compatibleItems {
        ace_muzzle_mzls_b = 1;
    };
};
class UK3CB_MuzzleSlot_762_M14: asdg_MuzzleSlot {
    class compatibleItems {
        ace_muzzle_mzls_b = 1;
    };
};

class asdg_MuzzleSlot_900_3CB: asdg_MuzzleSlot {
    class compatibleItems {
        ace_muzzle_mzls_smg_02 = 1;
    };
};
