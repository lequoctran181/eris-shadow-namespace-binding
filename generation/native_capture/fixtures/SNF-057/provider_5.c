/* Controlled native-loader fixture.
 * Family: SNF-057; provider: 5; profile: lld/test/ELF/as-needed-in-regular.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 917; }
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 58050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 58051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 58052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 58053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 58054; }
