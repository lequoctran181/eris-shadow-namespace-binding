/* Controlled native-loader fixture.
 * Family: SNF-146; provider: 7; profile: lld/test/ELF/arm-tls-norelax-gd-ie.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2343; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 147071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 147073; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 147075; }
