/* Controlled native-loader fixture.
 * Family: SNF-181; provider: 7; profile: lld/test/ELF/shared-ppc64.s
 */
__attribute__((visibility("default"))) int snb_anchor_7(void) { return 2903; }
extern int snb_anchor_0(void);
extern int snb_anchor_4(void);
__attribute__((visibility("default"))) int snb_dependency_touch_7(void) { return snb_anchor_0() + snb_anchor_4(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 182070; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 182072; }
__attribute__((visibility("default"), weak)) int snb_symbol_3(void) { return 182073; }
__attribute__((visibility("hidden"))) int snb_symbol_4(void) { return 182074; }
__attribute__((visibility("hidden"))) int snb_symbol_5(void) { return 182075; }
