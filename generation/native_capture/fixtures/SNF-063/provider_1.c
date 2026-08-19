/* Controlled native-loader fixture.
 * Family: SNF-063; provider: 1; profile: lld/test/ELF/version-script-weak.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 1009; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 64010; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 64013; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 64015; }
