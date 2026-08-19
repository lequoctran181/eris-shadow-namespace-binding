/* Controlled native-loader fixture.
 * Family: SNF-026; provider: 3; profile: lld/test/ELF/gc-sections-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 419; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 27031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 27032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 27033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 27035; }
