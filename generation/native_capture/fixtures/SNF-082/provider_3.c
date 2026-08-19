/* Controlled native-loader fixture.
 * Family: SNF-082; provider: 3; profile: lld/test/ELF/sparcv9-gotdata.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1315; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 83030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 83031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 83032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 83033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 83034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 83035; }
