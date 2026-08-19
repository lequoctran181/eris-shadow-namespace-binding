/* Controlled native-loader fixture.
 * Family: SNF-062; provider: 0; profile: lld/test/ELF/dynamic-list-weak-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 992; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 63000; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 63001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 63002; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 63003; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 63004; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 63005; }
