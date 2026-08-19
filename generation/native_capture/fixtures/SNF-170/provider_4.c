/* Controlled native-loader fixture.
 * Family: SNF-170; provider: 4; profile: lld/test/ELF/debug-dead-reloc-32.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2724; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 171040; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 171042; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 171044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 171045; }
