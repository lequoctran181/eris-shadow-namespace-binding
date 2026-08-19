/* Controlled native-loader fixture.
 * Family: SNF-170; provider: 6; profile: lld/test/ELF/debug-dead-reloc-32.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2726; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 171060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 171062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 171063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 171064; }
