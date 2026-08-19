/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 4; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1332; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 84041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 84042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 84043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 84044; }
