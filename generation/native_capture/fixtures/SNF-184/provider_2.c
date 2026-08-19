/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 2; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2946; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 185021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 185022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 185023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 185025; }
