/* Controlled native-loader fixture.
 * Family: SNF-092; provider: 1; profile: lld/test/ELF/version-script-complex-wildcards.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1473; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 93010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 93011; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 93015; }
