/* Controlled native-loader fixture.
 * Family: SNF-046; provider: 4; profile: lld/test/ELF/undefined-opt.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 740; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_4(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 47040; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 47041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 47042; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 47044; }
