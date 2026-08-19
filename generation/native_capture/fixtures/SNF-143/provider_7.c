/* Controlled native-loader fixture.
 * Family: SNF-143; provider: 7; profile: lld/test/ELF/basic-systemz.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2295; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 144070; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 144073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 144074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 144075; }
