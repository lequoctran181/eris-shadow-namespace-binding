/* Controlled native-loader fixture.
 * Family: SNF-096; provider: 5; profile: lld/test/ELF/undef-shared.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1541; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 97050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 97051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 97052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 97053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 97054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 97055; }
