/* Controlled native-loader fixture.
 * Family: SNF-066; provider: 6; profile: lld/test/ELF/gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1062; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 67060; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 67062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 67063; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 67065; }
