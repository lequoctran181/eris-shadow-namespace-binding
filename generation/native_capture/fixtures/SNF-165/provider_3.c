/* Controlled native-loader fixture.
 * Family: SNF-165; provider: 3; profile: lld/test/ELF/protected-function-access.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2643; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 166031; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 166033; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 166035; }
