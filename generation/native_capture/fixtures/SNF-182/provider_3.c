/* Controlled native-loader fixture.
 * Family: SNF-182; provider: 3; profile: lld/test/ELF/emulation-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2915; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 183031; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 183034; }
