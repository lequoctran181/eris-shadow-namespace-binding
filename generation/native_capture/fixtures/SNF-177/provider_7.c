/* Controlled native-loader fixture.
 * Family: SNF-177; provider: 7; profile: lld/test/ELF/conflict.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2839; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 178070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 178071; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 178073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 178074; }
