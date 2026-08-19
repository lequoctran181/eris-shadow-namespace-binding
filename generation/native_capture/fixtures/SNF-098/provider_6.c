/* Controlled native-loader fixture.
 * Family: SNF-098; provider: 6; profile: lld/test/ELF/weak-undef-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1574; }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 99060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 99061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 99062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 99063; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 99064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 99065; }
