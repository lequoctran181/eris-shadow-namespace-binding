/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 3; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3091; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 194030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 194031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 194032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 194033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 194034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 194035; }
