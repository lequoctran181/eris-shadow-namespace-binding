/* Controlled native-loader fixture.
 * Family: SNF-071; provider: 7; profile: lld/test/ELF/ppc64-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1143; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 72070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 72071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 72072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 72073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 72074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 72075; }
