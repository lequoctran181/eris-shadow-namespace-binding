/* Controlled native-loader fixture.
 * Family: SNF-193; provider: 7; profile: lld/test/ELF/gc-sections-protected.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 3095; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 194070; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 194072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 194073; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 194074; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 194075; }
