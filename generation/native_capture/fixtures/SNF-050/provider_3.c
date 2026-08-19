/* Controlled native-loader fixture.
 * Family: SNF-050; provider: 3; profile: lld/test/ELF/gnu-ifunc-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 803; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 51030; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 51031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 51032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 51034; }
