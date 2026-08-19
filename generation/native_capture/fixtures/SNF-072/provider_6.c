/* Controlled native-loader fixture.
 * Family: SNF-072; provider: 6; profile: lld/test/ELF/debug-line-obj.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1158; }
extern int snb_anchor_3(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_3() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 73061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 73062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 73063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 73064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 73065; }
