/* Controlled native-loader fixture.
 * Family: SNF-111; provider: 1; profile: lld/test/ELF/tls-weak-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1777; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 112011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 112012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 112013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 112014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 112015; }
