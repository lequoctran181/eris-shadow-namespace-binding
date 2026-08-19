/* Controlled native-loader fixture.
 * Family: SNF-115; provider: 1; profile: lld/test/ELF/mips-tls-64-pic-local-variable.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1841; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 116010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 116011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 116012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 116014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 116015; }
