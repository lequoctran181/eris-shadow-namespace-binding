/* Controlled native-loader fixture.
 * Family: SNF-104; provider: 3; profile: lld/test/ELF/as-needed-no-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1667; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 105030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 105031; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 105033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 105034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 105035; }
