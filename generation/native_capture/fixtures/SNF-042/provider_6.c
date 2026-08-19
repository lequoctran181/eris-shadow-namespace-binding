/* Controlled native-loader fixture.
 * Family: SNF-042; provider: 6; profile: lld/test/ELF/why-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 678; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 43062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 43063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 43064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 43065; }
