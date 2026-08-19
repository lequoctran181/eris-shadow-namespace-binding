/* Controlled native-loader fixture.
 * Family: SNF-149; provider: 7; profile: lld/test/ELF/linkerscript/memory-err.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2391; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 150070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 150071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 150072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 150073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 150074; }
