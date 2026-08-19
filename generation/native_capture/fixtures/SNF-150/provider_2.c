/* Controlled native-loader fixture.
 * Family: SNF-150; provider: 2; profile: lld/test/ELF/aarch64-tlsdesc-zrel.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2402; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 151020; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 151021; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 151022; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 151025; }
