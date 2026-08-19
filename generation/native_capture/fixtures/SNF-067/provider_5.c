/* Controlled native-loader fixture.
 * Family: SNF-067; provider: 5; profile: lld/test/ELF/reproduce.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1077; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 68050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 68051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 68052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 68053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 68054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 68055; }
