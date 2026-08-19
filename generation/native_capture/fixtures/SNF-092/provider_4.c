/* Controlled native-loader fixture.
 * Family: SNF-092; provider: 4; profile: lld/test/ELF/version-script-complex-wildcards.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1476; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 93040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 93041; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 93043; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 93045; }
