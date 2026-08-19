/* Controlled native-loader fixture.
 * Family: SNF-107; provider: 5; profile: lld/test/ELF/lto/weakodr-visibility.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1717; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 108050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 108051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 108052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 108053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 108054; }
