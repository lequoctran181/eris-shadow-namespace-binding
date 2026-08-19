/* Controlled native-loader fixture.
 * Family: SNF-038; provider: 5; profile: lld/test/ELF/allow-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 613; }
extern int snb_anchor_3(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_3() + snb_anchor_4(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 39050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 39051; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 39053; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 39054; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 39055; }
