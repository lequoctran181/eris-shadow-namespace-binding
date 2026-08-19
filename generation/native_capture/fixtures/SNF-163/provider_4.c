/* Controlled native-loader fixture.
 * Family: SNF-163; provider: 4; profile: lld/test/ELF/incompatible.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 2612; }
extern int snb_anchor_1(void);
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_1() + snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 164040; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 164043; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 164044; }
