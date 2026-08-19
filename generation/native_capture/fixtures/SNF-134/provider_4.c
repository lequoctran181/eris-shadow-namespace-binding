/* Controlled native-loader fixture.
 * Family: SNF-134; provider: 4; profile: lld/test/ELF/visibility.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2148; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 135040; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 135042; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 135044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 135045; }
