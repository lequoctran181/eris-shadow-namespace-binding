/* Controlled native-loader fixture.
 * Family: SNF-054; provider: 7; profile: lld/test/ELF/aarch64-reloc-pauth.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 871; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 55071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 55072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 55073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 55074; }
