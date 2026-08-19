/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 1; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2369; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 149010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 149011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 149012; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 149014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 149015; }
