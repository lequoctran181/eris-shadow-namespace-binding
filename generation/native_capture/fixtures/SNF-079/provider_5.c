/* Controlled native-loader fixture.
 * Family: SNF-079; provider: 5; profile: lld/test/ELF/lto/archive.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1269; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 80050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 80051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 80052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 80053; }
