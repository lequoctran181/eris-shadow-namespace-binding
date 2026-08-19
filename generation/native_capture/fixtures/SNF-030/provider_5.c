/* Controlled native-loader fixture.
 * Family: SNF-030; provider: 5; profile: lld/test/ELF/lto/devirt_validate_vtable_typeinfos.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 485; }
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_4(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 31050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 31051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 31052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 31053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 31055; }
