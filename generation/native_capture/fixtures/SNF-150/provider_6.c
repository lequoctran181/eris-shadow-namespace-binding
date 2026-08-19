/* Controlled native-loader fixture.
 * Family: SNF-150; provider: 6; profile: lld/test/ELF/aarch64-tlsdesc-zrel.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2406; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 151060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 151061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 151062; }
