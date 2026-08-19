/* Controlled native-loader fixture.
 * Family: SNF-126; provider: 5; profile: lld/test/ELF/gdb-index-gc-sections.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2021; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 127050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 127051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 127052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 127053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 127054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 127055; }
