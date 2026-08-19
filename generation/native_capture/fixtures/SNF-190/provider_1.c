/* Controlled native-loader fixture.
 * Family: SNF-190; provider: 1; profile: lld/test/ELF/linkerscript/synthetic-symbols3.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3041; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 191010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 191011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 191012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 191013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 191014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 191015; }
