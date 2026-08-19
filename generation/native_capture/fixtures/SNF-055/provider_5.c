/* Controlled native-loader fixture.
 * Family: SNF-055; provider: 5; profile: lld/test/ELF/lto/thinlto-index-only.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 885; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 56050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 56051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 56052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 56054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 56055; }
