/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 3; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2659; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 167030; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 167032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 167033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 167034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 167035; }
