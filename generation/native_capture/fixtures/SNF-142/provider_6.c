/* Controlled native-loader fixture.
 * Family: SNF-142; provider: 6; profile: lld/test/ELF/gc-sections-retain.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2278; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 143060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 143061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 143062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 143063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 143064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 143065; }
