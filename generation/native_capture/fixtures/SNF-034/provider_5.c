/* Controlled native-loader fixture.
 * Family: SNF-034; provider: 5; profile: lld/test/ELF/aarch64-ifunc-bti.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 549; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 35053; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 35054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 35055; }
