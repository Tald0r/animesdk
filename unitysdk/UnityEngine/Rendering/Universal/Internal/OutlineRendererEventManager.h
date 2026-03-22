#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace UnityEngine::Rendering { class CommandBuffer; }
namespace UnityEngine::Rendering::Universal::Internal { class IOutlineObjectRenderer; }

#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_REGISTER_OFFSET UNITYSDK_OFFSET(0x17BF33D0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x17BF34C0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET UNITYSDK_OFFSET(0x17BF35F0)
#define UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_UNREGISTER_OFFSET UNITYSDK_OFFSET(0x17BF3440)

namespace UnityEngine::Rendering::Universal::Internal
{
	inline static constexpr unsigned int OutlineRendererEventManager_TypeDefinitionIndex = 28915;

	class OutlineRendererEventManager : public ::System::Object
	{
	public:
		static ::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer** StaticGet_currentOutlineRenderer()
		{
			return (::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer**)Il2CppClass::FromTypeDefinitionIndex(OutlineRendererEventManager_TypeDefinitionIndex)->GetStaticField(0x22250);
		}

		static ::System::Void Register(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_REGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Void Unregister(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer* outlineObjectRenderer)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::Universal::Internal::IOutlineObjectRenderer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_UNREGISTER_OFFSET))(outlineObjectRenderer);
		}

		static ::System::Void SetupScreenSpaceOutline(::System::Boolean& outlineActive, ::System::Boolean& outlineBeforeTransparent)
		{
			return ((::System::Void(*)(::System::Boolean&, ::System::Boolean&))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_SETUPSCREENSPACEOUTLINE_OFFSET))(outlineActive, outlineBeforeTransparent);
		}

		static ::System::Void TryBlitScreenSpaceOutline(::UnityEngine::Rendering::CommandBuffer* cmd)
		{
			return ((::System::Void(*)(::UnityEngine::Rendering::CommandBuffer*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_INTERNAL_OUTLINERENDEREREVENTMANAGER_TRYBLITSCREENSPACEOUTLINE_OFFSET))(cmd);
		}
	};
}
