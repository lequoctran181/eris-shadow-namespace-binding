/* Controlled native-loader fixture.
 * Family: SNF-092; provider: 7; profile: lld/test/ELF/version-script-complex-wildcards.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1479; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 93070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 93071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 93073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 93075; }
