/* Controlled native-loader fixture.
 * Family: SNF-170; provider: 5; profile: lld/test/ELF/debug-dead-reloc-32.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2725; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 171050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 171051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 171052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 171053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 171054; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 171055; }
