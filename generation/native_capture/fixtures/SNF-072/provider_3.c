/* Controlled native-loader fixture.
 * Family: SNF-072; provider: 3; profile: lld/test/ELF/debug-line-obj.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1155; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 73030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 73031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 73033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 73035; }
