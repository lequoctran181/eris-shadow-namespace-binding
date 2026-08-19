/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 3; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2371; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 149030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 149031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 149032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 149033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 149034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 149035; }
