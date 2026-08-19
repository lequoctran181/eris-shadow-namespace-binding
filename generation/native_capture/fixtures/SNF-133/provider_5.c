/* Controlled native-loader fixture.
 * Family: SNF-133; provider: 5; profile: lld/test/ELF/aarch64-pauth-rela-iplt-end.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2133; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 134050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 134051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 134052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 134053; }
