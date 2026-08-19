/* Controlled native-loader fixture.
 * Family: SNF-081; provider: 3; profile: lld/test/ELF/arm-tls-gd32.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1299; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 82030; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 82033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 82034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 82035; }
