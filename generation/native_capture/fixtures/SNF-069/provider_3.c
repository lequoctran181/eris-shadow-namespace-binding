/* Controlled native-loader fixture.
 * Family: SNF-069; provider: 3; profile: lld/test/ELF/aarch64-funcinit64-invalid.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1107; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 70030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 70031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 70032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 70033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 70034; }
