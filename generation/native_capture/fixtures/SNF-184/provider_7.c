/* Controlled native-loader fixture.
 * Family: SNF-184; provider: 7; profile: lld/test/ELF/arm-undefined-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2951; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 185070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 185071; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 185073; }
