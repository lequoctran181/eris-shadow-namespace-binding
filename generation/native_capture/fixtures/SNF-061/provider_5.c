/* Controlled native-loader fixture.
 * Family: SNF-061; provider: 5; profile: lld/test/ELF/version-script-symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 981; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 62050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 62051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 62052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 62054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 62055; }
