/* Controlled native-loader fixture.
 * Family: SNF-053; provider: 6; profile: lld/test/ELF/i386-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 854; }
extern int snb_anchor_0(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 54060; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 54061; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 54062; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 54063; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 54064; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 54065; }
