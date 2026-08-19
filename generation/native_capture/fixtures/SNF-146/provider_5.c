/* Controlled native-loader fixture.
 * Family: SNF-146; provider: 5; profile: lld/test/ELF/arm-tls-norelax-gd-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2341; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 147050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 147051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 147052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 147053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 147054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 147055; }
