/* Controlled native-loader fixture.
 * Family: SNF-149; provider: 5; profile: lld/test/ELF/linkerscript/memory-err.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2389; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 150050; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 150052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 150053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 150054; }
