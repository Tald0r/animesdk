#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYASSETSCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x7800E00)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAssetsConstants_TypeDefinitionIndex = 50908;

	class NPCAccessoryAssetsConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MESH_ASSETS_PACKED_DATA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x3BE60);
		}
		static ::System::String** StaticGet_NPC_ACCESSORY_MAP_CONFIG_SPLIT_ROOT_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x3BE68);
		}
		static ::System::String** StaticGet_NPC_ACCESSORY_MAP_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x3BE70);
		}
		static ::UnityEngine::Vector3* StaticGet_CULL_OFFSET()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xE800);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYASSETSCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
