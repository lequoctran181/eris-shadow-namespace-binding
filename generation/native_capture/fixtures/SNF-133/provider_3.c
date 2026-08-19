/* Controlled native-loader fixture.
 * Family: SNF-133; provider: 3; profile: lld/test/ELF/aarch64-pauth-rela-iplt-end.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2131; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 134030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 134031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 134032; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 134033; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 134034; }
