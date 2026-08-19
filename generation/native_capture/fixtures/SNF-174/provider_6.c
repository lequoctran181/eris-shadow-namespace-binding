/* Controlled native-loader fixture.
 * Family: SNF-174; provider: 6; profile: lld/test/ELF/x86-64-reloc-pc32.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2790; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 175060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 175061; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 175062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 175063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 175064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 175065; }
