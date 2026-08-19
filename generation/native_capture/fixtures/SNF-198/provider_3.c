/* Controlled native-loader fixture.
 * Family: SNF-198; provider: 3; profile: lld/test/ELF/lto/thinlto.ll
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3171; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 199030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 199031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 199032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 199033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 199034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 199035; }
