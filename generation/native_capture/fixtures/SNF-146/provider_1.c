/* Controlled native-loader fixture.
 * Family: SNF-146; provider: 1; profile: lld/test/ELF/arm-tls-norelax-gd-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2337; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 147011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 147012; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 147015; }
