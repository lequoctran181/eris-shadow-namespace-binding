/* Controlled native-loader fixture.
 * Family: SNF-164; provider: 2; profile: lld/test/ELF/x86-64-relax-jump-tables.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2626; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 165021; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 165024; }
