/* Controlled native-loader fixture.
 * Family: SNF-186; provider: 1; profile: lld/test/ELF/lto/duplicated-name.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2977; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 187011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 187012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 187014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 187015; }
