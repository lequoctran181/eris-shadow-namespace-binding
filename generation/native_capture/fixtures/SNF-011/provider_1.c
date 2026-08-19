/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 1; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 177; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 12010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 12011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 12012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 12013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 12014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 12015; }
