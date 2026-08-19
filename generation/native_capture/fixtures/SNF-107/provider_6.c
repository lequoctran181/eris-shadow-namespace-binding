/* Controlled native-loader fixture.
 * Family: SNF-107; provider: 6; profile: lld/test/ELF/lto/weakodr-visibility.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1718; }
extern int snb_anchor_1(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_1() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 108060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 108061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 108062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 108063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 108064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 108065; }
