/* Controlled native-loader fixture.
 * Family: SNF-068; provider: 7; profile: lld/test/ELF/eh-frame-dynrel-offset.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1095; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 69070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 69071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 69072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 69073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 69075; }
