/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 0; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 2368; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 149000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 149001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 149002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 149003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 149004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 149005; }
