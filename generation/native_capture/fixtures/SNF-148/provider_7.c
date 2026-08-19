/* Controlled native-loader fixture.
 * Family: SNF-148; provider: 7; profile: lld/test/ELF/weak-undef-rw.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2375; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 149073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 149074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 149075; }
