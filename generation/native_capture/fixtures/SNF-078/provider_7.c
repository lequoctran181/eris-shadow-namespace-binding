/* Controlled native-loader fixture.
 * Family: SNF-078; provider: 7; profile: lld/test/ELF/undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 1255; }
extern int snb_anchor_2(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 79070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 79071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 79072; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 79074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 79075; }
