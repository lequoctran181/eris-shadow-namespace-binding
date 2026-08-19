/* Controlled native-loader fixture.
 * Family: SNF-113; provider: 5; profile: lld/test/ELF/aarch64-thunk-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1813; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 114050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 114051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 114052; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 114054; }
