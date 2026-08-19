/* Controlled native-loader fixture.
 * Family: SNF-181; provider: 1; profile: lld/test/ELF/shared-ppc64.s
 */
__attribute__((visibility("default"))) int snb_anchor_1(void) { return 2897; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_1(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 182012; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 182015; }
