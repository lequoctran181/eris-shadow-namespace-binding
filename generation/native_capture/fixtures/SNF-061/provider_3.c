/* Controlled native-loader fixture.
 * Family: SNF-061; provider: 3; profile: lld/test/ELF/version-script-symver.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 979; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 62030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 62031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 62032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 62033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 62034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 62035; }
