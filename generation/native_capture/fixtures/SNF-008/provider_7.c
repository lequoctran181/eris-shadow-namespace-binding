/* Controlled native-loader fixture.
 * Family: SNF-008; provider: 7; profile: lld/test/ELF/arm-thumb-plt-range-thunk-os.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 135; }
extern int snb_anchor_4(void);
extern int snb_anchor_5(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_4() + snb_anchor_5(); }
__attribute__((visibility("default"), weak)) int snb_symbol_0(void) { return 9070; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 9071; }
