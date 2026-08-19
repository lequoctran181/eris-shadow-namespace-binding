/* Controlled native-loader fixture.
 * Family: SNF-076; provider: 7; profile: lld/test/ELF/linkerscript/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1223; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 77070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 77071; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 77073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 77074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 77075; }
