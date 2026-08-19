/* Controlled native-loader fixture.
 * Family: SNF-140; provider: 1; profile: lld/test/ELF/lto/comdat-mixed-archive.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2241; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 141011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 141012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 141014; }
