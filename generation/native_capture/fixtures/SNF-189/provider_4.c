/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 4; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3028; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 190041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 190042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 190043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 190044; }
