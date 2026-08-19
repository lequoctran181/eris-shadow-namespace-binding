/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 1; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2689; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 169010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 169011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 169012; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 169014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 169015; }
