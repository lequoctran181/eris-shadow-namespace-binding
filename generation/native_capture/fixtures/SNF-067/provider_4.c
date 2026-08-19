/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 4; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1076; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 68040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 68041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 68042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 68043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 68045; }
