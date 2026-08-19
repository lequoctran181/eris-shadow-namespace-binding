/* Controlled native-loader fixture.
 * Family: SNF-166; provider: 5; profile: lld/test/ELF/loongarch-pc-hi20-lo12-got.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2661; }
extern int snb_anchor_2(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 167050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 167051; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 167053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 167054; }
