/* Controlled native-loader fixture.
 * Family: SNF-084; provider: 3; profile: lld/test/ELF/riscv-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1347; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 85030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 85031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 85032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 85033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 85034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 85035; }
