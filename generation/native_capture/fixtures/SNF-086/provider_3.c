/* Controlled native-loader fixture.
 * Family: SNF-086; provider: 3; profile: lld/test/ELF/linkerscript/multiple-tbss.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1379; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 87030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 87031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 87032; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 87034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 87035; }
