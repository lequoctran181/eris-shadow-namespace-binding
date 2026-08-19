/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 7; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1495; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 94070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 94071; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 94074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 94075; }
