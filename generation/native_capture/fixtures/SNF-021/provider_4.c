/* Controlled native-loader fixture.
 * Family: SNF-021; provider: 4; profile: lld/test/ELF/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 340; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 22041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 22042; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 22044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 22045; }
