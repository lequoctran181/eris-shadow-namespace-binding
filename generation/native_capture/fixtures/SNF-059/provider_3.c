/* Controlled native-loader fixture.
 * Family: SNF-059; provider: 3; profile: lld/test/ELF/obj-preempt-dso.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 947; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 60030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 60031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 60032; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 60033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 60034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 60035; }
