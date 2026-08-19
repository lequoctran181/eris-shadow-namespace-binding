/* Controlled native-loader fixture.
 * Family: SNF-153; provider: 5; profile: lld/test/ELF/version-script-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2453; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 154050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 154051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 154052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 154053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 154054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 154055; }
