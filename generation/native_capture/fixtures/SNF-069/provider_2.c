/* Controlled native-loader fixture.
 * Family: SNF-069; provider: 2; profile: lld/test/ELF/aarch64-funcinit64-invalid.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1106; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 70020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 70021; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 70023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 70024; }
