/* Controlled native-loader fixture.
 * Family: SNF-086; provider: 4; profile: lld/test/ELF/linkerscript/multiple-tbss.s
 */
__attribute__((visibility("default"))) int snb_anchor_4(void) { return 1380; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 87040; }
__attribute__((visibility("default"), weak)) int snb_symbol_1(void) { return 87041; }
__attribute__((visibility("default"))) int snb_symbol_2(void) { return 87042; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 87043; }
__attribute__((visibility("default"), weak)) int snb_symbol_4(void) { return 87044; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 87045; }
