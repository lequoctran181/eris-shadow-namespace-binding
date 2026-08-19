/* Controlled native-loader fixture.
 * Family: SNF-174; provider: 4; profile: lld/test/ELF/x86-64-reloc-pc32.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2788; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 175040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 175041; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 175042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 175043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 175044; }
