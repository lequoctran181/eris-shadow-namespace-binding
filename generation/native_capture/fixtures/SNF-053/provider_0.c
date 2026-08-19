/* Controlled native-loader fixture.
 * Family: SNF-053; provider: 0; profile: lld/test/ELF/i386-plt.s
 */
__attribute__((visibility("default"))) int snb_anchor_0(void) { return 848; }
__attribute__((visibility("hidden"))) int snb_symbol_0(void) { return 54000; }
__attribute__((visibility("default"))) int snb_symbol_1(void) { return 54001; }
__attribute__((visibility("default"), weak)) int snb_symbol_2(void) { return 54002; }
__attribute__((visibility("default"))) int snb_symbol_3(void) { return 54003; }
__attribute__((visibility("default"))) int snb_symbol_4(void) { return 54004; }
