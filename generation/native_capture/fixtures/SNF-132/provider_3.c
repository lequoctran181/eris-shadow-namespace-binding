/* Controlled native-loader fixture.
 * Family: SNF-132; provider: 3; profile: lld/test/ELF/linkerscript/section-class.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2115; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 133030; }
__attribute__((visibility("hidden"))) int snb_symbol_1(void) { return 133031; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 133032; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 133035; }
