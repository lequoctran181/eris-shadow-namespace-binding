/* Controlled native-loader fixture.
 * Family: SNF-150; provider: 1; profile: lld/test/ELF/aarch64-tlsdesc-zrel.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2401; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 151010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 151011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 151012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 151013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 151014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 151015; }
