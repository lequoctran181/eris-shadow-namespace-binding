/* Controlled native-loader fixture.
 * Family: SNF-037; provider: 7; profile: lld/test/ELF/trace-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 599; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 38070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 38072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 38073; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 38075; }
