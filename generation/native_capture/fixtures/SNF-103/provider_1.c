/* Controlled native-loader fixture.
 * Family: SNF-103; provider: 1; profile: lld/test/ELF/debug-dead-reloc.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1649; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 104010; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 104011; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 104012; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 104014; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 104015; }
