/* Controlled native-loader fixture.
 * Family: SNF-043; provider: 3; profile: lld/test/ELF/bsymbolic-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 691; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 44030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 44031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 44032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 44033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 44034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 44035; }
