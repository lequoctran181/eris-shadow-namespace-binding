/* Controlled native-loader fixture.
 * Family: SNF-181; provider: 3; profile: lld/test/ELF/shared-ppc64.s
 */
__attribute__((visibility("default"))) int snb_anchor_3(void) { return 2899; }
extern int snb_anchor_0(void);
extern int snb_anchor_1(void);
__attribute__((visibility("default"))) int snb_dependency_touch_3(void) { return snb_anchor_0() + snb_anchor_1(); }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 182033; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 182034; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 182035; }
