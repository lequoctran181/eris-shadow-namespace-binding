/* Controlled native-loader fixture.
 * Family: SNF-068; provider: 6; profile: lld/test/ELF/eh-frame-dynrel-offset.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1094; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 69060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 69061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 69062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 69063; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 69065; }
