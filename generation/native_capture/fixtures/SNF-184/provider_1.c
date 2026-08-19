/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 1; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2945; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 185010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 185011; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 185013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 185014; }
