/* Controlled native-loader fixture.
 * Family: SNF-072; provider: 1; profile: lld/test/ELF/debug-line-obj.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1153; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 73011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 73013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 73014; }
