/* Controlled native-loader fixture.
 * Family: SNF-173; provider: 1; profile: lld/test/ELF/debug-dead-reloc-tls-arm.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2769; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 174010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 174011; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 174012; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 174013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 174014; }
