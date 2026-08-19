/* Controlled native-loader fixture.
 * Family: SNF-122; provider: 3; profile: lld/test/ELF/debug-names-type-units.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1955; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 123030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 123031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 123032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 123034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 123035; }
