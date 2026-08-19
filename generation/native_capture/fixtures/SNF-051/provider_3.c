/* Controlled native-loader fixture.
 * Family: SNF-051; provider: 3; profile: lld/test/ELF/linkerscript/empty-section-start-stop.test
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 819; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 52034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 52035; }
