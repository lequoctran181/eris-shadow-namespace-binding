/* Controlled native-loader fixture.
 * Family: SNF-101; provider: 1; profile: lld/test/ELF/aarch64-gnu-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1617; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 102010; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 102013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 102014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 102015; }
