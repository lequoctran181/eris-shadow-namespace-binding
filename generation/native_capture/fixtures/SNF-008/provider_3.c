/* Controlled native-loader fixture.
 * Family: SNF-008; provider: 3; profile: lld/test/ELF/arm-thumb-plt-range-thunk-os.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 131; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 9031; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 9032; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 9034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 9035; }
