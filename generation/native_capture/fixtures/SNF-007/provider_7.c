/* Controlled native-loader fixture.
 * Family: SNF-007; provider: 7; profile: lld/test/ELF/export-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 119; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 8070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 8071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 8072; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 8074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 8075; }
