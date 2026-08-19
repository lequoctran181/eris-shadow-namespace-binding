/* Controlled native-loader fixture.
 * Family: SNF-137; provider: 7; profile: lld/test/ELF/x86-64-section-layout.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2199; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 138070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 138071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 138073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 138074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 138075; }
