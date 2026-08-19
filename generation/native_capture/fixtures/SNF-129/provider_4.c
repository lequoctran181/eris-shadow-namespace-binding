/* Controlled native-loader fixture.
 * Family: SNF-129; provider: 4; profile: lld/test/ELF/dynamic-list-preempt2.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2068; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 130040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 130041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 130042; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 130045; }
