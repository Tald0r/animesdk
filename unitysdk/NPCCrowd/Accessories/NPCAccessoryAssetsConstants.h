#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace System { class String; }

#define NPCCROWD_ACCESSORIES_NPCACCESSORYASSETSCONSTANTS__CCTOR_OFFSET UNITYSDK_OFFSET(0x6B4E560)

namespace NPCCrowd::Accessories
{
	inline static constexpr unsigned int NPCAccessoryAssetsConstants_TypeDefinitionIndex = 62536;

	class NPCAccessoryAssetsConstants : public ::System::Object
	{
	public:
		static ::System::String** StaticGet_MESH_ASSETS_PACKED_DATA_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x392F0);
		}
		static ::System::String** StaticGet_NPC_ACCESSORY_MAP_CONFIG_PATH()
		{
			return (::System::String**)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0x392F8);
		}
		static ::UnityEngine::Vector3* StaticGet_CULL_OFFSET()
		{
			return (::UnityEngine::Vector3*)Il2CppClass::FromTypeDefinitionIndex(NPCAccessoryAssetsConstants_TypeDefinitionIndex)->GetStaticField(0xE2E0);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + NPCCROWD_ACCESSORIES_NPCACCESSORYASSETSCONSTANTS__CCTOR_OFFSET))();
		}
	};
}
