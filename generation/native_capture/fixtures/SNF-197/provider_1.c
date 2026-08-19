/* Controlled native-loader fixture.
 * Family: SNF-197; provider: 1; profile: lld/test/ELF/x86-64-tls-gd-local.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 3153; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 198011; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 198013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 198014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 198015; }
