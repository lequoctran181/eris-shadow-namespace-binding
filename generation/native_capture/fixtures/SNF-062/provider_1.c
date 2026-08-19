/* Controlled native-loader fixture.
 * Family: SNF-062; provider: 1; profile: lld/test/ELF/dynamic-list-weak-archive.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 993; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 63010; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 63013; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 63014; }
