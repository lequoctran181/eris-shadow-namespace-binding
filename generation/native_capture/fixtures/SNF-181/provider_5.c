/* Controlled native-loader fixture.
 * Family: SNF-181; provider: 5; profile: lld/test/ELF/shared-ppc64.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2901; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 182050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 182051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 182052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 182053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 182054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 182055; }
