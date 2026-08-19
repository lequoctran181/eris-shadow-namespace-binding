/* Controlled native-loader fixture.
 * Family: SNF-153; provider: 2; profile: lld/test/ELF/version-script-undef.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 2450; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 154020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 154021; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 154022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 154024; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 154025; }
