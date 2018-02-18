#pragma once

#include <stdlib.h>
#include <stdio.h>
#include <string>
DataPointer(HWND, WindowHandle, 0x03D0FD30);

extern std::string EnableSETFixes;
void FixMRBase_Apply(const char *path, const HelperFunctions &helperFunctions);
void DisableSADXWaterFog();
void Branding_Init(const char *path, const HelperFunctions &helperFunctions);
void Branding_OnFrame();
void ADV00_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV00_OnFrame();
void ADV01_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV01_OnFrame();
void ADV02_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV02_OnFrame();
void ADV03_Init(const char *path, const HelperFunctions &helperFunctions);
void ADV03_OnFrame();
void Bosses_Init(const char *path, const HelperFunctions &helperFunctions);
void Bosses_OnFrame();
void EmeraldCoast_Init(const char *path, const HelperFunctions &helperFunctions);
void EmeraldCoast_OnFrame();
void WindyValley_Init(const char *path, const HelperFunctions &helperFunctions);
void WindyValley_OnFrame();
void TwinklePark_Init(const char *path, const HelperFunctions &helperFunctions);
void TwinklePark_OnFrame();
void SpeedHighway_Init(const char *path, const HelperFunctions &helperFunctions);
void SpeedHighway_OnFrame();
void RedMountain_Init(const char *path, const HelperFunctions &helperFunctions);
void RedMountain_OnFrame();
void SkyDeck_Init(const char *path, const HelperFunctions &helperFunctions);
void SkyDeck_OnFrame();
void LostWorld_Init(const char *path, const HelperFunctions &helperFunctions);
void LostWorld_OnFrame();
void IceCap_Init(const char *path, const HelperFunctions &helperFunctions);
void IceCap_OnFrame();
void Casinopolis_Init(const char *path, const HelperFunctions &helperFunctions);
void Casinopolis_OnFrame();
void FinalEgg_Init(const char *path, const HelperFunctions &helperFunctions);
void FinalEgg_OnFrame();
void HotShelter_Init(const char *path, const HelperFunctions &helperFunctions);
void HotShelter_OnFrame();
void Subgames_Init(const char *path, const HelperFunctions &helperFunctions);
//void Subgames_OnFrame();
void ChaoGardens_Init(const char *path, const HelperFunctions &helperFunctions);
void ChaoGardens_OnFrame();
void General_Init(const char *path, const HelperFunctions &helperFunctions);
void General_OnFrame();

bool ForceWhiteDiffuse1(NJS_MATERIAL* material, Uint32 flags);
bool ForceWhiteDiffuse3(NJS_MATERIAL* material, Uint32 flags);
bool ForceWhiteDiffuse3_Night(NJS_MATERIAL* material, Uint32 flags);
bool ForceWhiteDiffuse3Specular1(NJS_MATERIAL* material, Uint32 flags);
bool NPCModelsFunction(NJS_MATERIAL* material, Uint32 flags);
bool ChaosPuddleFunc(NJS_MATERIAL* material, Uint32 flags);
bool Chaos2Function(NJS_MATERIAL* material, Uint32 flags);
bool RemoveMaterialColors(NJS_MATERIAL* material, Uint32 flags);

bool ForceDiffuse0Specular0(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse0Specular1(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse0Specular0or1(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse2Specular2(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse2Specular3(NJS_MATERIAL* material, Uint32 flags);
bool ForceDiffuse4Specular5(NJS_MATERIAL* material, Uint32 flags);

#define ReplacePVM(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "_DC.PVM");
#define ReplacePVR(a) helperFunctions.ReplaceFile("system\\" a ".PVR", "system\\" a "_DC.PVR");
#define ReplaceBIN(a,b) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" b ".BIN");
#define ReplaceBIN_DC(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_DC.BIN");
#define AddSETFix(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_S.BIN");
#define AddSETFix_Extra(a) helperFunctions.ReplaceFile("system\\" a ".BIN", "system\\" a "_E.BIN");
#define ReplacePVMX_SADXStyleWater(a) helperFunctions.ReplaceFile("system\\" a ".PVM", "system\\" a "W.PVM");