/* Controlled native-loader fixture.
 * Family: SNF-078; provider: 4; profile: lld/test/ELF/undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1252; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 79041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 79042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 79043; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 79045; }
