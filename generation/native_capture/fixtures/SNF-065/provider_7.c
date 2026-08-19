/* Controlled native-loader fixture.
 * Family: SNF-065; provider: 7; profile: lld/test/ELF/wrap-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1047; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 66070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 66071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 66072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 66073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 66074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 66075; }
