#include <SADXModLoader.h>

//Complete

NJS_MATERIAL matlist_001C6A18[] = {
	{ { 0xE5B2B2B2 },{ 0xFFFFFFFF }, 6, 173, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001C6A2C[] = {
	25, 26, 0,
	23, 24, 0,
	27, 21, 0,
	22, 28, 0
};

Sint16 poly_001C6A44[] = {
	18, 13, 14, 3,
	20, 14, 15, 4,
	9, 8, 4, 6,
	30, 15, 16, 6,
	3, 2, 1, 7,
	17, 16, 5, 8,
	32, 5, 10, 9,
	29, 10, 11, 1,
	1, 9, 3, 4,
	31, 11, 12, 7,
	2, 13, 12, 19,
	26, 20, 22, 30,
	24, 19, 25, 18,
	21, 29, 23, 31,
	28, 17, 27, 32
};

NJS_TEX uv_001C6ABC[] = {
	{ 144, 110 },
	{ 125, 103 },
	{ 125, 129 },
	{ 144, 148 },
	{ 151, 129 },
	{ 125, 129 },
	{ 106, 148 },
	{ 125, 155 },
	{ 125, 129 },
	{ 106, 110 },
	{ 99, 129 },
	{ 125, 129 }
};

NJS_TEX uv_001C6AEC[] = {
	{ 214, 40 },
	{ 221, 93 },
	{ 162, 34 },
	{ 171, 81 },
	{ 125, 3 },
	{ 162, 34 },
	{ 83, 34 },
	{ 125, 60 },
	{ 78, 178 },
	{ 60, 129 },
	{ 125, 60 },
	{ 79, 79 },
	{ 36, 40 },
	{ 83, 34 },
	{ 29, 93 },
	{ 79, 79 },
	{ 171, 81 },
	{ 191, 128 },
	{ 124, 198 },
	{ 171, 177 },
	{ 0, 129 },
	{ 29, 93 },
	{ 30, 165 },
	{ 60, 129 },
	{ 36, 218 },
	{ 30, 165 },
	{ 87, 224 },
	{ 78, 178 },
	{ 125, 254 },
	{ 87, 224 },
	{ 161, 225 },
	{ 124, 198 },
	{ 124, 198 },
	{ 78, 178 },
	{ 171, 81 },
	{ 125, 60 },
	{ 214, 218 },
	{ 161, 225 },
	{ 222, 165 },
	{ 171, 177 },
	{ 191, 128 },
	{ 221, 93 },
	{ 222, 165 },
	{ 251, 129 },
	{ 125, 103 },
	{ 125, 3 },
	{ 106, 110 },
	{ 36, 40 },
	{ 151, 129 },
	{ 251, 129 },
	{ 144, 110 },
	{ 214, 40 },
	{ 125, 155 },
	{ 125, 254 },
	{ 144, 148 },
	{ 214, 218 },
	{ 99, 129 },
	{ 0, 129 },
	{ 106, 148 },
	{ 36, 218 }
};

NJS_MESHSET_SADX meshlist_001C6BDC[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_001C6A2C, NULL, NULL, NULL, uv_001C6ABC, NULL },
	{ NJD_MESHSET_4 | 0, 15, poly_001C6A44, NULL, NULL, NULL, uv_001C6AEC, NULL }
};

NJS_VECTOR vertex_001C6C0C[] = {
	{ -0.00001f, -26.8401f, 0 },
	{ -0.112484f, 2.848233f, -13.26712f },
	{ 12.71071f, 2.848233f, 0.12367f },
	{ 8.998732f, 2.848233f, 9.238411f },
	{ 0, 2.848233f, 13.28401f },
	{ -18.42868f, -1.438101f, -7.031789f },
	{ -8.998732f, 2.848233f, 9.688521f },
	{ 8.998732f, 2.848233f, -9.328653f },
	{ -12.59822f, 2.848233f, 0.011142f },
	{ -9.111216f, 2.848233f, -9.441182f },
	{ -7.311469f, -1.516476f, -18.4434f },
	{ 7.011433f, -1.438103f, -18.57314f },
	{ 18.70524f, -1.516476f, -6.957437f },
	{ 18.57314f, -1.438103f, 7.011433f },
	{ 7.086501f, -1.39637f, 18.46568f },
	{ -8.098f, -1.516476f, 18.36307f },
	{ -18.59118f, -1.39637f, 6.957437f },
	{ -24.3f, -6.243334f, 0.000001f },
	{ 17.18269f, -6.243337f, 17.18269f },
	{ 24.3f, -6.243337f, 0 },
	{ 0.000001f, -6.243337f, 24.3f },
	{ 0, -24.52234f, -5.093904f },
	{ -3.601933f, -24.52234f, 3.601934f },
	{ 3.601933f, -24.52234f, -3.601934f },
	{ 5.093904f, -24.52234f, 0 },
	{ 3.601934f, -24.52234f, 3.601933f },
	{ 0, -24.52234f, 5.093904f },
	{ -3.601934f, -24.52234f, -3.601933f },
	{ -5.093904f, -24.52234f, 0 },
	{ 0, -6.243334f, -24.3f },
	{ -17.18269f, -6.243335f, 17.18269f },
	{ 17.18269f, -6.243335f, -17.18269f },
	{ -17.18269f, -6.243334f, -17.18269f }
};

NJS_VECTOR normal_001C6D98[] = {
	{ 0, -1, 0 },
	{ -0.004475f, 0.9608909f, -0.27689f },
	{ 0.260114f, 0.965553f, -0.006892f },
	{ 0.202626f, 0.959087f, 0.197724f },
	{ -0.003095f, 0.958515f, 0.285026f },
	{ -0.55001f, 0.803475f, -0.227854f },
	{ -0.208147f, 0.958149f, 0.196534f },
	{ 0.201609f, 0.957415f, -0.206667f },
	{ -0.243156f, 0.96992f, -0.011391f },
	{ -0.213358f, 0.955927f, -0.201696f },
	{ -0.241593f, 0.793856f, -0.558055f },
	{ 0.213997f, 0.796461f, -0.5655569f },
	{ 0.558665f, 0.797545f, -0.227629f },
	{ 0.5629309f, 0.800973f, 0.20384f },
	{ 0.221399f, 0.798227f, 0.560192f },
	{ -0.25374f, 0.79554f, 0.55021f },
	{ -0.552343f, 0.811179f, 0.192106f },
	{ -0.9621519f, 0.16402f, -0.217625f },
	{ 0.8169219f, 0.179258f, 0.548184f },
	{ 0.973009f, 0.148205f, 0.176887f },
	{ -0.190259f, 0.160627f, 0.968504f },
	{ 0.102582f, -0.80564f, -0.583457f },
	{ -0.34003f, -0.80564f, 0.485103f },
	{ 0.340029f, -0.80564f, -0.485103f },
	{ 0.583457f, -0.80564f, 0.102582f },
	{ 0.485103f, -0.80564f, 0.340029f },
	{ -0.102582f, -0.80564f, 0.583457f },
	{ -0.485103f, -0.80564f, -0.34003f },
	{ -0.583457f, -0.80564f, -0.102582f },
	{ 0.180382f, 0.147883f, -0.972416f },
	{ -0.5666209f, 0.170292f, 0.8061889f },
	{ 0.549491f, 0.183438f, -0.815114f },
	{ -0.822803f, 0.164978f, -0.543855f }
};

NJS_MODEL_SADX attach_001C6F24 = { vertex_001C6C0C, normal_001C6D98, LengthOfArray<Sint32>(vertex_001C6C0C), meshlist_001C6BDC, matlist_001C6A18, LengthOfArray<Uint16>(meshlist_001C6BDC), LengthOfArray<Uint16>(matlist_001C6A18),{ 0, -11.99593f, 0 }, 34.36539f, NULL };

NJS_OBJECT object_001C6F4C = { NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001C6F24, 0, 26.81723f, 0, 0, 0, 0, 1, 1, 1, NULL, NULL };

NJS_MATERIAL matlist_001C6F80[] = {
	{ { 0xE5B2B2B2 },{ 0xFFFFFFFF }, 6, 173, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001C6F94[] = {
	17, 15, 3,
	19, 12, 1,
	18, 6, 15,
	19, 2, 6,
	20, 5, 2,
	21, 8, 5,
	18, 0, 12,
	22, 11, 8,
	23, 14, 11,
	9, 3, 14,
	17, 16, 0,
	9, 13, 16,
	23, 10, 13,
	22, 7, 10,
	20, 1, 4,
	21, 4, 7
};

NJS_TEX uv_001C6FF4[] = {
	{ 89, 225 },
	{ 125, 254 },
	{ 36, 218 },
	{ 220, 167 },
	{ 174, 176 },
	{ 194, 130 },
	{ 161, 224 },
	{ 214, 218 },
	{ 125, 254 },
	{ 220, 167 },
	{ 251, 129 },
	{ 214, 218 },
	{ 221, 93 },
	{ 214, 40 },
	{ 251, 129 },
	{ 161, 32 },
	{ 125, 3 },
	{ 214, 40 },
	{ 161, 224 },
	{ 125, 194 },
	{ 174, 176 },
	{ 89, 33 },
	{ 36, 40 },
	{ 125, 3 },
	{ 30, 92 },
	{ 0, 129 },
	{ 36, 40 },
	{ 30, 171 },
	{ 36, 218 },
	{ 0, 129 },
	{ 89, 225 },
	{ 75, 175 },
	{ 125, 194 },
	{ 30, 171 },
	{ 56, 129 },
	{ 75, 175 },
	{ 30, 92 },
	{ 77, 83 },
	{ 56, 129 },
	{ 89, 33 },
	{ 124, 63 },
	{ 77, 83 },
	{ 221, 93 },
	{ 194, 130 },
	{ 173, 83 },
	{ 161, 32 },
	{ 173, 83 },
	{ 124, 63 }
};

NJS_MESHSET_SADX meshlist_001C70B4[] = {
	{ NJD_MESHSET_3 | 0, 16, poly_001C6F94, NULL, NULL, NULL, uv_001C6FF4, NULL }
};

NJS_VECTOR vertex_001C70CC[] = {
	{ -0.011521f, 13.72343f, -12.59822f },
	{ 13.26674f, 13.72343f, -0.112485f },
	{ 24.29962f, 4.631864f, -0.00002f },
	{ -17.18307f, 4.631864f, -17.18269f },
	{ 9.328274f, 13.72343f, 8.998733f },
	{ 17.18232f, 4.631863f, 17.18269f },
	{ 17.18109f, 4.637788f, -17.18269f },
	{ -0.12405f, 13.72342f, 12.71071f },
	{ -0.000379f, 4.631859f, 24.3f },
	{ -18.36345f, 9.358721f, -8.098001f },
	{ -9.238791f, 13.72342f, 8.998731f },
	{ -17.18307f, 4.631861f, 17.18269f },
	{ 9.440803f, 13.72343f, -9.111217f },
	{ -13.28438f, 13.72342f, 0.000001f },
	{ -24.30037f, 4.631862f, 0.000004f },
	{ -0.001599f, 4.631857f, -24.3f },
	{ -9.688901f, 13.72342f, -8.998733f },
	{ -6.957815f, 9.47883f, -18.59118f },
	{ 7.031409f, 9.437101f, -18.42868f },
	{ 18.44016f, 9.365084f, -7.31147f },
	{ 18.57276f, 9.437098f, 7.011434f },
	{ 6.957057f, 9.358721f, 18.70524f },
	{ -7.011814f, 9.437094f, 18.57314f },
	{ -18.46606f, 9.478828f, 7.086501f }
};

NJS_VECTOR normal_001C71EC[] = {
	{ -0.000343f, 0.893838f, -0.44839f },
	{ 0.461437f, 0.887173f, 0.00061f },
	{ 0.8602099f, 0.5098799f, 0.007834f },
	{ -0.626288f, 0.491249f, -0.605341f },
	{ 0.314716f, 0.893099f, 0.321446f },
	{ 0.614197f, 0.502194f, 0.608739f },
	{ 0.605679f, 0.518979f, -0.603169f },
	{ -0.003834f, 0.8958679f, 0.444304f },
	{ -0.000507f, 0.502157f, 0.864776f },
	{ -0.734185f, 0.608147f, -0.301876f },
	{ -0.315071f, 0.892292f, 0.323334f },
	{ -0.610265f, 0.509931f, 0.606257f },
	{ 0.318835f, 0.889809f, -0.326473f },
	{ -0.45823f, 0.888648f, 0.018166f },
	{ -0.867288f, 0.497458f, 0.018615f },
	{ -0.004056f, 0.514132f, -0.8577009f },
	{ -0.326232f, 0.893985f, -0.307187f },
	{ -0.290215f, 0.634892f, -0.716022f },
	{ 0.28689f, 0.64353f, -0.709622f },
	{ 0.71705f, 0.629805f, -0.298639f },
	{ 0.716429f, 0.630096f, 0.299514f },
	{ 0.29575f, 0.625895f, 0.721656f },
	{ -0.296092f, 0.63074f, 0.717284f },
	{ -0.711855f, 0.634913f, 0.300245f }
};

NJS_MODEL_SADX attach_001C730C = { vertex_001C70CC, normal_001C71EC, LengthOfArray<Sint32>(vertex_001C70CC), meshlist_001C70B4, matlist_001C6F80, LengthOfArray<Uint16>(meshlist_001C70B4), LengthOfArray<Uint16>(matlist_001C6F80),{ -0.000376f, 9.177645f, 0 }, 34.36539f, NULL };

NJS_OBJECT object_001C7334 = { NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001C730C, 0, 15.94204f, 0, 0x3FFE, 0x4003, 0x3FFE, 1, 1, 1, NULL, &object_001C6F4C };

NJS_MATERIAL matlist_001C7368[] = {
	{ { 0xE5B2B2B2 },{ 0xFFFFFFFF }, 6, 173, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_USE_ENV | NJD_FLAG_DOUBLE_SIDE | NJD_FLAG_USE_FLAT | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001C737C[] = {
	16, 14, 0,
	13, 12, 0,
	10, 0, 11,
	0, 9, 15
};

Sint16 poly_001C7394[] = {
	14, 2, 13, 8,
	12, 4, 11, 1,
	10, 3, 9, 5,
	15, 6, 16, 7
};

NJS_TEX uv_001C73B4[] = {
	{ 99, 129 },
	{ 106, 148 },
	{ 125, 129 },
	{ 125, 155 },
	{ 144, 148 },
	{ 125, 129 },
	{ 144, 110 },
	{ 125, 129 },
	{ 151, 129 },
	{ 125, 129 },
	{ 125, 103 },
	{ 106, 110 }
};

NJS_TEX uv_001C73E4[] = {
	{ 106, 148 },
	{ 36, 218 },
	{ 125, 155 },
	{ 125, 254 },
	{ 144, 148 },
	{ 214, 218 },
	{ 151, 129 },
	{ 251, 129 },
	{ 144, 110 },
	{ 214, 40 },
	{ 125, 103 },
	{ 125, 3 },
	{ 106, 110 },
	{ 36, 40 },
	{ 99, 129 },
	{ 0, 129 }
};

NJS_MESHSET_SADX meshlist_001C7424[] = {
	{ NJD_MESHSET_3 | 0, 4, poly_001C737C, NULL, NULL, NULL, uv_001C73B4, NULL },
	{ NJD_MESHSET_4 | 0, 4, poly_001C7394, NULL, NULL, NULL, uv_001C73E4, NULL }
};

NJS_VECTOR vertex_001C7454[] = {
	{ 0, -0.022872f, -0.00001f },
	{ 24.3f, 20.57389f, 0.000001f },
	{ -17.18269f, 20.57389f, -17.18269f },
	{ 17.18269f, 20.57389f, 17.18269f },
	{ 17.18269f, 20.57389f, -17.18269f },
	{ 0, 20.57389f, 24.3f },
	{ -17.18269f, 20.57389f, 17.18269f },
	{ -24.3f, 20.57389f, 0.000001f },
	{ 0, 20.57389f, -24.3f },
	{ 0, 2.294882f, 5.093904f },
	{ 3.601933f, 2.294884f, 3.601933f },
	{ 5.093904f, 2.294884f, 0 },
	{ 3.601933f, 2.294884f, -3.601933f },
	{ 0, 2.294884f, -5.093904f },
	{ -3.601932f, 2.294884f, -3.601933f },
	{ -3.601933f, 2.294884f, 3.601933f },
	{ -5.093904f, 2.294884f, 0 }
};

NJS_VECTOR normal_001C7520[] = {
	{ 0, -1, 0 },
	{ 0.920728f, 0.390206f, 0 },
	{ -0.651053f, 0.390206f, -0.651053f },
	{ 0.651053f, 0.390206f, 0.651053f },
	{ 0.651053f, 0.390206f, -0.651053f },
	{ 0, 0.390206f, 0.920728f },
	{ -0.651053f, 0.390206f, 0.651053f },
	{ -0.920728f, 0.390206f, 0 },
	{ 0, 0.390206f, -0.920728f },
	{ 0, -0.842928f, 0.538027f },
	{ 0.380442f, -0.842928f, 0.380442f },
	{ 0.538027f, -0.842928f, 0 },
	{ 0.380442f, -0.842928f, -0.380442f },
	{ 0, -0.842928f, -0.538027f },
	{ -0.380442f, -0.842928f, -0.380442f },
	{ -0.380442f, -0.842928f, 0.380442f },
	{ -0.538027f, -0.842928f, 0 }
};

NJS_MODEL_SADX attach_001C75EC = { vertex_001C7454, normal_001C7520, LengthOfArray<Sint32>(vertex_001C7454), meshlist_001C7424, matlist_001C7368, LengthOfArray<Uint16>(meshlist_001C7424), LengthOfArray<Uint16>(matlist_001C7368),{ 0, 10.27551f, 0 }, 34.36539f, NULL };

NJS_OBJECT object_001C7614 = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_SCL | NJD_EVAL_BREAK, &attach_001C75EC, 0, 0, 0, 0, 0x8000, 0, 1, 1, 1, NULL, &object_001C7334 };

NJS_MATERIAL matlist_001C7648[] = {
	{ { 0x00B2B2B2 },{ 0xFFFFFFFF }, 11, 173, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_USE_ALPHA | NJD_DA_INV_SRC | NJD_SA_SRC }
};

Sint16 poly_001C765C[] = {
	0, 1, 2
};

NJS_MESHSET_SADX meshlist_001C7664[] = {
	{ NJD_MESHSET_3 | 0, 1, poly_001C765C, NULL, NULL, NULL, NULL, NULL }
};

NJS_VECTOR vertex_001C767C[] = {
	{ -1.215f, 17.03991f, -1.215f },
	{ -1.215f, 17.03991f, 1.215f },
	{ 1.215f, 17.03991f, 1.215f }
};

NJS_VECTOR normal_001C76A0[] = {
	{ 0, 1, 0 },
	{ 0, 1, 0 },
	{ 0, 1, 0 }
};

NJS_MODEL_SADX attach_001C76C4 = { vertex_001C767C, normal_001C76A0, LengthOfArray<Sint32>(vertex_001C767C), meshlist_001C7664, matlist_001C7648, LengthOfArray<Uint16>(meshlist_001C7664), LengthOfArray<Uint16>(matlist_001C7648),{ 0, 17.03991f, 0 }, 1.71827f, NULL };

NJS_OBJECT object_001C76EC = { NJD_EVAL_UNIT_POS | NJD_EVAL_UNIT_ANG | NJD_EVAL_UNIT_SCL, &attach_001C76C4, 0, 0, 0, 0, 0, 0, 1, 1, 1, &object_001C7614, NULL };

//Glow

NJS_MATERIAL matlist_0007C334[] = {
	{ { 0x80B2B2B2 },{ 0xFFFFFFFF }, 11, 60, NJD_D_100 | NJD_FILTER_BILINEAR | NJD_FLAG_CLAMP_V | NJD_FLAG_CLAMP_U | NJD_FLAG_IGNORE_SPECULAR | NJD_FLAG_USE_ALPHA | NJD_FLAG_USE_TEXTURE | NJD_FLAG_IGNORE_LIGHT | NJD_DA_ONE | NJD_SA_SRC }
};

Sint16 poly_0007C348[] = {
	0, 1, 3, 2
};

NJS_TEX uv_0007C350[] = {
	{ 0 },
	{ 0, 255 },
	{ 255, 0 },
	{ 255, 255 }
};

NJS_MESHSET_SADX meshlist_0007C36C[] = {
	{ NJD_MESHSET_4 | 0, 1, poly_0007C348, NULL, NULL, NULL, uv_0007C350, NULL }
};

NJS_VECTOR vertex_0007C388[] = {
	{ -10, 10, 0 },
	{ -10, -10, 0 },
	{ 10, -10, 0 },
	{ 10, 10, 0 }
};

NJS_VECTOR normal_0007C360[] = {
	{ 0, 1, 0 },
	{ 0.0000000000000000000000000000000000000001147944f, 0.00000000000000000000000000002677449f, 0 },
	{ 0, 0, 0.00000000000000000000000000002677452f },
	{ 0, -10, 10 }
};

NJS_MODEL_SADX attach_0007C3B8 = { vertex_0007C388, normal_0007C360, LengthOfArray<Sint32>(vertex_0007C388), meshlist_0007C36C, matlist_0007C334, LengthOfArray<Uint16>(meshlist_0007C36C), LengthOfArray<Uint16>(matlist_0007C334),{ 0 }, 14.14214f, NULL };