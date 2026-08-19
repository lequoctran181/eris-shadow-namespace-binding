/* Controlled native-loader fixture.
 * Family: SNF-094; provider: 3; profile: lld/test/ELF/executable-undefined-protected-ignoreall.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1507; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 95030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 95031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 95033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 95034; }
