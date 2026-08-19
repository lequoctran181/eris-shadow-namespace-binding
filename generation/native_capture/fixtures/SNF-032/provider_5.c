/* Controlled native-loader fixture.
 * Family: SNF-032; provider: 5; profile: lld/test/ELF/local-symbols-order.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 517; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 33051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 33052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 33053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 33054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 33055; }
