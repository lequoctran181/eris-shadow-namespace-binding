/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 2; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 178; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 12020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 12021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 12022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 12023; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 12024; }
