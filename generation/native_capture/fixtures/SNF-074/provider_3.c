/* Controlled native-loader fixture.
 * Family: SNF-074; provider: 3; profile: lld/test/ELF/wrap.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 1187; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 75030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 75031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 75032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 75033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 75034; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 75035; }
