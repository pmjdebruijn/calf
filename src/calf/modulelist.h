    PER_MODULE_ITEM(filter, false, "filter")
    PER_MODULE_ITEM(flanger, false, "flanger")
    PER_MODULE_ITEM(reverb, false, "reverb")
    PER_MODULE_ITEM(monosynth, true, "monosynth")
    PER_MODULE_ITEM(vintage_delay, false, "vintagedelay")
    PER_MODULE_ITEM(organ, true, "organ")
    PER_MODULE_ITEM(rotary_speaker, false, "rotaryspeaker")
    PER_MODULE_ITEM(phaser, false, "phaser")
#ifdef ENABLE_EXPERIMENTAL
    PER_SMALL_MODULE_ITEM(small_lp_filter, "lowpass12")
    PER_SMALL_MODULE_ITEM(small_hp_filter, "highpass12")
    PER_SMALL_MODULE_ITEM(small_bp_filter, "bandpass6")
    PER_SMALL_MODULE_ITEM(small_br_filter, "notch6")
    PER_SMALL_MODULE_ITEM(small_onepole_lp_filter, "lowpass6")
    PER_SMALL_MODULE_ITEM(small_onepole_hp_filter, "highpass6")
    PER_SMALL_MODULE_ITEM(small_onepole_ap_filter, "allpass")
    PER_SMALL_MODULE_ITEM(small_min, "min")
    PER_SMALL_MODULE_ITEM(small_max, "max")
    PER_SMALL_MODULE_ITEM(small_minus, "minus")
    PER_SMALL_MODULE_ITEM(small_mul, "mul")
    PER_SMALL_MODULE_ITEM(small_neg, "neg")
    PER_SMALL_MODULE_ITEM(small_map_lin2exp, "lin2exp")
    PER_SMALL_MODULE_ITEM(small_square_osc, "square_osc")
    PER_SMALL_MODULE_ITEM(small_saw_osc, "saw_osc")
    PER_SMALL_MODULE_ITEM(small_print, "print")
    PER_SMALL_MODULE_ITEM(small_print2, "print2")
    PER_SMALL_MODULE_ITEM(small_quadpower_a, "quadpower_a")
    PER_SMALL_MODULE_ITEM(small_quadpower_c, "quadpower_c")
#endif
#undef PER_MODULE_ITEM
#undef PER_SMALL_MODULE_ITEM
