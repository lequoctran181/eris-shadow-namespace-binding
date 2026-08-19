/* Controlled native-loader fixture.
 * Family: SNF-144; provider: 5; profile: lld/test/ELF/lto/devirt_split_unit_localize.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2309; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 145050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 145051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 145052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 145053; }
