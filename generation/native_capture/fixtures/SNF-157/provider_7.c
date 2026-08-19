/* Controlled native-loader fixture.
 * Family: SNF-157; provider: 7; profile: lld/test/ELF/exclude-libs-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2519; }
extern int snb_anchor_1(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_1() + snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 158070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 158071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 158072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 158073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 158074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 158075; }
