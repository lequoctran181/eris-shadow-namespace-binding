/* Controlled native-loader fixture.
 * Family: SNF-144; provider: 3; profile: lld/test/ELF/lto/devirt_split_unit_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2307; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 145030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 145031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 145032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 145033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 145034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 145035; }
