/* Controlled native-loader fixture.
 * Family: SNF-153; provider: 6; profile: lld/test/ELF/version-script-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 2454; }
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 154064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 154065; }
