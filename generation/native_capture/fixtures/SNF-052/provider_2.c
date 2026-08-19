/* Controlled native-loader fixture.
 * Family: SNF-052; provider: 2; profile: lld/test/ELF/version-script-noundef.s
 */
__attribute__((visibility("default"))) int snb_anchor_2(void) { return 834; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_2(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 53020; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 53021; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 53022; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 53024; }
