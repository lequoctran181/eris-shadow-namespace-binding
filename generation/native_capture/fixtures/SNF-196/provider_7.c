/* Controlled native-loader fixture.
 * Family: SNF-196; provider: 7; profile: lld/test/ELF/systemz-pie.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3143; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 197070; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 197071; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 197072; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 197073; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 197075; }
