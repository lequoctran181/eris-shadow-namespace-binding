/* Controlled native-loader fixture.
 * Family: SNF-165; provider: 1; profile: lld/test/ELF/protected-function-access.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2641; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 166010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 166011; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 166014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 166015; }
