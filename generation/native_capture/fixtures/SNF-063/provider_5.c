/* Controlled native-loader fixture.
 * Family: SNF-063; provider: 5; profile: lld/test/ELF/version-script-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 1013; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 64050; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 64052; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 64055; }
