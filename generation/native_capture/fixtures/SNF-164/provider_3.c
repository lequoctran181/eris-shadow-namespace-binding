/* Controlled native-loader fixture.
 * Family: SNF-164; provider: 3; profile: lld/test/ELF/x86-64-relax-jump-tables.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2627; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 165030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 165031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 165032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 165033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 165034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 165035; }
