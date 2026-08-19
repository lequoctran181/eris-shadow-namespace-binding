/* Controlled native-loader fixture.
 * Family: SNF-060; provider: 3; profile: lld/test/ELF/gc-absolute.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 963; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 61030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 61031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 61032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 61033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 61034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 61035; }
