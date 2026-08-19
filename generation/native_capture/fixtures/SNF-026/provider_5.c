/* Controlled native-loader fixture.
 * Family: SNF-026; provider: 5; profile: lld/test/ELF/gc-sections-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 421; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 27050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 27051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 27052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 27053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 27055; }
