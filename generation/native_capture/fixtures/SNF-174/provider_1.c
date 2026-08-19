/* Controlled native-loader fixture.
 * Family: SNF-174; provider: 1; profile: lld/test/ELF/x86-64-reloc-pc32.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2785; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 175010; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 175013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 175014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 175015; }
