/* Controlled native-loader fixture.
 * Family: SNF-059; provider: 0; profile: lld/test/ELF/obj-preempt-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 944; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 60000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 60001; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 60002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 60003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 60004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 60005; }
