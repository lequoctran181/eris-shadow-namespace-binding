/* Controlled native-loader fixture.
 * Family: SNF-137; provider: 6; profile: lld/test/ELF/x86-64-section-layout.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2198; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 138060; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 138065; }
