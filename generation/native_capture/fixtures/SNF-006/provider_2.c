/* Controlled native-loader fixture.
 * Family: SNF-006; provider: 2; profile: lld/test/ELF/export-dynamic-symbol.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 98; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 7020; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 7023; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 7024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 7025; }
