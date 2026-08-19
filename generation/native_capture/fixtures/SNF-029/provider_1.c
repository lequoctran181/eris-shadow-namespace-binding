/* Controlled native-loader fixture.
 * Family: SNF-029; provider: 1; profile: lld/test/ELF/loongarch-relax-pc-hi20-lo12-got-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 465; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 30010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 30011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 30012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 30013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 30014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 30015; }
