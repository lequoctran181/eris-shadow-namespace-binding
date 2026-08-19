/* Controlled native-loader fixture.
 * Family: SNF-066; provider: 7; profile: lld/test/ELF/gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1063; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 67070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 67071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 67072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 67073; }
