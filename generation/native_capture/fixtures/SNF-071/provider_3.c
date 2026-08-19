/* Controlled native-loader fixture.
 * Family: SNF-071; provider: 3; profile: lld/test/ELF/ppc64-ifunc.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1139; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 72030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 72031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 72032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 72033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 72034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 72035; }
