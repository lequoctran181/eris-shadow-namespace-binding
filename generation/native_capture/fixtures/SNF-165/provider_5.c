/* Controlled native-loader fixture.
 * Family: SNF-165; provider: 5; profile: lld/test/ELF/protected-function-access.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2645; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 166050; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 166052; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 166053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 166054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 166055; }
