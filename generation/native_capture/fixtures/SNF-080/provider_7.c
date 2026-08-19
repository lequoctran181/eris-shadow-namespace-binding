/* Controlled native-loader fixture.
 * Family: SNF-080; provider: 7; profile: lld/test/ELF/lto/version-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1287; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 81070; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 81071; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 81073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 81074; }
