/* Controlled native-loader fixture.
 * Family: SNF-008; provider: 1; profile: lld/test/ELF/arm-thumb-plt-range-thunk-os.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 129; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 9010; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 9011; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 9012; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 9013; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 9015; }
