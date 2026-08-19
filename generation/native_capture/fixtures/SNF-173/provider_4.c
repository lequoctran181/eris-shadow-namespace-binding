/* Controlled native-loader fixture.
 * Family: SNF-173; provider: 4; profile: lld/test/ELF/debug-dead-reloc-tls-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2772; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 174041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 174042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 174043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 174044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 174045; }
