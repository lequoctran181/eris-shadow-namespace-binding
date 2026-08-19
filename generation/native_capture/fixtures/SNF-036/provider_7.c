/* Controlled native-loader fixture.
 * Family: SNF-036; provider: 7; profile: lld/test/ELF/as-needed-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 583; }
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 37070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 37071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 37072; }
