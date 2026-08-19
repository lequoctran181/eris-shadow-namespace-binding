/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 5; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2949; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 185050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 185051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 185052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 185053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 185054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 185055; }
