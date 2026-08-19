/* Controlled native-loader fixture.
 * Family: SNF-013; provider: 5; profile: lld/test/ELF/why-live.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 213; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 14050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 14051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 14052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 14053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 14054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 14055; }
