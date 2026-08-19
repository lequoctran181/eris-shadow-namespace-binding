/* Controlled native-loader fixture.
 * Family: SNF-115; provider: 5; profile: lld/test/ELF/mips-tls-64-pic-local-variable.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1845; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 116050; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 116051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 116052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 116053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 116054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 116055; }
