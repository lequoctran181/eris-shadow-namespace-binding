/* Controlled native-loader fixture.
 * Family: SNF-152; provider: 7; profile: lld/test/ELF/unresolved-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2439; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 153070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 153071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 153072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 153073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 153075; }
