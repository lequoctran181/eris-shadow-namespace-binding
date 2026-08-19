/* Controlled native-loader fixture.
 * Family: SNF-104; provider: 4; profile: lld/test/ELF/as-needed-no-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1668; }
extern int snb_anchor_1(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 105041; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 105043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 105044; }
