/* Controlled native-loader fixture.
 * Family: SNF-163; provider: 5; profile: lld/test/ELF/incompatible.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 2613; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 164050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 164051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 164052; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 164054; }
