/* Controlled native-loader fixture.
 * Family: SNF-059; provider: 7; profile: lld/test/ELF/obj-preempt-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 951; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 60072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 60073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 60074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 60075; }
