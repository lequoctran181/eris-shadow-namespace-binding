/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 5; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1301; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 82051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 82052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 82053; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 82055; }
