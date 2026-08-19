/* Controlled native-loader fixture.
 * Family: SNF-176; provider: 2; profile: lld/test/ELF/tls-mismatch.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2818; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 177020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 177021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 177022; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 177023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 177024; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 177025; }
