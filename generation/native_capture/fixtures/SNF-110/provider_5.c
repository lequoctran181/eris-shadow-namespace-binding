/* Controlled native-loader fixture.
 * Family: SNF-110; provider: 5; profile: lld/test/ELF/ppc64-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1765; }
extern int snb_anchor_1(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1() + snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 111050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 111051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 111052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 111053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 111054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 111055; }
