/* Controlled native-loader fixture.
 * Family: SNF-103; provider: 6; profile: lld/test/ELF/debug-dead-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1654; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 104060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 104061; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 104063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 104064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 104065; }
