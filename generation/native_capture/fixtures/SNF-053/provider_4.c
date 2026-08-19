/* Controlled native-loader fixture.
 * Family: SNF-053; provider: 4; profile: lld/test/ELF/i386-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 852; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 54040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 54041; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 54042; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 54043; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 54044; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 54045; }
