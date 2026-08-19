/* Controlled native-loader fixture.
 * Family: SNF-007; provider: 5; profile: lld/test/ELF/export-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 117; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 8052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 8053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 8054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 8055; }
