/* Controlled native-loader fixture.
 * Family: SNF-028; provider: 1; profile: lld/test/ELF/verdef-defaultver.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 449; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 29010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 29011; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 29014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 29015; }
