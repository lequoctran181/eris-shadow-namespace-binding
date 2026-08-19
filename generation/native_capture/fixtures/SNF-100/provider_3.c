/* Controlled native-loader fixture.
 * Family: SNF-100; provider: 3; profile: lld/test/ELF/linkerscript/orphan.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1603; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 101030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 101031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 101032; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 101034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 101035; }
