/* Controlled native-loader fixture.
 * Family: SNF-011; provider: 4; profile: lld/test/ELF/whole-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 180; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 12041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 12042; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 12043; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 12045; }
