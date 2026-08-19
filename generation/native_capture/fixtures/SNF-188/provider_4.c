/* Controlled native-loader fixture.
 * Family: SNF-188; provider: 4; profile: lld/test/ELF/relro-omagic.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 3012; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 189040; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 189041; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 189043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 189044; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 189045; }
