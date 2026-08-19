/* Controlled native-loader fixture.
 * Family: SNF-135; provider: 5; profile: lld/test/ELF/lto/undef-weak-lazy.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2165; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 136050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 136051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 136052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 136053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 136054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 136055; }
