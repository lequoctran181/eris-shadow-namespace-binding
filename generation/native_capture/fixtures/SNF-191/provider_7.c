/* Controlled native-loader fixture.
 * Family: SNF-191; provider: 7; profile: lld/test/ELF/gnu-ifunc-dyntags.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3063; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 192071; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 192072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 192073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 192074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 192075; }
