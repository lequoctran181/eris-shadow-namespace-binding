/* Controlled native-loader fixture.
 * Family: SNF-071; provider: 5; profile: lld/test/ELF/ppc64-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1141; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 72051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 72052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 72053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 72054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 72055; }
