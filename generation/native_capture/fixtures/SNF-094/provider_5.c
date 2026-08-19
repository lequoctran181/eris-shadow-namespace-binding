/* Controlled native-loader fixture.
 * Family: SNF-094; provider: 5; profile: lld/test/ELF/executable-undefined-protected-ignoreall.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1509; }
extern int snb_anchor_2(void);
extern int snb_anchor_3(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2() + snb_anchor_3(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 95050; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 95052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 95053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 95054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 95055; }
