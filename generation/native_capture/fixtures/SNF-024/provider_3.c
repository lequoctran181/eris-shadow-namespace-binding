/* Controlled native-loader fixture.
 * Family: SNF-024; provider: 3; profile: lld/test/ELF/resolution.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 387; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 25030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 25031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 25032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 25033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 25034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 25035; }
