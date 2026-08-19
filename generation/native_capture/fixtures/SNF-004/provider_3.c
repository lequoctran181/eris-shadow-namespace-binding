/* Controlled native-loader fixture.
 * Family: SNF-004; provider: 3; profile: lld/test/ELF/symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 67; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 5030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 5031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 5032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 5033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 5035; }
