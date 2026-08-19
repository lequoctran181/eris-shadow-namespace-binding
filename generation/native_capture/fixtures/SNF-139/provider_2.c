/* Controlled native-loader fixture.
 * Family: SNF-139; provider: 2; profile: lld/test/ELF/basic-mips.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2226; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 140021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 140022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 140023; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 140024; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 140025; }
