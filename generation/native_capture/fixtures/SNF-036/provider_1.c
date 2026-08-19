/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 1; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 577; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 37010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 37011; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 37014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 37015; }
