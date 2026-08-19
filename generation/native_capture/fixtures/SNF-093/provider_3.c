/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 3; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1491; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 94030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 94031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 94032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 94033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 94034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 94035; }
