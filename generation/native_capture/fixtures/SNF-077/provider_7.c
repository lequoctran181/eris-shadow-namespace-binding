/* Controlled native-loader fixture.
 * Family: SNF-077; provider: 7; profile: lld/test/ELF/shared-lazy.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1239; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 78070; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 78073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 78074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 78075; }
