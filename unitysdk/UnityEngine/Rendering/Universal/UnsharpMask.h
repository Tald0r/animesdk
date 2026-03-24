#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/UnsharpMask_NativeSRP.h"

#define UNITYENGINE_RENDERING_UNIVERSAL_UNSHARPMASK__CTOR_OFFSET UNITYSDK_OFFSET(0x18A033C0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int UnsharpMask_TypeDefinitionIndex = 29360;

	class UnsharpMask : public ::UnityEngine::NAPRenderPipeline0::UnsharpMask_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_UNSHARPMASK__CTOR_OFFSET))(this);
		}
	};
}
