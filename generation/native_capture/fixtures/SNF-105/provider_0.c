/* Controlled native-loader fixture.
 * Family: SNF-105; provider: 0; profile: lld/test/ELF/arm-abs32-dyn.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1680; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 106000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 106001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 106002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 106003; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 106004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 106005; }
