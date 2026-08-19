/* Controlled native-loader fixture.
 * Family: SNF-180; provider: 1; profile: lld/test/ELF/lto/libcall-archive-bitcode.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2881; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 181010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 181011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 181012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 181013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 181014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 181015; }
