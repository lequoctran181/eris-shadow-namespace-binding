/* Controlled native-loader fixture.
 * Family: SNF-063; provider: 4; profile: lld/test/ELF/version-script-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1012; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 64040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 64041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 64042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 64043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 64044; }
