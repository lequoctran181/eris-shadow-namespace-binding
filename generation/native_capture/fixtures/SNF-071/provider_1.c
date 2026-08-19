/* Controlled native-loader fixture.
 * Family: SNF-071; provider: 1; profile: lld/test/ELF/ppc64-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1137; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 72010; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 72012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 72013; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 72015; }
