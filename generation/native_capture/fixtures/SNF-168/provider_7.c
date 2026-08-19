/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 7; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2695; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 169071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 169072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 169073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 169074; }
