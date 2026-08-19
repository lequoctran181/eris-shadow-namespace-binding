/* Controlled native-loader fixture.
 * Family: SNF-130; provider: 7; profile: lld/test/ELF/mips-micro-thunks.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2087; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 131070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 131072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 131073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 131074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 131075; }
