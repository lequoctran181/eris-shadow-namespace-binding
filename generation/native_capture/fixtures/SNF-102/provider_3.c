/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 3; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1635; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 103030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 103031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 103032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 103033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 103034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 103035; }
