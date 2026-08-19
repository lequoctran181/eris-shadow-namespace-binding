/* Controlled native-loader fixture.
 * Family: SNF-086; provider: 0; profile: lld/test/ELF/linkerscript/multiple-tbss.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 1376; }
__attribute__((visibility("default"))) int snb_symbol_0(void) { return 87000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 87001; }
__attribute__((visibility("hidden"))) int snb_symbol_3(void) { return 87003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 87004; }
__attribute__((visibility("default"), weak)) int snb_symbol_5(void) { return 87005; }
