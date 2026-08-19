/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 1; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1633; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 103010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 103011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 103012; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 103014; }
