/* Controlled native-loader fixture.
 * Family: SNF-075; provider: 2; profile: lld/test/ELF/warn-backrefs.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 1202; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 76020; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 76021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 76022; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 76023; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 76025; }
