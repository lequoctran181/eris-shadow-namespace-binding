/* Controlled native-loader fixture.
 * Family: SNF-083; provider: 6; profile: lld/test/ELF/lto/internalize-exportdyn.ll
 */
__attribute__((visibility("default"))) int snb_anchor_6(void) { return 1334; }
extern int snb_anchor_0(void);
__attribute__((visibility("default"))) int snb_dependency_touch_6(void) { return snb_anchor_0(); }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 84060; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 84061; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 84063; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 84064; }
__attribute__((visibility("default"))) int snb_symbol_5(void) { return 84065; }
