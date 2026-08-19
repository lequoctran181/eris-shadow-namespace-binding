/* Controlled native-loader fixture.
 * Family: SNF-060; provider: 0; profile: lld/test/ELF/gc-absolute.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 960; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 61000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 61001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 61002; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 61003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 61004; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 61005; }
