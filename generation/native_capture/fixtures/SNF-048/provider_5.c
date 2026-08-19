/* Controlled native-loader fixture.
 * Family: SNF-048; provider: 5; profile: lld/test/ELF/symbol-ordering-file-warnings.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 773; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 49050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 49051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 49052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 49053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 49054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 49055; }
