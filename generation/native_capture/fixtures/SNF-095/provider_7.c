/* Controlled native-loader fixture.
 * Family: SNF-095; provider: 7; profile: lld/test/ELF/archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1527; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 96070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 96071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 96072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 96073; }
