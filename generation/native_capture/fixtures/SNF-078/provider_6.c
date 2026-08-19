/* Controlled native-loader fixture.
 * Family: SNF-078; provider: 6; profile: lld/test/ELF/undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1254; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 79060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 79061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 79062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 79063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 79064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 79065; }
