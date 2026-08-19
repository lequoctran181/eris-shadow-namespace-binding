/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 6; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1302; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 82062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 82063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 82064; }
