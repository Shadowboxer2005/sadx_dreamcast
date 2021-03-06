#pragma once

#pragma warning(push)
#pragma warning(disable: 4267 4838)

NJS_MATERIAL matlist_00193270[] = {
	{ { 0xFFFFFFFF },{ 0xFFFFFFFF }, 11, 99, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_TEXTURE | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_ONE }
};

Sint16 poly_00193284[] = {
	24, 22, 44, 43,
	0, 2, 1, 3,
	30, 0, 31, 1,
	26, 24, 45, 44,
	2, 4, 3, 5,
	22, 20, 43, 42,
	20, 18, 42, 41,
	4, 6, 5, 7,
	28, 30, 29, 31,
	18, 16, 41, 40,
	6, 8, 7, 9,
	16, 14, 40, 39,
	28, 26, 46, 45,
	8, 10, 9, 11,
	26, 28, 27, 29,
	14, 12, 39, 38,
	10, 12, 11, 13,
	12, 10, 38, 37,
	10, 8, 37, 36,
	12, 14, 13, 15,
	24, 26, 25, 27,
	30, 28, 47, 46,
	14, 16, 15, 17,
	8, 6, 36, 35,
	6, 4, 35, 34,
	16, 18, 17, 19,
	22, 24, 23, 25,
	4, 2, 34, 33,
	18, 20, 19, 21,
	0, 30, 32, 47,
	2, 0, 33, 32,
	20, 22, 21, 23
};

NJS_TEX uv_00193384[] = {
	{ 179, 255 },
	{ 164, 255 },
	{ 179, 255 },
	{ 164, 255 },
	{ 224, 255 },
	{ 239, 255 },
	{ 224, 15 },
	{ 239, 15 },
	{ 209, 255 },
	{ 224, 255 },
	{ 209, 15 },
	{ 224, 15 },
	{ 194, 255 },
	{ 179, 255 },
	{ 194, 255 },
	{ 179, 255 },
	{ 0, 255 },
	{ 14, 255 },
	{ 0, 15 },
	{ 14, 15 },
	{ 164, 255 },
	{ 149, 255 },
	{ 164, 255 },
	{ 149, 255 },
	{ 149, 255 },
	{ 134, 255 },
	{ 149, 255 },
	{ 134, 255 },
	{ 14, 255 },
	{ 29, 255 },
	{ 14, 15 },
	{ 29, 15 },
	{ 194, 255 },
	{ 209, 255 },
	{ 194, 15 },
	{ 209, 15 },
	{ 134, 255 },
	{ 119, 255 },
	{ 134, 255 },
	{ 119, 255 },
	{ 29, 255 },
	{ 44, 255 },
	{ 29, 15 },
	{ 44, 15 },
	{ 119, 255 },
	{ 104, 255 },
	{ 119, 255 },
	{ 104, 255 },
	{ 209, 255 },
	{ 194, 255 },
	{ 209, 255 },
	{ 194, 255 },
	{ 44, 255 },
	{ 59, 255 },
	{ 44, 15 },
	{ 59, 15 },
	{ 179, 255 },
	{ 194, 255 },
	{ 179, 15 },
	{ 194, 15 },
	{ 104, 255 },
	{ 89, 255 },
	{ 104, 255 },
	{ 89, 255 },
	{ 59, 255 },
	{ 74, 255 },
	{ 59, 15 },
	{ 74, 15 },
	{ 89, 255 },
	{ 74, 255 },
	{ 89, 255 },
	{ 74, 255 },
	{ 74, 255 },
	{ 59, 255 },
	{ 74, 255 },
	{ 59, 255 },
	{ 74, 255 },
	{ 89, 255 },
	{ 74, 15 },
	{ 89, 15 },
	{ 164, 255 },
	{ 179, 255 },
	{ 164, 15 },
	{ 179, 15 },
	{ 224, 255 },
	{ 209, 255 },
	{ 224, 255 },
	{ 209, 255 },
	{ 89, 255 },
	{ 104, 255 },
	{ 89, 15 },
	{ 104, 15 },
	{ 59, 255 },
	{ 44, 255 },
	{ 59, 255 },
	{ 44, 255 },
	{ 44, 255 },
	{ 29, 255 },
	{ 44, 255 },
	{ 29, 255 },
	{ 104, 255 },
	{ 119, 255 },
	{ 104, 15 },
	{ 119, 15 },
	{ 149, 255 },
	{ 164, 255 },
	{ 149, 15 },
	{ 164, 15 },
	{ 29, 255 },
	{ 14, 255 },
	{ 29, 255 },
	{ 14, 255 },
	{ 119, 255 },
	{ 134, 255 },
	{ 119, 15 },
	{ 134, 15 },
	{ 239, 255 },
	{ 224, 255 },
	{ 239, 255 },
	{ 224, 255 },
	{ 254, 255 },
	{ 239, 255 },
	{ 254, 255 },
	{ 239, 255 },
	{ 134, 255 },
	{ 149, 255 },
	{ 134, 15 },
	{ 149, 15 }
};

NJS_MESHSET_SADX meshlist_00193584[] = {
	{ NJD_MESHSET_4 | 0, 32, poly_00193284, NULL, NULL, NULL, uv_00193384, NULL }
};

NJS_VECTOR vertex_0019359C[] = {
	{ 5, 0, 0 },
	{ 5.656f, 0.14058f, 0 },
	{ 4.619398f, 0, -1.913417f },
	{ 5.225462f, 0.14058f, -2.164457f },
	{ 3.535534f, 0, -3.535534f },
	{ 3.999395f, 0.14058f, -3.999395f },
	{ 1.913417f, 0, -4.619398f },
	{ 2.164456f, 0.14058f, -5.225462f },
	{ -0.00001f, 0, -5 },
	{ -0.00001f, 0.14058f, -5.656001f },
	{ -1.913418f, 0, -4.619398f },
	{ -2.164458f, 0.14058f, -5.225462f },
	{ -3.535535f, 0, -3.535534f },
	{ -3.999396f, 0.14058f, -3.999395f },
	{ -4.619399f, 0, -1.913417f },
	{ -5.225463f, 0.14058f, -2.164456f },
	{ -5.000001f, 0, 0.000001f },
	{ -5.656001f, 0.14058f, 0.000001f },
	{ -4.619398f, 0, 1.913419f },
	{ -5.225462f, 0.14058f, 2.164459f },
	{ -3.535534f, 0, 3.535536f },
	{ -3.999395f, 0.14058f, 3.999397f },
	{ -1.913416f, 0, 4.619399f },
	{ -2.164455f, 0.14058f, 5.225463f },
	{ 0.000002f, 0, 5 },
	{ 0.000002f, 0.14058f, 5.656001f },
	{ 1.913419f, 0, 4.619398f },
	{ 2.164459f, 0.14058f, 5.225462f },
	{ 3.535536f, 0, 3.535533f },
	{ 3.999397f, 0.14058f, 3.999394f },
	{ 4.619399f, 0, 1.913415f },
	{ 5.225463f, 0.14058f, 2.164455f },
	{ 5, 0, 0 },
	{ 4.619398f, 0, -1.913417f },
	{ 3.535534f, 0, -3.535534f },
	{ 1.913417f, 0, -4.619398f },
	{ -0.00001f, 0, -5 },
	{ -1.913418f, 0, -4.619398f },
	{ -3.535535f, 0, -3.535534f },
	{ -4.619399f, 0, -1.913417f },
	{ -5.000001f, 0, 0.000001f },
	{ -4.619398f, 0, 1.913419f },
	{ -3.535534f, 0, 3.535536f },
	{ -1.913416f, 0, 4.619399f },
	{ 0.000002f, 0, 5 },
	{ 1.913419f, 0, 4.619398f },
	{ 3.535536f, 0, 3.535533f },
	{ 4.619399f, 0, 1.913415f }
};

NJS_VECTOR normal_001937DC[] = {
	{ 0.209542f, -0.9778f, 0 },
	{ 0.209542f, -0.9778f, 0 },
	{ 0.193592f, -0.9778f, -0.080188f },
	{ 0.193592f, -0.9778f, -0.080188f },
	{ 0.148169f, -0.9778f, -0.148169f },
	{ 0.148169f, -0.9778f, -0.148169f },
	{ 0.080188f, -0.9778f, -0.193591f },
	{ 0.080188f, -0.9778f, -0.193591f },
	{ 0, -0.9778f, -0.209542f },
	{ 0, -0.9778f, -0.209542f },
	{ -0.080188f, -0.9778f, -0.193592f },
	{ -0.080188f, -0.9778f, -0.193592f },
	{ -0.148169f, -0.9778f, -0.148169f },
	{ -0.148169f, -0.9778f, -0.148169f },
	{ -0.193591f, -0.9778f, -0.080188f },
	{ -0.193591f, -0.9778f, -0.080188f },
	{ -0.209542f, -0.9778f, 0 },
	{ -0.209542f, -0.9778f, 0 },
	{ -0.193592f, -0.9778f, 0.080188f },
	{ -0.193592f, -0.9778f, 0.080188f },
	{ -0.148169f, -0.9778f, 0.148169f },
	{ -0.148169f, -0.9778f, 0.148169f },
	{ -0.080188f, -0.9778f, 0.193591f },
	{ -0.080188f, -0.9778f, 0.193591f },
	{ 0, -0.9778f, 0.209542f },
	{ 0, -0.9778f, 0.209542f },
	{ 0.080188f, -0.9778f, 0.193592f },
	{ 0.080188f, -0.9778f, 0.193592f },
	{ 0.148169f, -0.9778f, 0.148169f },
	{ 0.148169f, -0.9778f, 0.148169f },
	{ 0.193591f, -0.9778f, 0.080188f },
	{ 0.193591f, -0.9778f, 0.080188f },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 },
	{ 0 }
};

NJS_MODEL_SADX attach_00193A1C = { vertex_0019359C, normal_001937DC, LengthOfArray<Sint32>(vertex_0019359C), meshlist_00193584, matlist_00193270, LengthOfArray<Uint16>(meshlist_00193584), LengthOfArray<Uint16>(matlist_00193270),{ 0, 0.07029f, 0 }, 7.998793f, NULL };

NJS_OBJECT object_00193A44 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_00193A1C, 0, 0, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

#pragma warning(pop)
