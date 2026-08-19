/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 7; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 183; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 12070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 12071; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 12073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 12074; }
