/* Controlled native-loader fixture.
 * Family: SNF-121; provider: 5; profile: lld/test/ELF/icf-safe.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1941; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 122050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 122051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 122052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 122053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 122054; }
