/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 3; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3155; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 198030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 198031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 198032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 198033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 198034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 198035; }
