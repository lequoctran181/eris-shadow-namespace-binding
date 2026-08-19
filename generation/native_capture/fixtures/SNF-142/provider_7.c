/* Controlled native-loader fixture.
 * Family: SNF-142; provider: 7; profile: lld/test/ELF/gc-sections-retain.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2279; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 143070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 143071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 143073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 143074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 143075; }
