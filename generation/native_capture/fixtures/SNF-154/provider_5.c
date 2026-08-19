/* Controlled native-loader fixture.
 * Family: SNF-154; provider: 5; profile: lld/test/ELF/lto/wrap-2.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2469; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 155050; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 155053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 155054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 155055; }
