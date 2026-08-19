/* Controlled native-loader fixture.
 * Family: SNF-103; provider: 5; profile: lld/test/ELF/debug-dead-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1653; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 104050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 104051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 104052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 104053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 104054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 104055; }
