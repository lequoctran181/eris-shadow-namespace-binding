/* Controlled native-loader fixture.
 * Family: SNF-042; provider: 5; profile: lld/test/ELF/why-extract.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 677; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 43050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 43051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 43052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 43053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 43054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 43055; }
