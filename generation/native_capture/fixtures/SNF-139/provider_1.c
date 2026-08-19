/* Controlled native-loader fixture.
 * Family: SNF-139; provider: 1; profile: lld/test/ELF/basic-mips.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2225; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 140010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 140011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 140012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 140013; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 140015; }
