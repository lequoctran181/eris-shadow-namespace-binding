/* Controlled native-loader fixture.
 * Family: SNF-015; provider: 7; profile: lld/test/ELF/interconnected-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 247; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 16070; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 16073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 16074; }
