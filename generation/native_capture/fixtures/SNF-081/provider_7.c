/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 7; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1303; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 82070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 82071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 82072; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 82074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 82075; }
