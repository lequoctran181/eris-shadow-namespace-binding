/* Controlled native-loader fixture.
 * Family: SNF-102; provider: 7; profile: lld/test/ELF/allow-shlib-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1639; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 103072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 103073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 103074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 103075; }
