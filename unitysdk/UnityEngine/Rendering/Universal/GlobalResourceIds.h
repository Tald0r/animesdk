#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine { class Texture; }

#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPONSRPINIT_OFFSET UNITYSDK_OFFSET(0x17952B20)
#define UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPPERFRAME_OFFSET UNITYSDK_OFFSET(0x17952CA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int GlobalResourceIds_TypeDefinitionIndex = 28539;

	class GlobalResourceIds : public ::System::Object
	{
	public:
		static ::UnityEngine::Texture** StaticGet_WhiteTextureObj()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x20750);
		}
		static ::UnityEngine::Texture** StaticGet_BlackTextureObj()
		{
			return (::UnityEngine::Texture**)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x20758);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_RedTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x55E0);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_BlackTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5608);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_WhiteTextureID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5630);
		}
		static ::UnityEngine::Rendering::RenderTargetIdentifier* StaticGet_FSRLuminanceBiasLutID()
		{
			return (::UnityEngine::Rendering::RenderTargetIdentifier*)Il2CppClass::FromTypeDefinitionIndex(GlobalResourceIds_TypeDefinitionIndex)->GetStaticField(0x5658);
		}

		static ::System::Void SetupOnSRPInit()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPONSRPINIT_OFFSET))();
		}

		static ::System::Void SetupPerFrame()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_GLOBALRESOURCEIDS_SETUPPERFRAME_OFFSET))();
		}
	};
}
