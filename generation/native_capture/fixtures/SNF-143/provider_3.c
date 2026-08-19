/* Controlled native-loader fixture.
 * Family: SNF-143; provider: 3; profile: lld/test/ELF/basic-systemz.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2291; }
extern int snb_anchor_0(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_2(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 144030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 144031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 144032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 144034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 144035; }
