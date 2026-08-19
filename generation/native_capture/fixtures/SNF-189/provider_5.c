/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 5; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 3029; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 190050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 190051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 190052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 190053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 190054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 190055; }
