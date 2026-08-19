/* Controlled native-loader fixture.
 * Family: SNF-136; provider: 1; profile: lld/test/ELF/lto/exclude-libs-libcall.ll
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2177; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 137010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 137011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 137012; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 137013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 137014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 137015; }
