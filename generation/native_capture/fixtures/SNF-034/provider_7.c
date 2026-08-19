/* Controlled native-loader fixture.
 * Family: SNF-034; provider: 7; profile: lld/test/ELF/aarch64-ifunc-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 551; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 35070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 35071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 35072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 35074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 35075; }
