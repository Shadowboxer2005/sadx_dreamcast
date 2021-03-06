#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

//OWell

NJS_MATERIAL matlistADV03_00015070[] = {
	{ { 0x99B2B2B2 },{ 0xFFFFFFFF }, 11, 0, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV03_00015084[] = {
	6, 5, 3, 8, 6, 4, 2,
	6, 4, 0, 8, 7, 5, 1
};

NJS_TEX uvADV03_000150A0[] = {
	{ 255, -255 },
	{ 414, -203 },
	{ 255, 0 },
	{ 510, 0 },
	{ 255, 255 },
	{ 414, 203 },
	{ 255, 255 },
	{ 103, 203 },
	{ 255, 0 },
	{ 0 },
	{ 255, -255 },
	{ 95, -203 }
};

NJS_MESHSET_SADX meshlistADV03_000150D0[] = {
	{ NJD_MESHSET_TRIMESH | 0, 2, polyADV03_00015084, NULL, NULL, NULL, uvADV03_000150A0, NULL }
};

NJS_VECTOR vertexADV03_000150E8[] = {
	{ 0, 0, -6 },
	{ -0.5f, 0, 18 },
	{ 19.5f, 0, -6 },
	{ 19.5f, 0, 18 },
	{ 9.5f, 0, -9 },
	{ 9.5f, 0, 21 },
	{ 25.5f, 0, 6 },
	{ -6.5f, 0, 6 },
	{ 9.5f, 0, 6 }
};

NJS_VECTOR normalADV03_00015154[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attachADV03_000151C0 = { vertexADV03_000150E8, normalADV03_00015154, LengthOfArray<Sint32>(vertexADV03_000150E8), meshlistADV03_000150D0, matlistADV03_00015070, LengthOfArray<Uint16>(meshlistADV03_000150D0), LengthOfArray<Uint16>(matlistADV03_00015070),{ 9.5f, 0, 6 }, 21.93171f, NULL };

NJS_OBJECT objectADV03_000151E8 = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attachADV03_000151C0, -13.5f, 3, -6, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlistADV03_0001521C[] = {
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 17, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 16, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 37, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 34, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_FLIP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 6, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 1, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 15, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC },
	{ { 0xFFB2B2B2 },{ 0xFFFFFFFF }, 11, 32, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_TEXTURE | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 polyADV03_000152D0[] = {
	4, 2, 3, 1, 0,
	4, 3, 5, 0, 4,
	4, 5, 7, 4, 6,
	4, 7, 2, 6, 1,
	4, 1, 0, 10, 11,
	4, 0, 4, 11, 13,
	4, 4, 6, 13, 15,
	4, 6, 1, 15, 10,
	4, 18, 19, 17, 16,
	4, 9, 8, 16, 17,
	4, 21, 18, 20, 17,
	4, 8, 12, 17, 20,
	4, 23, 21, 22, 20,
	4, 12, 14, 20, 22,
	4, 19, 23, 16, 22,
	4, 14, 9, 22, 16,
	4, 26, 27, 25, 24,
	4, 27, 29, 24, 28,
	4, 29, 31, 28, 30,
	4, 31, 26, 30, 25,
	4, 25, 24, 34, 35,
	4, 24, 28, 35, 37,
	4, 28, 30, 37, 39,
	4, 30, 25, 39, 34,
	4, 42, 43, 41, 40,
	4, 33, 32, 40, 41,
	4, 45, 42, 44, 41,
	4, 32, 36, 41, 44,
	4, 47, 45, 46, 44,
	4, 36, 38, 44, 46,
	4, 43, 47, 40, 46,
	4, 38, 33, 46, 40,
	4, 50, 51, 49, 48,
	4, 51, 53, 48, 52,
	4, 53, 55, 52, 54,
	4, 55, 50, 54, 49,
	4, 49, 48, 58, 59,
	4, 48, 52, 59, 61,
	4, 52, 54, 61, 63,
	4, 54, 49, 63, 58,
	4, 66, 67, 65, 64,
	4, 57, 56, 64, 65,
	4, 69, 66, 68, 65,
	4, 56, 60, 65, 68,
	4, 71, 69, 70, 68,
	4, 60, 62, 68, 70,
	4, 67, 71, 64, 70,
	4, 62, 57, 70, 64,
	4, 74, 75, 73, 72,
	4, 75, 77, 72, 76,
	4, 77, 79, 76, 78,
	4, 79, 74, 78, 73,
	4, 73, 72, 82, 83,
	4, 72, 76, 83, 85,
	4, 76, 78, 85, 87,
	4, 78, 73, 87, 82,
	4, 90, 91, 89, 88,
	4, 81, 80, 88, 89,
	4, 93, 90, 92, 89,
	4, 80, 84, 89, 92,
	4, 95, 93, 94, 92,
	4, 84, 86, 92, 94,
	4, 91, 95, 88, 94,
	4, 86, 81, 94, 88
};

Sint16 polyADV03_00015550[] = {
	4, 10, 11, 9, 8,
	4, 11, 13, 8, 12,
	4, 13, 15, 12, 14,
	4, 15, 10, 14, 9,
	4, 34, 35, 33, 32,
	4, 35, 37, 32, 36,
	4, 37, 39, 36, 38,
	4, 39, 34, 38, 33,
	4, 58, 59, 57, 56,
	4, 59, 61, 56, 60,
	4, 61, 63, 60, 62,
	4, 63, 58, 62, 57,
	4, 82, 83, 81, 80,
	4, 83, 85, 80, 84,
	4, 85, 87, 84, 86,
	4, 87, 82, 86, 81
};

Sint16 polyADV03_000155F0[] = {
	4, 103, 99, 101, 97,
	8, 101, 100, 103, 102, 99, 98, 97, 96,
	4, 98, 102, 96, 100
};

Sint16 polyADV03_00015616[] = {
	0x8000u | 6, 108, 114, 140, 141, 109, 105,
	0x8000u | 6, 113, 116, 138, 139, 115, 104,
	0x8000u | 6, 107, 117, 133, 134, 104, 115,
	0x8000u | 6, 114, 108, 135, 132, 118, 110,
	0x8000u | 6, 119, 112, 128, 131, 105, 109,
	0x8000u | 6, 106, 111, 129, 130, 113, 116,
	0x8000u | 6, 118, 110, 137, 136, 119, 112,
	0x8000u | 6, 111, 106, 143, 142, 107, 117
};

Sint16 polyADV03_00015686[] = {
	0x8000u | 6, 119, 113, 137, 138, 118, 115,
	0x8000u | 6, 106, 105, 142, 141, 117, 114
};

Sint16 polyADV03_000156A2[] = {
	6, 140, 108, 144, 132, 136, 110,
	6, 136, 112, 144, 131, 140, 109
};

Sint16 polyADV03_000156BE[] = {
	0x8000u | 6, 118, 115, 135, 134, 114, 117,
	0x8000u | 6, 105, 106, 128, 129, 119, 113
};

Sint16 polyADV03_000156DA[] = {
	4, 123, 122, 121, 120,
	4, 127, 123, 125, 121,
	4, 126, 127, 124, 125,
	4, 122, 126, 120, 124
};

Sint16 polyADV03_00015702[] = {
	4, 121, 120, 125, 124,
	4, 127, 126, 123, 122
};

NJS_TEX uvADV03_00015718[] = {
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 253, 1 },
	{ 1, 1 },
	{ 253, 45 },
	{ 1, 45 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 },
	{ 255, 0 },
	{ 0 },
	{ 253, 253 },
	{ 1, 253 },
	{ 1, 45 },
	{ 253, 45 },
	{ 1, 1 },
	{ 253, 1 }
};

NJS_TEX uvADV03_00015B18[] = {
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 },
	{ 255, 0 },
	{ 255, 510 },
	{ -765, 0 },
	{ -765, 510 }
};

NJS_TEX uvADV03_00015C18[] = {
	{ 249, -247 },
	{ 5, -247 },
	{ 249, -247 },
	{ 5, -247 },
	{ 249, -247 },
	{ 249, 249 },
	{ 249, -247 },
	{ 249, 249 },
	{ 5, -247 },
	{ 5, 249 },
	{ 5, -247 },
	{ 5, 249 },
	{ 5, 249 },
	{ 249, 249 },
	{ 5, 249 },
	{ 249, 249 }
};

NJS_TEX uvADV03_00015C58[] = {
	{ 508, 255 },
	{ 508, 6 },
	{ 255, 255 },
	{ 255, 6 },
	{ 1, 255 },
	{ 1, 6 },
	{ 500, 12 },
	{ 508, 252 },
	{ 256, 12 },
	{ 256, 252 },
	{ 12, 12 },
	{ 5, 252 },
	{ 2, 247 },
	{ 8, 5 },
	{ 254, 247 },
	{ 254, 5 },
	{ 507, 247 },
	{ 501, 5 },
	{ 2, 8 },
	{ 2, 244 },
	{ 255, 8 },
	{ 255, 244 },
	{ 507, 8 },
	{ 507, 244 },
	{ 507, 8 },
	{ 507, 244 },
	{ 255, 8 },
	{ 255, 244 },
	{ 2, 8 },
	{ 2, 244 },
	{ 8, 5 },
	{ 2, 247 },
	{ 254, 5 },
	{ 254, 247 },
	{ 501, 5 },
	{ 507, 247 },
	{ 508, 6 },
	{ 508, 255 },
	{ 255, 6 },
	{ 255, 255 },
	{ 1, 6 },
	{ 1, 255 },
	{ 508, 252 },
	{ 500, 12 },
	{ 256, 252 },
	{ 256, 12 },
	{ 5, 252 },
	{ 12, 12 }
};

NJS_TEX uvADV03_00015D18[] = {
	{ 1873, 241 },
	{ 2038, 159 },
	{ 1019, 104 },
	{ 1019, 1 },
	{ 165, 241 },
	{ 0, 159 },
	{ 2023, 92 },
	{ 1861, 8 },
	{ 1019, 254 },
	{ 1019, 148 },
	{ 15, 92 },
	{ 177, 8 }
};

NJS_TEX uvADV03_00015D48[] = {
	{ 74, 542 },
	{ 7, 239 },
	{ -255, 540 },
	{ -255, 45 },
	{ -584, 542 },
	{ -517, 239 },
	{ -584, 542 },
	{ -517, 844 },
	{ -255, 540 },
	{ -255, 1035 },
	{ 74, 542 },
	{ 7, 844 }
};

NJS_TEX uvADV03_00015D78[] = {
	{ -1619, 246 },
	{ -1752, 202 },
	{ -761, 103 },
	{ -761, 24 },
	{ 97, 246 },
	{ 229, 202 },
	{ 71, 10 },
	{ 200, 57 },
	{ -772, 165 },
	{ -772, 250 },
	{ -1615, 10 },
	{ -1744, 57 }
};

NJS_TEX uvADV03_00015DA8[] = {
	{ 1530, -1 },
	{ 0, -1 },
	{ 1530, 253 },
	{ 0, 253 },
	{ 3060, 0 },
	{ 0 },
	{ 3060, 255 },
	{ 0, 255 },
	{ 0, -1 },
	{ 1530, -1 },
	{ 0, 253 },
	{ 1530, 253 },
	{ 0 },
	{ 3060, 0 },
	{ 0, 255 },
	{ 3060, 255 }
};

NJS_TEX uvADV03_00015DE8[] = {
	{ 0, -765 },
	{ 0, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 1020, -765 },
	{ 1020, 255 },
	{ 0, -765 },
	{ 0, 255 }
};

NJS_MESHSET_SADX meshlistADV03_00015E08[] = {
	{ NJD_MESHSET_TRIMESH | 0, 64, polyADV03_000152D0, NULL, NULL, NULL, uvADV03_00015718, NULL },
	{ NJD_MESHSET_TRIMESH | 1, 16, polyADV03_00015550, NULL, NULL, NULL, uvADV03_00015B18, NULL },
	{ NJD_MESHSET_TRIMESH | 2, 3, polyADV03_000155F0, NULL, NULL, NULL, uvADV03_00015C18, NULL },
	{ NJD_MESHSET_TRIMESH | 3, 8, polyADV03_00015616, NULL, NULL, NULL, uvADV03_00015C58, NULL },
	{ NJD_MESHSET_TRIMESH | 4, 2, polyADV03_00015686, NULL, NULL, NULL, uvADV03_00015D18, NULL },
	{ NJD_MESHSET_TRIMESH | 5, 2, polyADV03_000156A2, NULL, NULL, NULL, uvADV03_00015D48, NULL },
	{ NJD_MESHSET_TRIMESH | 6, 2, polyADV03_000156BE, NULL, NULL, NULL, uvADV03_00015D78, NULL },
	{ NJD_MESHSET_TRIMESH | 7, 4, polyADV03_000156DA, NULL, NULL, NULL, uvADV03_00015DA8, NULL },
	{ NJD_MESHSET_TRIMESH | 8, 2, polyADV03_00015702, NULL, NULL, NULL, uvADV03_00015DE8, NULL }
};

NJS_VECTOR vertexADV03_00015EE0[] = {
	{ 30.5f, 5, -17.5f },
	{ 30.5f, 5, -24.5f },
	{ 30.5f, 0, -24.5f },
	{ 30.5f, 0, -17.5f },
	{ 37.5f, 5, -17.5f },
	{ 37.5f, 0, -17.5f },
	{ 37.5f, 5, -24.5f },
	{ 37.5f, 0, -24.5f },
	{ 31.5f, 33.5f, -18.5f },
	{ 31.5f, 33.5f, -23.5f },
	{ 31.5f, 5, -23.5f },
	{ 31.5f, 5, -18.5f },
	{ 36.5f, 33.5f, -18.5f },
	{ 36.5f, 5, -18.5f },
	{ 36.5f, 33.5f, -23.5f },
	{ 36.5f, 5, -23.5f },
	{ 30.5f, 33.5f, -24.5f },
	{ 30.5f, 33.5f, -17.5f },
	{ 30, 36, -17 },
	{ 30, 36, -25 },
	{ 37.5f, 33.5f, -17.5f },
	{ 37.99999f, 36, -17 },
	{ 37.5f, 33.5f, -24.5f },
	{ 37.99999f, 36, -25 },
	{ -41.5f, 5, -17.5f },
	{ -41.5f, 5, -24.5f },
	{ -41.5f, 0, -24.5f },
	{ -41.5f, 0, -17.5f },
	{ -34.5f, 5, -17.5f },
	{ -34.5f, 0, -17.5f },
	{ -34.5f, 5, -24.5f },
	{ -34.5f, 0, -24.5f },
	{ -40.5f, 33.5f, -18.5f },
	{ -40.5f, 33.5f, -23.5f },
	{ -40.5f, 5, -23.5f },
	{ -40.5f, 5, -18.5f },
	{ -35.5f, 33.5f, -18.5f },
	{ -35.5f, 5, -18.5f },
	{ -35.5f, 33.5f, -23.5f },
	{ -35.5f, 5, -23.5f },
	{ -41.5f, 33.5f, -24.5f },
	{ -41.5f, 33.5f, -17.5f },
	{ -41.99999f, 36, -17 },
	{ -41.99999f, 36, -25 },
	{ -34.5f, 33.5f, -17.5f },
	{ -34, 36, -17 },
	{ -34.5f, 33.5f, -24.5f },
	{ -34, 36, -25 },
	{ -41.5f, 5, 24.5f },
	{ -41.5f, 5, 17.5f },
	{ -41.5f, 0, 17.5f },
	{ -41.5f, 0, 24.5f },
	{ -34.5f, 5, 24.5f },
	{ -34.5f, 0, 24.5f },
	{ -34.5f, 5, 17.5f },
	{ -34.5f, 0, 17.5f },
	{ -40.5f, 33.5f, 23.5f },
	{ -40.5f, 33.5f, 18.5f },
	{ -40.5f, 5, 18.5f },
	{ -40.5f, 5, 23.5f },
	{ -35.5f, 33.5f, 23.5f },
	{ -35.5f, 5, 23.5f },
	{ -35.5f, 33.5f, 18.5f },
	{ -35.5f, 5, 18.5f },
	{ -41.5f, 33.5f, 17.5f },
	{ -41.5f, 33.5f, 24.5f },
	{ -41.99999f, 36, 25 },
	{ -41.99999f, 36, 17 },
	{ -34.5f, 33.5f, 24.5f },
	{ -34, 36, 25 },
	{ -34.5f, 33.5f, 17.5f },
	{ -34, 36, 17 },
	{ 30.5f, 5, 24.5f },
	{ 30.5f, 5, 17.5f },
	{ 30.5f, 0, 17.5f },
	{ 30.5f, 0, 24.5f },
	{ 37.5f, 5, 24.5f },
	{ 37.5f, 0, 24.5f },
	{ 37.5f, 5, 17.5f },
	{ 37.5f, 0, 17.5f },
	{ 31.5f, 33.5f, 23.5f },
	{ 31.5f, 33.5f, 18.5f },
	{ 31.5f, 5, 18.5f },
	{ 31.5f, 5, 23.5f },
	{ 36.5f, 33.5f, 23.5f },
	{ 36.5f, 5, 23.5f },
	{ 36.5f, 33.5f, 18.5f },
	{ 36.5f, 5, 18.5f },
	{ 30.5f, 33.5f, 17.5f },
	{ 30.5f, 33.5f, 24.5f },
	{ 30, 36, 25 },
	{ 30, 36, 17 },
	{ 37.5f, 33.5f, 24.5f },
	{ 37.99999f, 36, 25 },
	{ 37.5f, 33.5f, 17.5f },
	{ 37.99999f, 36, 17 },
	{ -39, 0, -17.5f },
	{ -39, 0, 17.5f },
	{ -39, 0.5f, -17.5f },
	{ -39, 0.5f, 17.5f },
	{ -25.5f, 0, -17.5f },
	{ -25.5f, 0, 17.5f },
	{ -25.5f, 0.5f, -17.5f },
	{ -25.5f, 0.5f, 17.5f },
	{ -15.22533f, 0.116387f, 13.53f },
	{ 5.124759f, 4.916596f, -11.44f },
	{ 6.884758f, 4.916615f, -13.2f },
	{ -15.22533f, 0.116387f, -13.53f },
	{ -13.13532f, 0.596411f, -11.44f },
	{ 5.124687f, 0.596627f, -11.44f },
	{ -13.13532f, 0.596411f, 11.44f },
	{ 7.21468f, 0.116652f, -13.53f },
	{ 5.124687f, 0.596627f, 11.44f },
	{ 6.884758f, 4.916615f, 13.2f },
	{ -13.13525f, 4.916381f, -11.44f },
	{ -14.89525f, 4.916357f, 13.2f },
	{ 7.21468f, 0.116652f, 13.53f },
	{ -14.89525f, 4.916357f, -13.2f },
	{ -13.13525f, 4.916381f, 11.44f },
	{ 5.124759f, 4.916596f, 11.44f },
	{ -52, 36, -30 },
	{ -52, 36, 30 },
	{ -52, 41, -30 },
	{ -52, 41, 30 },
	{ 48, 36, -30 },
	{ 48, 36, 30 },
	{ 48, 41, -30 },
	{ 48, 41, 30 },
	{ 10.88528f, 4.916665f, 0 },
	{ 14.08061f, 4.916704f, 0 },
	{ 14.67967f, 0.11674f, 0 },
	{ 10.88521f, 0.596696f, 0 },
	{ -18.96635f, 0.596341f, 0 },
	{ -22.7608f, 0.116297f, 0 },
	{ -22.16161f, 4.916272f, 0 },
	{ -18.96628f, 4.916311f, 0 },
	{ -4.005318f, 0.5965199f, 14.36425f },
	{ -4.005247f, 4.916482f, 14.36425f },
	{ -4.005247f, 4.916482f, 16.57414f },
	{ -4.005325f, 0.11652f, 16.98849f },
	{ -4.005318f, 0.5965199f, -14.36425f },
	{ -4.005247f, 4.916482f, -14.36425f },
	{ -4.005247f, 4.916483f, -16.57414f },
	{ -4.005325f, 0.116519f, -16.98849f },
	{ -4.040574f, 0.596519f, 0 }
};

NJS_VECTOR normalADV03_000165AC[] = {
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.301511f, -0.904534f, 0.301511f },
	{ -0.301511f, -0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, -0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ -0.519137f, -0.678965f, -0.519137f },
	{ -0.519137f, -0.678965f, 0.519137f },
	{ -0.680414f, -0.272164f, 0.680414f },
	{ -0.680414f, -0.272164f, -0.680414f },
	{ 0.519137f, -0.678965f, 0.519137f },
	{ 0.680414f, -0.272164f, 0.680414f },
	{ 0.519137f, -0.678965f, -0.519137f },
	{ 0.680414f, -0.272164f, -0.680414f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.301511f, -0.904534f, 0.301511f },
	{ -0.301511f, -0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, -0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ -0.519137f, -0.678965f, -0.519137f },
	{ -0.519137f, -0.678965f, 0.519137f },
	{ -0.680414f, -0.272164f, 0.680414f },
	{ -0.680414f, -0.272164f, -0.680414f },
	{ 0.519137f, -0.678965f, 0.519137f },
	{ 0.680414f, -0.272164f, 0.680414f },
	{ 0.519137f, -0.678965f, -0.519137f },
	{ 0.680414f, -0.272164f, -0.680414f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.301511f, -0.904534f, 0.301511f },
	{ -0.301511f, -0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, -0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ -0.519137f, -0.678965f, -0.519137f },
	{ -0.519137f, -0.678965f, 0.519137f },
	{ -0.680414f, -0.272164f, 0.680414f },
	{ -0.680414f, -0.272164f, -0.680414f },
	{ 0.519137f, -0.678965f, 0.519137f },
	{ 0.680414f, -0.272164f, 0.680414f },
	{ 0.519137f, -0.678965f, -0.519137f },
	{ 0.680414f, -0.272164f, -0.680414f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ -0.301511f, -0.904534f, 0.301511f },
	{ -0.301511f, -0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, -0.301511f },
	{ -0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, 0.301511f },
	{ 0.301511f, 0.904534f, 0.301511f },
	{ 0.301511f, -0.904534f, -0.301511f },
	{ 0.301511f, 0.904534f, -0.301511f },
	{ -0.519137f, -0.678965f, -0.519137f },
	{ -0.519137f, -0.678965f, 0.519137f },
	{ -0.680414f, -0.272164f, 0.680414f },
	{ -0.680414f, -0.272164f, -0.680414f },
	{ 0.519137f, -0.678965f, 0.519137f },
	{ 0.680414f, -0.272164f, 0.680414f },
	{ 0.519137f, -0.678965f, -0.519137f },
	{ 0.680414f, -0.272164f, -0.680414f },
	{ -0.7071069f, 0, -0.7071069f },
	{ -0.7071069f, 0, 0.7071069f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.7071069f, 0, -0.7071069f },
	{ 0.7071069f, 0, 0.7071069f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.629524f, 0.096296f, 0.77099f },
	{ -0.385118f, 0.805363f, 0.450639f },
	{ 0.469595f, 0.667132f, -0.578286f },
	{ -0.629524f, 0.096296f, -0.77099f },
	{ 0.503113f, 0.629928f, 0.591666f },
	{ -0.504777f, 0.629526f, 0.590676f },
	{ 0.503113f, 0.629928f, -0.591665f },
	{ 0.631048f, 0.096295f, -0.769744f },
	{ -0.504777f, 0.629526f, -0.590676f },
	{ 0.469595f, 0.667132f, 0.578286f },
	{ 0.384562f, 0.804718f, 0.452262f },
	{ -0.468218f, 0.667468f, 0.579015f },
	{ 0.631048f, 0.096295f, 0.769744f },
	{ -0.468218f, 0.667468f, -0.579015f },
	{ 0.384562f, 0.804718f, -0.452262f },
	{ -0.385118f, 0.805363f, -0.450639f },
	{ -0.57735f, -0.57735f, -0.57735f },
	{ -0.57735f, -0.57735f, 0.57735f },
	{ -0.57735f, 0.57735f, -0.57735f },
	{ -0.57735f, 0.57735f, 0.57735f },
	{ 0.57735f, -0.57735f, -0.57735f },
	{ 0.57735f, -0.57735f, 0.57735f },
	{ 0.57735f, 0.57735f, -0.57735f },
	{ 0.57735f, 0.57735f, 0.57735f },
	{ -0.567171f, 0.8236f, 0 },
	{ 0.758357f, 0.65184f, 0 },
	{ 0.994383f, 0.105845f, 0 },
	{ -0.785777f, 0.6185099f, 0 },
	{ 0.786369f, 0.617757f, 0 },
	{ -0.994341f, 0.106233f, 0 },
	{ -0.758747f, 0.6513849f, 0 },
	{ 0.565291f, 0.824891f, 0 },
	{ -0.00003f, 0.6444629f, -0.764636f },
	{ -0.00013f, 0.782626f, -0.622492f },
	{ -0.00004f, 0.6794479f, 0.733723f },
	{ -0.00006f, 0.08963399f, 0.995975f },
	{ -0.00003f, 0.6444629f, 0.764636f },
	{ -0.00013f, 0.782626f, 0.622492f },
	{ -0.00004f, 0.6794479f, -0.733723f },
	{ -0.00006f, 0.08963399f, -0.995975f },
	{ -0.00012f, 1, 0 }
};

NJS_MODEL_SADX attachADV03_00016C78 = { vertexADV03_00015EE0, normalADV03_000165AC, LengthOfArray<Sint32>(vertexADV03_00015EE0), meshlistADV03_00015E08, matlistADV03_0001521C, LengthOfArray<Uint16>(meshlistADV03_00015E08), LengthOfArray<Uint16>(matlistADV03_0001521C),{ -2, 20.5f, 0 }, 58.30952f, NULL };

NJS_OBJECT objectADV03_00016CA0 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attachADV03_00016C78, 0, 0, 0, 0, 0, 0, 1, 1, 1, &objectADV03_000151E8, NULL };

#pragma warning(pop)
