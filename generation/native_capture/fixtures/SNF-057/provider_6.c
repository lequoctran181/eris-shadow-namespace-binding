/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 6; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 918; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 58060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 58061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 58062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 58063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 58064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 58065; }
