/* Controlled native-loader fixture.
 * Family: SNF-109; provider: 4; profile: lld/test/ELF/gnu-ifunc-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1748; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 110040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 110041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 110042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 110043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 110044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 110045; }
