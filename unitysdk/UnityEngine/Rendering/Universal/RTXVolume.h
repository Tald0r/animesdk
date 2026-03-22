#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTX_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class IntParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x16DC2960)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXVolume_TypeDefinitionIndex = 28681;

	class RTXVolume : public ::UnityEngine::NAPRenderPipeline0::RTX_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableRTXSubConfigs1; // 0xB0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* areaLightEnabled; // 0xB8
		::UnityEngine::NAPRenderPipeline0::IntParameter* pvSubstepNum; // 0xC0
		::UnityEngine::NAPRenderPipeline0::IntParameter* qualityPreset; // 0xC8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* rayBudget; // 0xD0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* resolutionScale; // 0xD8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* responseSpeed; // 0xE0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXVOLUME__CTOR_OFFSET))(this);
		}
	};
}
