/* Controlled native-loader fixture.
 * Family: SNF-142; provider: 1; profile: lld/test/ELF/gc-sections-retain.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2273; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 143011; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 143014; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 143015; }
