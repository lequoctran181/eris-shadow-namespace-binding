/* Controlled native-loader fixture.
 * Family: SNF-151; provider: 2; profile: lld/test/ELF/retain-symbols-file.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2418; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 152021; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 152023; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 152025; }
