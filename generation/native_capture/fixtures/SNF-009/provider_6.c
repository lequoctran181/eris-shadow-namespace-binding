/* Controlled native-loader fixture.
 * Family: SNF-009; provider: 6; profile: lld/test/ELF/arm-thunk-edgecase.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 150; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 10060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 10061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 10062; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 10063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 10064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 10065; }
