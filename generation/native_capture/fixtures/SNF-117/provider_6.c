/* Controlled native-loader fixture.
 * Family: SNF-117; provider: 6; profile: lld/test/ELF/lto/common2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1878; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 118060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 118061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 118062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 118063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 118064; }
