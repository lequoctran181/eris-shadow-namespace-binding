/* Controlled native-loader fixture.
 * Family: SNF-022; provider: 6; profile: lld/test/ELF/wrap-drop-shared-original.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 358; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 23060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 23061; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 23064; }
