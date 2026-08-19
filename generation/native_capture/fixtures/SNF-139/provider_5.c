/* Controlled native-loader fixture.
 * Family: SNF-139; provider: 5; profile: lld/test/ELF/basic-mips.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2229; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 140050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 140051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 140052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 140053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 140054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 140055; }
