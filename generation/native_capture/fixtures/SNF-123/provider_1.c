/* Controlled native-loader fixture.
 * Family: SNF-123; provider: 1; profile: lld/test/ELF/aarch64-cortex-a53-843419-recognize.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1969; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 124010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 124011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 124012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 124014; }
