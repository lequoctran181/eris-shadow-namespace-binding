/* Controlled native-loader fixture.
 * Family: SNF-139; provider: 6; profile: lld/test/ELF/basic-mips.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2230; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 140060; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 140061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 140062; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 140064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 140065; }
