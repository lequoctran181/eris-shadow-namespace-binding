/* Controlled native-loader fixture.
 * Family: SNF-007; provider: 4; profile: lld/test/ELF/export-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 116; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 8040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 8041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 8042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 8043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 8045; }
