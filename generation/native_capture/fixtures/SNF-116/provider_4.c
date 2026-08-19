/* Controlled native-loader fixture.
 * Family: SNF-116; provider: 4; profile: lld/test/ELF/lto/comdat2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1860; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 117040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 117041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 117042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 117043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 117045; }
