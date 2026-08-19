/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 2; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1074; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 68020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 68021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 68022; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 68023; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 68025; }
