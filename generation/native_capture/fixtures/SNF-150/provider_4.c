/* Controlled native-loader fixture.
 * Family: SNF-150; provider: 4; profile: lld/test/ELF/aarch64-tlsdesc-zrel.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2404; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 151040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 151041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 151042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 151044; }
