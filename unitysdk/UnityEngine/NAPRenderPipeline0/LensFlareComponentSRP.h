#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/LensFlareComponentSRP_NativeSRP.h"

#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_ONDISABLE_OFFSET UNITYSDK_OFFSET(0x19322E60)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_ONENABLE_OFFSET UNITYSDK_OFFSET(0x19322C90)
#define UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP__CTOR_OFFSET UNITYSDK_OFFSET(0x19322EE0)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int LensFlareComponentSRP_TypeDefinitionIndex = 28300;

	class LensFlareComponentSRP : public ::UnityEngine::NAPRenderPipeline0::LensFlareComponentSRP_NativeSRP
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP__CTOR_OFFSET))(this);
		}

		::System::Void OnEnable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_ONENABLE_OFFSET))(this);
		}

		::System::Void OnDisable()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_LENSFLARECOMPONENTSRP_ONDISABLE_OFFSET))(this);
		}
	};
}
