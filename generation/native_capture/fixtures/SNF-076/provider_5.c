/* Controlled native-loader fixture.
 * Family: SNF-076; provider: 5; profile: lld/test/ELF/linkerscript/symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1221; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 77050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 77051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 77052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 77054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 77055; }
