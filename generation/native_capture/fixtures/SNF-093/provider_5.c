/* Controlled native-loader fixture.
 * Family: SNF-093; provider: 5; profile: lld/test/ELF/lto/comdat-nodeduplicate.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1493; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 94050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 94051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 94052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 94053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 94054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 94055; }
