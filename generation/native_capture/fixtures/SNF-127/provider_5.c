/* Controlled native-loader fixture.
 * Family: SNF-127; provider: 5; profile: lld/test/ELF/gnu-ifunc-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2037; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 128050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 128051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 128052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 128053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 128054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 128055; }
