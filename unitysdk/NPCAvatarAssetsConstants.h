#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NapMaterialProperty.h"
#include "unitysdk/System/Object.h"

namespace System { class String; }

#define NPCAVATARASSETSCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x742EF30)

inline static constexpr unsigned int NPCAvatarAssetsConstants_TypeDefinitionIndex = 40056;

class NPCAvatarAssetsConstants : public ::System::Object
{
public:
	static ::System::String** StaticGet_NPC_PREFAB_JSON_SCENE_CONFIG_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305C0);
	}
	static ::System::String** StaticGet_NPC_PART_OVERRIDE_INFO_JSON_DATA_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305C8);
	}
	static ::System::String** StaticGet_NPC_ACCITEM_OVERRIDE_INFO_JSON_DATA_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305D0);
	}
	static ::System::String** StaticGet_NPC_INLEVEL_PREFAB_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305D8);
	}
	static ::System::String** StaticGet_NPC_STANDART_DEVICE_NUMBER_PLATE_CFG_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305E0);
	}
	static ::System::String** StaticGet_Name_outlineColor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305E8);
	}
	static ::System::String** StaticGet_NPC_Accessory_Assets_FORMAT()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305F0);
	}
	static ::System::String** StaticGet_Name_rimGlowLightColor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x305F8);
	}
	static ::System::String** StaticGet_Name_rimGlowShadowColor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30600);
	}
	static ::System::String** StaticGet_Name_gChannelColorPrecomputed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30608);
	}
	static ::System::String** StaticGet_MESH_ASSETS_PACKED_DATA_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30610);
	}
	static ::System::String** StaticGet_Name_aChannelColorPrecomputed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30618);
	}
	static ::System::String** StaticGet_NPC_PREFAB_RANDOM_DATA_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30620);
	}
	static ::System::String** StaticGet_NPC_CINEMA_PREFAB_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30628);
	}
	static ::System::String** StaticGet_NPC_GALGAME_PREFAB_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30630);
	}
	static ::System::String** StaticGet_Name_specularColor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30638);
	}
	static ::System::String** StaticGet_NPC_PRELOAD_TAG_ALL()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30640);
	}
	static ::System::String** StaticGet_Name_shadowColor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30648);
	}
	static ::System::String** StaticGet_NPC_PREFAB_JSON_DATA_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30650);
	}
	static ::System::String** StaticGet_Name_rChannelColorPrecomputed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30658);
	}
	static ::System::String** StaticGet_Name_shallowColor()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30660);
	}
	static ::System::String** StaticGet_EMPTY_NPC_GO_PATH()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30668);
	}
	static ::System::String** StaticGet_NPC_Avatar_Assets_FORMAT()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30670);
	}
	static ::System::String** StaticGet_Name_bChannelColorPrecomputed()
	{
		return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x30678);
	}
	static ::NapMaterialProperty* StaticGet_Hash_shadowColor()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB910);
	}
	static ::NapMaterialProperty* StaticGet_Hash_rimGlowLightColor()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB92C);
	}
	static ::NapMaterialProperty* StaticGet_Hash_rimGlowShadowColor()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB948);
	}
	static ::System::Int32* StaticGet_INVALID_ID()
	{
		return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB964);
	}
	static ::NapMaterialProperty* StaticGet_Hash_shallowColor()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB968);
	}
	static ::NapMaterialProperty* StaticGet_Hash_rChannelColorPrecomputed()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB984);
	}
	static ::NapMaterialProperty* StaticGet_Hash_bChannelColorPrecomputed()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB9A0);
	}
	static ::NapMaterialProperty* StaticGet_Hash_aChannelColorPrecomputed()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB9BC);
	}
	static ::NapMaterialProperty* StaticGet_Hash_outlineColor()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB9D8);
	}
	static ::NapMaterialProperty* StaticGet_Hash_gChannelColorPrecomputed()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xB9F4);
	}
	static ::NapMaterialProperty* StaticGet_Hash_specularColor()
	{
		return (::NapMaterialProperty*)Il2CppClass::FromTypeDefinitionIndex(NPCAvatarAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xBA10);
	}

	static ::System::Void _cctor()
	{
		return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCAVATARASSETSCONSTANTS__CCTOR_OFFSET))();
	}
};
