/* Controlled native-loader fixture.
 * Family: SNF-174; provider: 5; profile: lld/test/ELF/x86-64-reloc-pc32.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2789; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 175050; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 175052; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 175055; }
