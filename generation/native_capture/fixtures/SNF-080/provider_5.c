/* Controlled native-loader fixture.
 * Family: SNF-080; provider: 5; profile: lld/test/ELF/lto/version-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1285; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 81050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 81051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 81052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 81053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 81055; }
