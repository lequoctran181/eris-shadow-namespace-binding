/* Controlled native-loader fixture.
 * Family: SNF-022; provider: 4; profile: lld/test/ELF/wrap-drop-shared-original.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 356; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 23041; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 23045; }
