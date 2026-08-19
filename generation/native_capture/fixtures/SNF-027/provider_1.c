/* Controlled native-loader fixture.
 * Family: SNF-027; provider: 1; profile: lld/test/ELF/gnu-hash-table.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 433; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 28010; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 28011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 28012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 28013; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 28014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 28015; }
