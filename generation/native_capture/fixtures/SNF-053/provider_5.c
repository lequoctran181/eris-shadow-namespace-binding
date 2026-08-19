/* Controlled native-loader fixture.
 * Family: SNF-053; provider: 5; profile: lld/test/ELF/i386-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 853; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 54051; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 54052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 54053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 54054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 54055; }
