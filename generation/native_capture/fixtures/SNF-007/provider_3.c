/* Controlled native-loader fixture.
 * Family: SNF-007; provider: 3; profile: lld/test/ELF/export-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 115; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 8030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 8031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 8032; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 8034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 8035; }
