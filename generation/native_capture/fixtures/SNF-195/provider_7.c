/* Controlled native-loader fixture.
 * Family: SNF-195; provider: 7; profile: lld/test/ELF/loongarch-relax-tlsdesc.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3127; }
extern int snb_anchor_5(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_5() + snb_anchor_6(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 196070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 196071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 196072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 196073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 196074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 196075; }
