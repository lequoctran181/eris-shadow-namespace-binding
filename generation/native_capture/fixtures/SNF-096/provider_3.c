/* Controlled native-loader fixture.
 * Family: SNF-096; provider: 3; profile: lld/test/ELF/undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1539; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 97030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 97031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 97032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 97033; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 97035; }
