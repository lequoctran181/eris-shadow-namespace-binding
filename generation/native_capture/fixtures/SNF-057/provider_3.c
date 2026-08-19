/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 3; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 915; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 58030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 58031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 58032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 58033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 58034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 58035; }
