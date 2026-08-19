/* Controlled native-loader fixture.
 * Family: SNF-180; provider: 5; profile: lld/test/ELF/lto/libcall-archive-bitcode.test
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2885; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 181050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 181051; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 181053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 181054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 181055; }
