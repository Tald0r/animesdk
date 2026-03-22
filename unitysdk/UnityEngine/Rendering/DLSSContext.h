#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/UnityEngine/Rendering/DLSSConstants.h"
#include "unitysdk/UnityEngine/Rendering/DLSSGQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/DLSSQualityMode.h"
#include "unitysdk/UnityEngine/Rendering/ReflexMode.h"
#include "unitysdk/UnityEngine/Rendering/RenderTargetIdentifier.h"

namespace UnityEngine::Rendering { class DLSSViewPort; }

#define UNITYENGINE_RENDERING_DLSSCONTEXT_DLSSSUPPORTED_OFFSET UNITYSDK_OFFSET(0x19DE2F30)
#define UNITYENGINE_RENDERING_DLSSCONTEXT_SET_VP_OFFSET UNITYSDK_OFFSET(0x8FA1F0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int DLSSContext_TypeDefinitionIndex = 6129;

	struct alignas(8) DLSSContext
	{
		::System::UInt64 handle; // 0x10
		::System::Int32 w; // 0x18
		::System::Int32 h; // 0x1C
		::UnityEngine::Rendering::DLSSQualityMode mode; // 0x20
		::UnityEngine::Rendering::DLSSGQualityMode frameGenMode; // 0x24
		::System::Int32 frameGenNum; // 0x28
		::UnityEngine::Rendering::ReflexMode reflexMode; // 0x2C
		::System::Int32 frameLimitUs; // 0x30
		::System::Single sharpness; // 0x34
		::System::Single preExposure; // 0x38
		::System::Single exposureScale; // 0x3C
		::System::Boolean colorBuffersHDR; // 0x40
		::System::Boolean indicatorInvertAxisX; // 0x41
		::System::Boolean indicatorInvertAxisY; // 0x42
		::System::Boolean useAutoExposure; // 0x43
		::System::Boolean useOffScreenUI; // 0x44
		::UnityEngine::Rendering::DLSSConstants constants; // 0x48
		::UnityEngine::Rendering::RenderTargetIdentifier colorIn; // 0x1F0
		::UnityEngine::Rendering::RenderTargetIdentifier colorOut; // 0x218
		::UnityEngine::Rendering::RenderTargetIdentifier depth; // 0x240
		::UnityEngine::Rendering::RenderTargetIdentifier motion; // 0x268
		::UnityEngine::Rendering::RenderTargetIdentifier ui; // 0x290

		static ::System::Boolean DLSSSupported()
		{
			return ((::System::Boolean(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSCONTEXT_DLSSSUPPORTED_OFFSET))();
		}

		::System::Void set_vp(::UnityEngine::Rendering::DLSSViewPort* value)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Rendering::DLSSViewPort*))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_DLSSCONTEXT_SET_VP_OFFSET))(this, value);
		}
	};
}
