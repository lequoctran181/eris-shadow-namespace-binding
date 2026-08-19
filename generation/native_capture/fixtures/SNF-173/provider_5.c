/* Controlled native-loader fixture.
 * Family: SNF-173; provider: 5; profile: lld/test/ELF/debug-dead-reloc-tls-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2773; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 174050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 174051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 174052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 174053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 174054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 174055; }
