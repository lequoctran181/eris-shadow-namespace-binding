/* Controlled native-loader fixture.
 * Family: SNF-051; provider: 1; profile: lld/test/ELF/linkerscript/empty-section-start-stop.test
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 817; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 52010; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 52013; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 52014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 52015; }
