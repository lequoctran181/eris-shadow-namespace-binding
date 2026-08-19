/* Controlled native-loader fixture.
 * Family: SNF-094; provider: 4; profile: lld/test/ELF/executable-undefined-protected-ignoreall.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1508; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 95040; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 95042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 95043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 95044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 95045; }
