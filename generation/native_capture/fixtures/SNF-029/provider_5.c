/* Controlled native-loader fixture.
 * Family: SNF-029; provider: 5; profile: lld/test/ELF/loongarch-relax-pc-hi20-lo12-got-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 469; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 30051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 30052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 30053; }
