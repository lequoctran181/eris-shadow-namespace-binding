/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 3; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 739; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 47032; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 47033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 47034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 47035; }
