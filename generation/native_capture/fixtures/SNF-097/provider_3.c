/* Controlled native-loader fixture.
 * Family: SNF-097; provider: 3; profile: lld/test/ELF/dynamic-list.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1555; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 98031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 98032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 98033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 98034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 98035; }
