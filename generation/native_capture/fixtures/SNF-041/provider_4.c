/* Controlled native-loader fixture.
 * Family: SNF-041; provider: 4; profile: lld/test/ELF/linkerscript/symbolreferenced.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 660; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 42040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 42041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 42042; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 42045; }
