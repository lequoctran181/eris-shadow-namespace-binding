/* Controlled native-loader fixture.
 * Family: SNF-053; provider: 7; profile: lld/test/ELF/i386-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 855; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 54070; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 54073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 54074; }
