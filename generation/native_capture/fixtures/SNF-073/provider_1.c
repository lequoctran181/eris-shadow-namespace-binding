/* Controlled native-loader fixture.
 * Family: SNF-073; provider: 1; profile: lld/test/ELF/tls.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1169; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 74010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 74011; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 74013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 74014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 74015; }
