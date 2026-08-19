/* Controlled native-loader fixture.
 * Family: SNF-029; provider: 2; profile: lld/test/ELF/loongarch-relax-pc-hi20-lo12-got-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 466; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 30020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 30021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 30022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 30023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 30024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 30025; }
