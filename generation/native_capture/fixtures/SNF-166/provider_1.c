/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 1; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2657; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 167011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 167012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 167013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 167014; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 167015; }
