/* Controlled native-loader fixture.
 * Family: SNF-072; provider: 2; profile: lld/test/ELF/debug-line-obj.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1154; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 73020; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 73022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 73023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 73024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 73025; }
