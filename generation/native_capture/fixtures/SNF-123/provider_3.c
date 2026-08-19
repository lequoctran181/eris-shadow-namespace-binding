/* Controlled native-loader fixture.
 * Family: SNF-123; provider: 3; profile: lld/test/ELF/aarch64-cortex-a53-843419-recognize.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1971; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 124030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 124031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 124032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 124033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 124034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 124035; }
