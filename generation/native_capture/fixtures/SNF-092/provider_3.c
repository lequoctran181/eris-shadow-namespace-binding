/* Controlled native-loader fixture.
 * Family: SNF-092; provider: 3; profile: lld/test/ELF/version-script-complex-wildcards.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1475; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 93030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 93031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 93032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 93033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 93034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 93035; }
