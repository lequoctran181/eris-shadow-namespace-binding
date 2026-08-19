/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 4; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3156; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 198040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 198041; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 198043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 198044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 198045; }
