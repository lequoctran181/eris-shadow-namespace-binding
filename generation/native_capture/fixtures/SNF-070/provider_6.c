/* Controlled native-loader fixture.
 * Family: SNF-070; provider: 6; profile: lld/test/ELF/aarch64-adrp-ldr-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1126; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 71060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 71061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 71062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 71063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 71065; }
