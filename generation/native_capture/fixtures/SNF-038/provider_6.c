/* Controlled native-loader fixture.
 * Family: SNF-038; provider: 6; profile: lld/test/ELF/allow-shlib-undefined.s
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 614; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 39061; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 39062; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 39063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 39064; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 39065; }
