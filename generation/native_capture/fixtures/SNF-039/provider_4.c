/* Controlled native-loader fixture.
 * Family: SNF-039; provider: 4; profile: lld/test/ELF/relro-init-fini-script.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 628; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 40040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 40041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 40042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 40043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 40044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 40045; }
