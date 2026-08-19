/* Controlled native-loader fixture.
 * Family: SNF-189; provider: 3; profile: lld/test/ELF/relocatable-symbols.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 3027; }
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_1(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 190030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 190031; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 190033; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 190034; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 190035; }
