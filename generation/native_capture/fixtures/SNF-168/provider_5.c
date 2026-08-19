/* Controlled native-loader fixture.
 * Family: SNF-168; provider: 5; profile: lld/test/ELF/aarch64-relro.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2693; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 169051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 169052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 169053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 169054; }
