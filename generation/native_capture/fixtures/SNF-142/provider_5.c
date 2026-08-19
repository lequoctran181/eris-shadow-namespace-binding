/* Controlled native-loader fixture.
 * Family: SNF-142; provider: 5; profile: lld/test/ELF/gc-sections-retain.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2277; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 143051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 143052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 143053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 143054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 143055; }
