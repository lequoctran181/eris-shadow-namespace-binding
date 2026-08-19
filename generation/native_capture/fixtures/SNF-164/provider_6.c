/* Controlled native-loader fixture.
 * Family: SNF-164; provider: 6; profile: lld/test/ELF/x86-64-relax-jump-tables.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2630; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 165060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 165061; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 165064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 165065; }
