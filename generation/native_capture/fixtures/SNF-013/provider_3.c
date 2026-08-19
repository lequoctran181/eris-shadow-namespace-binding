/* Controlled native-loader fixture.
 * Family: SNF-013; provider: 3; profile: lld/test/ELF/why-live.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 211; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 14030; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 14031; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 14033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 14034; }
