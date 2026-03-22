#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LensFlareProfile_NativeSRP.h"

#define UNITYENGINE_RENDERING_LENSFLAREPROFILE__CTOR_OFFSET UNITYSDK_OFFSET(0x19B222C0)

namespace UnityEngine::Rendering
{
	inline static constexpr unsigned int LensFlareProfile_TypeDefinitionIndex = 28337;

	class LensFlareProfile : public ::UnityEngine::NAPRenderPipeline0::LensFlareProfile_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_LENSFLAREPROFILE__CTOR_OFFSET))(this);
		}
	};
}
