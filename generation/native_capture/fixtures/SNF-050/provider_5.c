/* Controlled native-loader fixture.
 * Family: SNF-050; provider: 5; profile: lld/test/ELF/gnu-ifunc-nonpreemptible.s
 */
__attribute__((visibility("default"))) int snb_anchor_5(void) { return 805; }
extern int snb_anchor_2(void);
__attribute__((visibility("default"))) int snb_dependency_touch_5(void) { return snb_anchor_2(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 51050; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 51051; }
__attribute__((visibility("hidden"))) int snb_symbol_2(void) { return 51052; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 51053; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 51054; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 51055; }
