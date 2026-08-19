/* Controlled native-loader fixture.
 * Family: SNF-053; provider: 3; profile: lld/test/ELF/i386-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 851; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 54030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 54031; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 54032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 54034; }
