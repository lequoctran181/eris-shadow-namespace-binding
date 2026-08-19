/* Controlled native-loader fixture.
 * Family: SNF-090; provider: 5; profile: lld/test/ELF/lto/wrap-script-referenced.ll
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1445; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 91050; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 91051; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 91052; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 91053; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 91055; }
