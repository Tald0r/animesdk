#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_REGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x18A2AE90)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_UNREGISTERDEBUG_OFFSET UNITYSDK_OFFSET(0x18A2AED0)
#define UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS__CTOR_OFFSET UNITYSDK_OFFSET(0x18A24170)

namespace UnityEngine::Experimental::Rendering::RenderGraphModule
{
	inline static constexpr unsigned int RenderGraphDebugParams_TypeDefinitionIndex = 9496;

	class RenderGraphDebugParams : public ::System::Object
	{
	public:
		::System::Boolean logFrameInformation; // 0x10
		::System::Boolean logResources; // 0x11
		::System::Boolean clearRenderTargetsAtRelease; // 0x12
		::System::Boolean enableRenderGraph; // 0x13
		::System::Boolean unbindGlobalTextures; // 0x14
		::System::Boolean clearRenderTargetsAtCreation; // 0x15
		::System::Boolean tagResourceNamesWithRG; // 0x16

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS__CTOR_OFFSET))(this);
		}

		::System::Void RegisterDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_REGISTERDEBUG_OFFSET))(this);
		}

		::System::Void UnRegisterDebug()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_EXPERIMENTAL_RENDERING_RENDERGRAPHMODULE_RENDERGRAPHDEBUGPARAMS_UNREGISTERDEBUG_OFFSET))(this);
		}
	};
}
