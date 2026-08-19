/* Controlled native-loader fixture.
 * Family: SNF-050; provider: 7; profile: lld/test/ELF/gnu-ifunc-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 807; }
extern int snb_anchor_4(void);
extern int snb_anchor_6(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4() + snb_anchor_6(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 51070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 51071; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 51072; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 51073; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 51074; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 51075; }
