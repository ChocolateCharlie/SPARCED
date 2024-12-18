#include "amici/symbolic_functions.h"
#include "amici/defines.h"
#include "sundials/sundials_types.h"

#include <array>

#include "x_rdata.h"

namespace amici {
namespace model_SPARCED_standard {

void x_solver_SPARCED_standard(realtype *x_solver, const realtype *x_rdata){
    x_solver[0] = Ribosome;
    x_solver[1] = p53inac;
    x_solver[2] = p53ac;
    x_solver[3] = MDM2;
    x_solver[4] = Wip1;
    x_solver[5] = ATMP;
    x_solver[6] = ATRac;
    x_solver[7] = MDM2product1;
    x_solver[8] = MDM2product2;
    x_solver[9] = MDM2product3;
    x_solver[10] = MDM2product4;
    x_solver[11] = MDM2product5;
    x_solver[12] = MDM2product6;
    x_solver[13] = MDM2product7;
    x_solver[14] = MDM2product8;
    x_solver[15] = MDM2product9;
    x_solver[16] = MDM2pro;
    x_solver[17] = Wip1product1;
    x_solver[18] = Wip1product2;
    x_solver[19] = Wip1product3;
    x_solver[20] = Wip1product4;
    x_solver[21] = Wip1product5;
    x_solver[22] = Wip1product6;
    x_solver[23] = Wip1product7;
    x_solver[24] = Wip1product8;
    x_solver[25] = Wip1product9;
    x_solver[26] = Wip1pro;
    x_solver[27] = BRCA2;
    x_solver[28] = MSH6;
    x_solver[29] = MGMT;
    x_solver[30] = damageDSB;
    x_solver[31] = damageSSB;
    x_solver[32] = ppAKT_MDM2;
    x_solver[33] = pMDM2;
    x_solver[34] = ARF;
    x_solver[35] = MDM4;
    x_solver[36] = p53ac_MDM4;
    x_solver[37] = ATMinac;
    x_solver[38] = ATRinac;
    x_solver[39] = pRB;
    x_solver[40] = pRBp;
    x_solver[41] = pRBpp;
    x_solver[42] = E2F;
    x_solver[43] = Cd;
    x_solver[44] = Mdi;
    x_solver[45] = Md;
    x_solver[46] = Mdp27;
    x_solver[47] = Ce;
    x_solver[48] = Mei;
    x_solver[49] = Me;
    x_solver[50] = Skp2;
    x_solver[51] = Mep27;
    x_solver[52] = Pe;
    x_solver[53] = Pai;
    x_solver[54] = Pei;
    x_solver[55] = Pbi;
    x_solver[56] = Ca;
    x_solver[57] = Mai;
    x_solver[58] = Ma;
    x_solver[59] = Map27;
    x_solver[60] = p27;
    x_solver[61] = Cdh1i;
    x_solver[62] = Cdh1a;
    x_solver[63] = E2Fp;
    x_solver[64] = p27p;
    x_solver[65] = Pa;
    x_solver[66] = Cb;
    x_solver[67] = Mbi;
    x_solver[68] = Mb;
    x_solver[69] = Cdc20i;
    x_solver[70] = Cdc20a;
    x_solver[71] = Pb;
    x_solver[72] = Wee1;
    x_solver[73] = Wee1p;
    x_solver[74] = Mbp27;
    x_solver[75] = Chk1;
    x_solver[76] = pRBc1;
    x_solver[77] = pRBc2;
    x_solver[78] = p21;
    x_solver[79] = Mdp21;
    x_solver[80] = Mep21;
    x_solver[81] = Map21;
    x_solver[82] = Mbp21;
    x_solver[83] = L;
    x_solver[84] = R;
    x_solver[85] = L_R;
    x_solver[86] = Ractive;
    x_solver[87] = flip;
    x_solver[88] = Ractive_flip;
    x_solver[89] = pC8;
    x_solver[90] = Ractive_pC8;
    x_solver[91] = C8;
    x_solver[92] = Bar;
    x_solver[93] = C8_Bar;
    x_solver[94] = pC3;
    x_solver[95] = C8_pC3;
    x_solver[96] = C3;
    x_solver[97] = pC6;
    x_solver[98] = C3_pC6;
    x_solver[99] = C6;
    x_solver[100] = C6_C8;
    x_solver[101] = XIAP;
    x_solver[102] = C3_XIAP;
    x_solver[103] = PARP;
    x_solver[104] = C3_PARP;
    x_solver[105] = cPARP;
    x_solver[106] = Bid;
    x_solver[107] = C8_Bid;
    x_solver[108] = tBid;
    x_solver[109] = Bcl2c;
    x_solver[110] = tBid_Bcl2c;
    x_solver[111] = Bax;
    x_solver[112] = tBid_Bax;
    x_solver[113] = Baxactive;
    x_solver[114] = Baxm;
    x_solver[115] = Bcl2;
    x_solver[116] = Baxm_Bcl2;
    x_solver[117] = Bax2;
    x_solver[118] = Bax2_Bcl2;
    x_solver[119] = Bax4;
    x_solver[120] = Bax4_Bcl2;
    x_solver[121] = M;
    x_solver[122] = Bax4_M;
    x_solver[123] = Mactive;
    x_solver[124] = CytoCm;
    x_solver[125] = Mactive_CytoCm;
    x_solver[126] = CytoCr;
    x_solver[127] = Smacm;
    x_solver[128] = Mactive_Smacm;
    x_solver[129] = Smacr;
    x_solver[130] = CytoC;
    x_solver[131] = Apaf;
    x_solver[132] = CytoC_Apaf;
    x_solver[133] = Apafactive;
    x_solver[134] = pC9;
    x_solver[135] = Apop;
    x_solver[136] = Apop_C3;
    x_solver[137] = Smac;
    x_solver[138] = Apop_XIAP;
    x_solver[139] = Smac_XIAP;
    x_solver[140] = C3_Ub;
    x_solver[141] = BAD;
    x_solver[142] = PUMA;
    x_solver[143] = NOXA;
    x_solver[144] = Bcl2c_BAD;
    x_solver[145] = Bcl2c_PUMA;
    x_solver[146] = Bcl2c_NOXA;
    x_solver[147] = BIM;
    x_solver[148] = BIM_Bax;
    x_solver[149] = Bcl2c_BIM;
    x_solver[150] = ppERK_BIM;
    x_solver[151] = pBIM;
    x_solver[152] = ppAKT_BAD;
    x_solver[153] = pBAD;
    x_solver[154] = ppERK_BAD;
    x_solver[155] = E;
    x_solver[156] = H;
    x_solver[157] = HGF;
    x_solver[158] = P;
    x_solver[159] = F;
    x_solver[160] = I;
    x_solver[161] = INS;
    x_solver[162] = E1;
    x_solver[163] = pE1;
    x_solver[164] = E2;
    x_solver[165] = pE2;
    x_solver[166] = E3;
    x_solver[167] = E4;
    x_solver[168] = pE4;
    x_solver[169] = Ev3;
    x_solver[170] = Met;
    x_solver[171] = Pr;
    x_solver[172] = Fr;
    x_solver[173] = Ir;
    x_solver[174] = Isr;
    x_solver[175] = E1E1;
    x_solver[176] = E1E2;
    x_solver[177] = E1E3;
    x_solver[178] = E1E4;
    x_solver[179] = E2E2;
    x_solver[180] = E2E3;
    x_solver[181] = E2E4;
    x_solver[182] = E3E4;
    x_solver[183] = E4E4;
    x_solver[184] = Met_Met;
    x_solver[185] = FrFr;
    x_solver[186] = IrIr;
    x_solver[187] = Isr_Isr;
    x_solver[188] = EE1;
    x_solver[189] = HE3;
    x_solver[190] = HE4;
    x_solver[191] = HGF_Met;
    x_solver[192] = PPr;
    x_solver[193] = FFr;
    x_solver[194] = EE1E2;
    x_solver[195] = EE1Ev3;
    x_solver[196] = EE1E1;
    x_solver[197] = EE1E3;
    x_solver[198] = EE1E4;
    x_solver[199] = E2HE3;
    x_solver[200] = E1HE3;
    x_solver[201] = HE3E3;
    x_solver[202] = HE3Ev3;
    x_solver[203] = HE3E4;
    x_solver[204] = E2HE4;
    x_solver[205] = HE4Ev3;
    x_solver[206] = E1HE4;
    x_solver[207] = E3HE4;
    x_solver[208] = HE4E4;
    x_solver[209] = HGF_Met_Met;
    x_solver[210] = PPrPr;
    x_solver[211] = FFrFr;
    x_solver[212] = IIrIr;
    x_solver[213] = INS_Isr_Isr;
    x_solver[214] = EE1EE1;
    x_solver[215] = EE1HE3;
    x_solver[216] = EE1HE4;
    x_solver[217] = HE3HE3;
    x_solver[218] = HE3HE4;
    x_solver[219] = HE4HE4;
    x_solver[220] = HGF_Met_HGF_Met;
    x_solver[221] = PPrPPr;
    x_solver[222] = FFrFFr;
    x_solver[223] = IIrIrI;
    x_solver[224] = INS_Isr_Isr_INS;
    x_solver[225] = E1_ppERK;
    x_solver[226] = E2_ppERK;
    x_solver[227] = E4_ppERK;
    x_solver[228] = pEE1E2;
    x_solver[229] = pEE1Ev3;
    x_solver[230] = pEE1E1;
    x_solver[231] = pEE1EE1;
    x_solver[232] = pEE1E3;
    x_solver[233] = pEE1HE3;
    x_solver[234] = pEE1E4;
    x_solver[235] = pEE1HE4;
    x_solver[236] = pE2HE3;
    x_solver[237] = pHE3Ev3;
    x_solver[238] = pE1HE3;
    x_solver[239] = pHE3E4;
    x_solver[240] = pHE3HE4;
    x_solver[241] = pE2HE4;
    x_solver[242] = pHE4Ev3;
    x_solver[243] = pE1HE4;
    x_solver[244] = pE3HE4;
    x_solver[245] = pHE4E4;
    x_solver[246] = pHE4HE4;
    x_solver[247] = pHGF_Met_Met;
    x_solver[248] = pHGF_Met_HGF_Met;
    x_solver[249] = pPPrPPr;
    x_solver[250] = pPPrPr;
    x_solver[251] = pFFrFFr;
    x_solver[252] = pFFrFr;
    x_solver[253] = pIIrIr;
    x_solver[254] = pINS_Isr_Isr;
    x_solver[255] = pIIrIrI;
    x_solver[256] = pINS_Isr_Isr_INS;
    x_solver[257] = pIIrIr_IRS;
    x_solver[258] = pINS_Isr_Isr_IRS;
    x_solver[259] = pIIrIrI_IRS;
    x_solver[260] = pINS_Isr_Isr_INS_IRS;
    x_solver[261] = Sp_EE1E2;
    x_solver[262] = Sp_EE1Ev3;
    x_solver[263] = Sp_EE1E1;
    x_solver[264] = Sp_EE1EE1;
    x_solver[265] = Sp_EE1E3;
    x_solver[266] = Sp_EE1HE3;
    x_solver[267] = Sp_EE1E4;
    x_solver[268] = Sp_EE1HE4;
    x_solver[269] = Sp_E2HE3;
    x_solver[270] = Sp_HE3Ev3;
    x_solver[271] = Sp_E1HE3;
    x_solver[272] = Sp_HE3E4;
    x_solver[273] = Sp_HE3HE4;
    x_solver[274] = Sp_E2HE4;
    x_solver[275] = Sp_HE4Ev3;
    x_solver[276] = Sp_E1HE4;
    x_solver[277] = Sp_E3HE4;
    x_solver[278] = Sp_HE4E4;
    x_solver[279] = Sp_HE4HE4;
    x_solver[280] = Sp_HGF_Met_Met;
    x_solver[281] = Sp_HGF_Met_HGF_Met;
    x_solver[282] = Sp_PPrPPr;
    x_solver[283] = Sp_PPrPr;
    x_solver[284] = Sp_FFrFFr;
    x_solver[285] = Sp_FFrFr;
    x_solver[286] = Sp_IIrIr;
    x_solver[287] = Sp_INS_Isr_Isr;
    x_solver[288] = Sp_IIrIrI;
    x_solver[289] = Sp_INS_Isr_Isr_INS;
    x_solver[290] = EE1E2int;
    x_solver[291] = EE1Ev3int;
    x_solver[292] = EE1E1int;
    x_solver[293] = EE1EE1int;
    x_solver[294] = EE1E3int;
    x_solver[295] = EE1HE3int;
    x_solver[296] = EE1E4int;
    x_solver[297] = EE1HE4int;
    x_solver[298] = E2HE3int;
    x_solver[299] = HE3Ev3int;
    x_solver[300] = E1HE3int;
    x_solver[301] = HE3E4int;
    x_solver[302] = HE3HE4int;
    x_solver[303] = E2HE4int;
    x_solver[304] = HE4Ev3int;
    x_solver[305] = E1HE4int;
    x_solver[306] = E3HE4int;
    x_solver[307] = HE4E4int;
    x_solver[308] = HE4HE4int;
    x_solver[309] = HGF_Met_Metint;
    x_solver[310] = HGF_Met_HGF_Metint;
    x_solver[311] = PPrPPrint;
    x_solver[312] = PPrPrint;
    x_solver[313] = FFrFFrint;
    x_solver[314] = FFrFrint;
    x_solver[315] = IIrIr_int;
    x_solver[316] = INS_Isr_Isr_int;
    x_solver[317] = IIrIrI_int;
    x_solver[318] = INS_Isr_Isr_INS_int;
    x_solver[319] = pEE1E2int;
    x_solver[320] = pEE1Ev3int;
    x_solver[321] = pEE1E1int;
    x_solver[322] = pEE1EE1int;
    x_solver[323] = pEE1E3int;
    x_solver[324] = pEE1HE3int;
    x_solver[325] = pEE1E4int;
    x_solver[326] = pEE1HE4int;
    x_solver[327] = pE2HE3int;
    x_solver[328] = pHE3Ev3int;
    x_solver[329] = pE1HE3int;
    x_solver[330] = pHE3E4int;
    x_solver[331] = pHE3HE4int;
    x_solver[332] = pE2HE4int;
    x_solver[333] = pHE4Ev3int;
    x_solver[334] = pE1HE4int;
    x_solver[335] = pE3HE4int;
    x_solver[336] = pHE4E4int;
    x_solver[337] = pHE4HE4int;
    x_solver[338] = pHGF_Met_Metint;
    x_solver[339] = pHGF_Met_HGF_Metint;
    x_solver[340] = pPPrPPrint;
    x_solver[341] = pPPrPrint;
    x_solver[342] = pFFrFFrint;
    x_solver[343] = pFFrFrint;
    x_solver[344] = pIIrIr_int;
    x_solver[345] = pINS_Isr_Isr_int;
    x_solver[346] = pIIrIrI_int;
    x_solver[347] = pINS_Isr_Isr_INS_int;
    x_solver[348] = pIIrIr_int_IRS;
    x_solver[349] = pINS_Isr_Isr_int_IRS;
    x_solver[350] = pIIrIrI_int_IRS;
    x_solver[351] = pINS_Isr_Isr_INS_int_IRS;
    x_solver[352] = pEE1E2_G2_SOS;
    x_solver[353] = pEE1Ev3_G2_SOS;
    x_solver[354] = pEE1E1_G2_SOS;
    x_solver[355] = pEE1EE1_G2_SOS;
    x_solver[356] = pEE1E3_G2_SOS;
    x_solver[357] = pEE1HE3_G2_SOS;
    x_solver[358] = pEE1E4_G2_SOS;
    x_solver[359] = pEE1HE4_G2_SOS;
    x_solver[360] = pE2HE3_G2_SOS;
    x_solver[361] = pHE3Ev3_G2_SOS;
    x_solver[362] = pE1HE3_G2_SOS;
    x_solver[363] = pHE3E4_G2_SOS;
    x_solver[364] = pHE3HE4_G2_SOS;
    x_solver[365] = pE2HE4_G2_SOS;
    x_solver[366] = pHE4Ev3_G2_SOS;
    x_solver[367] = pE1HE4_G2_SOS;
    x_solver[368] = pE3HE4_G2_SOS;
    x_solver[369] = pHE4E4_G2_SOS;
    x_solver[370] = pHE4HE4_G2_SOS;
    x_solver[371] = pHGF_Met_Met_G2_SOS;
    x_solver[372] = pHGF_Met_HGF_Met_G2_SOS;
    x_solver[373] = pPPrPPr_G2_SOS;
    x_solver[374] = pPPrPr_G2_SOS;
    x_solver[375] = pFFrFFr_G2_SOS;
    x_solver[376] = pFFrFr_G2_SOS;
    x_solver[377] = pIIrIr_IRS_G2_SOS;
    x_solver[378] = pINS_Isr_Isr_IRS_G2_SOS;
    x_solver[379] = pIIrIrI_IRS_G2_SOS;
    x_solver[380] = pINS_Isr_Isr_INS_IRS_G2_SOS;
    x_solver[381] = pEE1E2int_G2_SOS;
    x_solver[382] = pEE1Ev3int_G2_SOS;
    x_solver[383] = pEE1E1int_G2_SOS;
    x_solver[384] = pEE1EE1int_G2_SOS;
    x_solver[385] = pEE1E3int_G2_SOS;
    x_solver[386] = pEE1HE3int_G2_SOS;
    x_solver[387] = pEE1E4int_G2_SOS;
    x_solver[388] = pEE1HE4int_G2_SOS;
    x_solver[389] = pE2HE3int_G2_SOS;
    x_solver[390] = pHE3Ev3int_G2_SOS;
    x_solver[391] = pE1HE3int_G2_SOS;
    x_solver[392] = pHE3E4int_G2_SOS;
    x_solver[393] = pHE3HE4int_G2_SOS;
    x_solver[394] = pE2HE4int_G2_SOS;
    x_solver[395] = pHE4Ev3int_G2_SOS;
    x_solver[396] = pE1HE4int_G2_SOS;
    x_solver[397] = pE3HE4int_G2_SOS;
    x_solver[398] = pHE4E4int_G2_SOS;
    x_solver[399] = pHE4HE4int_G2_SOS;
    x_solver[400] = pHGF_Met_Metint_G2_SOS;
    x_solver[401] = pHGF_Met_HGF_Metint_G2_SOS;
    x_solver[402] = pPPrPPrint_G2_SOS;
    x_solver[403] = pPPrPrint_G2_SOS;
    x_solver[404] = pFFrFFrint_G2_SOS;
    x_solver[405] = pFFrFrint_G2_SOS;
    x_solver[406] = pIIrIr_int_IRS_G2_SOS;
    x_solver[407] = pINS_Isr_Isr_int_IRS_G2_SOS;
    x_solver[408] = pIIrIrI_int_IRS_G2_SOS;
    x_solver[409] = pINS_Isr_Isr_INS_int_IRS_G2_SOS;
    x_solver[410] = pEE1E2_PLCg;
    x_solver[411] = pEE1Ev3_PLCg;
    x_solver[412] = pEE1E1_PLCg;
    x_solver[413] = pEE1EE1_PLCg;
    x_solver[414] = pEE1E3_PLCg;
    x_solver[415] = pEE1HE3_PLCg;
    x_solver[416] = pEE1E4_PLCg;
    x_solver[417] = pEE1HE4_PLCg;
    x_solver[418] = pE2HE3_PLCg;
    x_solver[419] = pHE3Ev3_PLCg;
    x_solver[420] = pE1HE3_PLCg;
    x_solver[421] = pHE3E4_PLCg;
    x_solver[422] = pHE3HE4_PLCg;
    x_solver[423] = pE2HE4_PLCg;
    x_solver[424] = pHE4Ev3_PLCg;
    x_solver[425] = pE1HE4_PLCg;
    x_solver[426] = pE3HE4_PLCg;
    x_solver[427] = pHE4E4_PLCg;
    x_solver[428] = pHE4HE4_PLCg;
    x_solver[429] = pHGF_Met_Met_PLCg;
    x_solver[430] = pHGF_Met_HGF_Met_PLCg;
    x_solver[431] = pPPrPPr_PLCg;
    x_solver[432] = pPPrPr_PLCg;
    x_solver[433] = pFFrFFr_PLCg;
    x_solver[434] = pFFrFr_PLCg;
    x_solver[435] = pIIrIr_IRS_PLCg;
    x_solver[436] = pINS_Isr_Isr_IRS_PLCg;
    x_solver[437] = pIIrIrI_IRS_PLCg;
    x_solver[438] = pINS_Isr_Isr_INS_IRS_PLCg;
    x_solver[439] = pEE1E2_PI3K1;
    x_solver[440] = pEE1Ev3_PI3K1;
    x_solver[441] = pEE1E1_PI3K1;
    x_solver[442] = pEE1EE1_PI3K1;
    x_solver[443] = pEE1E3_PI3K1;
    x_solver[444] = pEE1HE3_PI3K1;
    x_solver[445] = pEE1E4_PI3K1;
    x_solver[446] = pEE1HE4_PI3K1;
    x_solver[447] = pE2HE3_PI3K1;
    x_solver[448] = pHE3Ev3_PI3K1;
    x_solver[449] = pE1HE3_PI3K1;
    x_solver[450] = pHE3E4_PI3K1;
    x_solver[451] = pHE3HE4_PI3K1;
    x_solver[452] = pE2HE4_PI3K1;
    x_solver[453] = pHE4Ev3_PI3K1;
    x_solver[454] = pE1HE4_PI3K1;
    x_solver[455] = pE3HE4_PI3K1;
    x_solver[456] = pHE4E4_PI3K1;
    x_solver[457] = pHE4HE4_PI3K1;
    x_solver[458] = pHGF_Met_Met_PI3K1;
    x_solver[459] = pHGF_Met_HGF_Met_PI3K1;
    x_solver[460] = pPPrPPr_PI3K1;
    x_solver[461] = pPPrPr_PI3K1;
    x_solver[462] = pFFrFFr_PI3K1;
    x_solver[463] = pFFrFr_PI3K1;
    x_solver[464] = pIIrIr_IRS_PI3K1;
    x_solver[465] = pINS_Isr_Isr_IRS_PI3K1;
    x_solver[466] = pIIrIrI_IRS_PI3K1;
    x_solver[467] = pINS_Isr_Isr_INS_IRS_PI3K1;
    x_solver[468] = pEE1E2_PI3K2;
    x_solver[469] = pEE1Ev3_PI3K2;
    x_solver[470] = pEE1E1_PI3K2;
    x_solver[471] = pEE1EE1_PI3K2;
    x_solver[472] = pEE1E3_PI3K2;
    x_solver[473] = pEE1HE3_PI3K2;
    x_solver[474] = pEE1E4_PI3K2;
    x_solver[475] = pEE1HE4_PI3K2;
    x_solver[476] = pE2HE3_PI3K2;
    x_solver[477] = pHE3Ev3_PI3K2;
    x_solver[478] = pE1HE3_PI3K2;
    x_solver[479] = pHE3E4_PI3K2;
    x_solver[480] = pHE3HE4_PI3K2;
    x_solver[481] = pE2HE4_PI3K2;
    x_solver[482] = pHE4Ev3_PI3K2;
    x_solver[483] = pE1HE4_PI3K2;
    x_solver[484] = pE3HE4_PI3K2;
    x_solver[485] = pHE4E4_PI3K2;
    x_solver[486] = pHE4HE4_PI3K2;
    x_solver[487] = pHGF_Met_Met_PI3K2;
    x_solver[488] = pHGF_Met_HGF_Met_PI3K2;
    x_solver[489] = pPPrPPr_PI3K2;
    x_solver[490] = pPPrPr_PI3K2;
    x_solver[491] = pFFrFFr_PI3K2;
    x_solver[492] = pFFrFr_PI3K2;
    x_solver[493] = pIIrIr_IRS_PI3K2;
    x_solver[494] = pINS_Isr_Isr_IRS_PI3K2;
    x_solver[495] = pIIrIrI_IRS_PI3K2;
    x_solver[496] = pINS_Isr_Isr_INS_IRS_PI3K2;
    x_solver[497] = pEE1E2int_G2_SOS_RasD;
    x_solver[498] = pEE1Ev3int_G2_SOS_RasD;
    x_solver[499] = pEE1E1int_G2_SOS_RasD;
    x_solver[500] = pEE1EE1int_G2_SOS_RasD;
    x_solver[501] = pEE1E3int_G2_SOS_RasD;
    x_solver[502] = pEE1HE3int_G2_SOS_RasD;
    x_solver[503] = pEE1E4int_G2_SOS_RasD;
    x_solver[504] = pEE1HE4int_G2_SOS_RasD;
    x_solver[505] = pE2HE3int_G2_SOS_RasD;
    x_solver[506] = pHE3Ev3int_G2_SOS_RasD;
    x_solver[507] = pE1HE3int_G2_SOS_RasD;
    x_solver[508] = pHE3E4int_G2_SOS_RasD;
    x_solver[509] = pHE3HE4int_G2_SOS_RasD;
    x_solver[510] = pE2HE4int_G2_SOS_RasD;
    x_solver[511] = pHE4Ev3int_G2_SOS_RasD;
    x_solver[512] = pE1HE4int_G2_SOS_RasD;
    x_solver[513] = pE3HE4int_G2_SOS_RasD;
    x_solver[514] = pHE4E4int_G2_SOS_RasD;
    x_solver[515] = pHE4HE4int_G2_SOS_RasD;
    x_solver[516] = pHGF_Met_Metint_G2_SOS_RasD;
    x_solver[517] = pHGF_Met_HGF_Metint_G2_SOS_RasD;
    x_solver[518] = pPPrPPrint_G2_SOS_RasD;
    x_solver[519] = pPPrPrint_G2_SOS_RasD;
    x_solver[520] = pFFrFFrint_G2_SOS_RasD;
    x_solver[521] = pFFrFrint_G2_SOS_RasD;
    x_solver[522] = pIIrIr_int_IRS_G2_SOS_RasD;
    x_solver[523] = pINS_Isr_Isr_int_IRS_G2_SOS_RasD;
    x_solver[524] = pIIrIrI_int_IRS_G2_SOS_RasD;
    x_solver[525] = pINS_Isr_Isr_INS_int_IRS_G2_SOS_RasD;
    x_solver[526] = pEE1E2_G2_SOS_RasD;
    x_solver[527] = pEE1Ev3_G2_SOS_RasD;
    x_solver[528] = pEE1E1_G2_SOS_RasD;
    x_solver[529] = pEE1EE1_G2_SOS_RasD;
    x_solver[530] = pEE1E3_G2_SOS_RasD;
    x_solver[531] = pEE1HE3_G2_SOS_RasD;
    x_solver[532] = pEE1E4_G2_SOS_RasD;
    x_solver[533] = pEE1HE4_G2_SOS_RasD;
    x_solver[534] = pE2HE3_G2_SOS_RasD;
    x_solver[535] = pHE3Ev3_G2_SOS_RasD;
    x_solver[536] = pE1HE3_G2_SOS_RasD;
    x_solver[537] = pHE3E4_G2_SOS_RasD;
    x_solver[538] = pHE3HE4_G2_SOS_RasD;
    x_solver[539] = pE2HE4_G2_SOS_RasD;
    x_solver[540] = pHE4Ev3_G2_SOS_RasD;
    x_solver[541] = pE1HE4_G2_SOS_RasD;
    x_solver[542] = pE3HE4_G2_SOS_RasD;
    x_solver[543] = pHE4E4_G2_SOS_RasD;
    x_solver[544] = pHE4HE4_G2_SOS_RasD;
    x_solver[545] = pHGF_Met_Met_G2_SOS_RasD;
    x_solver[546] = pHGF_Met_HGF_Met_G2_SOS_RasD;
    x_solver[547] = pPPrPPr_G2_SOS_RasD;
    x_solver[548] = pPPrPr_G2_SOS_RasD;
    x_solver[549] = pFFrFFr_G2_SOS_RasD;
    x_solver[550] = pFFrFr_G2_SOS_RasD;
    x_solver[551] = pIIrIr_IRS_G2_SOS_RasD;
    x_solver[552] = pINS_Isr_Isr_IRS_G2_SOS_RasD;
    x_solver[553] = pIIrIrI_IRS_G2_SOS_RasD;
    x_solver[554] = pINS_Isr_Isr_INS_IRS_G2_SOS_RasD;
    x_solver[555] = pEE1E2_PLCg_PIP2;
    x_solver[556] = pEE1Ev3_PLCg_PIP2;
    x_solver[557] = pEE1E1_PLCg_PIP2;
    x_solver[558] = pEE1EE1_PLCg_PIP2;
    x_solver[559] = pEE1E3_PLCg_PIP2;
    x_solver[560] = pEE1HE3_PLCg_PIP2;
    x_solver[561] = pEE1E4_PLCg_PIP2;
    x_solver[562] = pEE1HE4_PLCg_PIP2;
    x_solver[563] = pE2HE3_PLCg_PIP2;
    x_solver[564] = pHE3Ev3_PLCg_PIP2;
    x_solver[565] = pE1HE3_PLCg_PIP2;
    x_solver[566] = pHE3E4_PLCg_PIP2;
    x_solver[567] = pHE3HE4_PLCg_PIP2;
    x_solver[568] = pE2HE4_PLCg_PIP2;
    x_solver[569] = pHE4Ev3_PLCg_PIP2;
    x_solver[570] = pE1HE4_PLCg_PIP2;
    x_solver[571] = pE3HE4_PLCg_PIP2;
    x_solver[572] = pHE4E4_PLCg_PIP2;
    x_solver[573] = pHE4HE4_PLCg_PIP2;
    x_solver[574] = pHGF_Met_Met_PLCg_PIP2;
    x_solver[575] = pHGF_Met_HGF_Met_PLCg_PIP2;
    x_solver[576] = pPPrPPr_PLCg_PIP2;
    x_solver[577] = pPPrPr_PLCg_PIP2;
    x_solver[578] = pFFrFFr_PLCg_PIP2;
    x_solver[579] = pFFrFr_PLCg_PIP2;
    x_solver[580] = pIIrIr_IRS_PLCg_PIP2;
    x_solver[581] = pINS_Isr_Isr_IRS_PLCg_PIP2;
    x_solver[582] = pIIrIrI_IRS_PLCg_PIP2;
    x_solver[583] = pINS_Isr_Isr_INS_IRS_PLCg_PIP2;
    x_solver[584] = pEE1E2_PI3K1_PIP2;
    x_solver[585] = pEE1Ev3_PI3K1_PIP2;
    x_solver[586] = pEE1E1_PI3K1_PIP2;
    x_solver[587] = pEE1EE1_PI3K1_PIP2;
    x_solver[588] = pEE1E3_PI3K1_PIP2;
    x_solver[589] = pEE1HE3_PI3K1_PIP2;
    x_solver[590] = pEE1E4_PI3K1_PIP2;
    x_solver[591] = pEE1HE4_PI3K1_PIP2;
    x_solver[592] = pE2HE3_PI3K1_PIP2;
    x_solver[593] = pHE3Ev3_PI3K1_PIP2;
    x_solver[594] = pE1HE3_PI3K1_PIP2;
    x_solver[595] = pHE3E4_PI3K1_PIP2;
    x_solver[596] = pHE3HE4_PI3K1_PIP2;
    x_solver[597] = pE2HE4_PI3K1_PIP2;
    x_solver[598] = pHE4Ev3_PI3K1_PIP2;
    x_solver[599] = pE1HE4_PI3K1_PIP2;
    x_solver[600] = pE3HE4_PI3K1_PIP2;
    x_solver[601] = pHE4E4_PI3K1_PIP2;
    x_solver[602] = pHE4HE4_PI3K1_PIP2;
    x_solver[603] = pHGF_Met_Met_PI3K1_PIP2;
    x_solver[604] = pHGF_Met_HGF_Met_PI3K1_PIP2;
    x_solver[605] = pPPrPPr_PI3K1_PIP2;
    x_solver[606] = pPPrPr_PI3K1_PIP2;
    x_solver[607] = pFFrFFr_PI3K1_PIP2;
    x_solver[608] = pFFrFr_PI3K1_PIP2;
    x_solver[609] = pIIrIr_IRS_PI3K1_PIP2;
    x_solver[610] = pINS_Isr_Isr_IRS_PI3K1_PIP2;
    x_solver[611] = pIIrIrI_IRS_PI3K1_PIP2;
    x_solver[612] = pINS_Isr_Isr_INS_IRS_PI3K1_PIP2;
    x_solver[613] = pEE1E2_PI3K2_PIP;
    x_solver[614] = pEE1Ev3_PI3K2_PIP;
    x_solver[615] = pEE1E1_PI3K2_PIP;
    x_solver[616] = pEE1EE1_PI3K2_PIP;
    x_solver[617] = pEE1E3_PI3K2_PIP;
    x_solver[618] = pEE1HE3_PI3K2_PIP;
    x_solver[619] = pEE1E4_PI3K2_PIP;
    x_solver[620] = pEE1HE4_PI3K2_PIP;
    x_solver[621] = pE2HE3_PI3K2_PIP;
    x_solver[622] = pHE3Ev3_PI3K2_PIP;
    x_solver[623] = pE1HE3_PI3K2_PIP;
    x_solver[624] = pHE3E4_PI3K2_PIP;
    x_solver[625] = pHE3HE4_PI3K2_PIP;
    x_solver[626] = pE2HE4_PI3K2_PIP;
    x_solver[627] = pHE4Ev3_PI3K2_PIP;
    x_solver[628] = pE1HE4_PI3K2_PIP;
    x_solver[629] = pE3HE4_PI3K2_PIP;
    x_solver[630] = pHE4E4_PI3K2_PIP;
    x_solver[631] = pHE4HE4_PI3K2_PIP;
    x_solver[632] = pHGF_Met_Met_PI3K2_PIP;
    x_solver[633] = pHGF_Met_HGF_Met_PI3K2_PIP;
    x_solver[634] = pPPrPPr_PI3K2_PIP;
    x_solver[635] = pPPrPr_PI3K2_PIP;
    x_solver[636] = pFFrFFr_PI3K2_PIP;
    x_solver[637] = pFFrFr_PI3K2_PIP;
    x_solver[638] = pIIrIr_IRS_PI3K2_PIP;
    x_solver[639] = pINS_Isr_Isr_IRS_PI3K2_PIP;
    x_solver[640] = pIIrIrI_IRS_PI3K2_PIP;
    x_solver[641] = pINS_Isr_Isr_INS_IRS_PI3K2_PIP;
    x_solver[642] = IRS;
    x_solver[643] = Sp;
    x_solver[644] = Cbl;
    x_solver[645] = G2;
    x_solver[646] = G2_SOS;
    x_solver[647] = G2_pSOS;
    x_solver[648] = PLCg;
    x_solver[649] = PI3KC1;
    x_solver[650] = PI3KR1;
    x_solver[651] = PI3K1;
    x_solver[652] = pPI3K1;
    x_solver[653] = PI3K2;
    x_solver[654] = mTORC1;
    x_solver[655] = mTORC1active;
    x_solver[656] = PIP;
    x_solver[657] = PI3P;
    x_solver[658] = DAG;
    x_solver[659] = GRP;
    x_solver[660] = DAG_GRP;
    x_solver[661] = RasT;
    x_solver[662] = RasD;
    x_solver[663] = NF1;
    x_solver[664] = pNF1;
    x_solver[665] = pCRaf;
    x_solver[666] = CRaf;
    x_solver[667] = RasT_CRaf;
    x_solver[668] = BRaf;
    x_solver[669] = RasT_CRaf_BRaf;
    x_solver[670] = MEK;
    x_solver[671] = pMEK;
    x_solver[672] = ppMEK;
    x_solver[673] = MKP3;
    x_solver[674] = ERKnuc;
    x_solver[675] = ppERKnuc;
    x_solver[676] = RSK;
    x_solver[677] = pRSK;
    x_solver[678] = pRSKnuc;
    x_solver[679] = MKP1;
    x_solver[680] = pMKP1;
    x_solver[681] = cFos;
    x_solver[682] = pcFos;
    x_solver[683] = cJun;
    x_solver[684] = pcFos_cJun;
    x_solver[685] = cMyc;
    x_solver[686] = bCATENINnuc;
    x_solver[687] = bCATENIN;
    x_solver[688] = pbCATENIN;
    x_solver[689] = IP3;
    x_solver[690] = PIP2;
    x_solver[691] = PIP3;
    x_solver[692] = PTEN;
    x_solver[693] = PIP3_AKT;
    x_solver[694] = AKT;
    x_solver[695] = pAKT;
    x_solver[696] = ppAKT;
    x_solver[697] = PDK1;
    x_solver[698] = PIP3_PDK1;
    x_solver[699] = PIP3_pAKT;
    x_solver[700] = Rictor;
    x_solver[701] = mTOR;
    x_solver[702] = mTORC2;
    x_solver[703] = PIP3_ppAKT;
    x_solver[704] = GSK3b;
    x_solver[705] = pGSK3b;
    x_solver[706] = TSC1;
    x_solver[707] = TSC2;
    x_solver[708] = pTSC2;
    x_solver[709] = TSC;
    x_solver[710] = PKC;
    x_solver[711] = DAG_PKC;
    x_solver[712] = pRKIP;
    x_solver[713] = RKIP;
    x_solver[714] = RKIP_CRaf;
    x_solver[715] = ERK;
    x_solver[716] = pERK;
    x_solver[717] = ppERK;
    x_solver[718] = FOXO;
    x_solver[719] = pFOXO;
    x_solver[720] = RhebD;
    x_solver[721] = RhebT;
    x_solver[722] = Raptor;
    x_solver[723] = S6K;
    x_solver[724] = pS6K;
    x_solver[725] = EIF4EBP1;
    x_solver[726] = pEIF4EBP1;
    x_solver[727] = SOS;
    x_solver[728] = G2_SOS_ppERK;
    x_solver[729] = CRaf_ppERK;
    x_solver[730] = RasD_DAG_GRP;
    x_solver[731] = RasT_NF1;
    x_solver[732] = NF1_ppERK;
    x_solver[733] = MEK_RasT_CRaf_BRaf;
    x_solver[734] = pMEK_RasT_CRaf_BRaf;
    x_solver[735] = ERK_ppMEK;
    x_solver[736] = pERK_ppMEK;
    x_solver[737] = RSK_ppERK;
    x_solver[738] = pRSKnuc_MKP1;
    x_solver[739] = ppERKnuc_MKP1;
    x_solver[740] = cFos_pRSKnuc;
    x_solver[741] = cFos_ppERKnuc;
    x_solver[742] = RKIP_DAG_PKC;
    x_solver[743] = PIP3_PTEN;
    x_solver[744] = PIP3_AKT_PIP3_PDK1;
    x_solver[745] = PIP3_pAKT_mTORC2;
    x_solver[746] = GSK3b_ppAKT;
    x_solver[747] = TSC2_ppAKT;
    x_solver[748] = TSC2_ppERK;
    x_solver[749] = RhebT_TSC;
    x_solver[750] = EIF4EBP1_mTORC1active;
    x_solver[751] = S6K_mTORC1active;
    x_solver[752] = FOXO_ppAKT;
    x_solver[753] = PI3K1_mTORC1active;
    x_solver[754] = pERK_MKP3;
    x_solver[755] = ppERK_MKP3;
    x_solver[756] = ppERKnuc_pMKP1;
    x_solver[757] = RasT_BRaf;
    x_solver[758] = RasT_BRaf_BRaf;
    x_solver[759] = MEK_RasT_BRaf_BRaf;
    x_solver[760] = pMEK_RasT_BRaf_BRaf;
    x_solver[761] = EIF4E;
    x_solver[762] = EIF4EBP1_EIF4E;
    x_solver[763] = RasT_CRaf_CRaf;
    x_solver[764] = MEK_RasT_CRaf_CRaf;
    x_solver[765] = pMEK_RasT_CRaf_CRaf;
    x_solver[766] = FOXOnuc;
    x_solver[767] = MEKi;
    x_solver[768] = MEKi_ppMEK;
    x_solver[769] = AKTi;
    x_solver[770] = AKTi_AKT;
    x_solver[771] = mT;
    x_solver[772] = EIF4E_mT;
}

} // namespace amici
} // namespace model_SPARCED_standard