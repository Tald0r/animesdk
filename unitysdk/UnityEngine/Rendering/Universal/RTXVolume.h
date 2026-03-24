#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/RTX_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class IntParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXVOLUME__CTOR_OFFSET UNITYSDK_OFFSET(0x1742ACA0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXVolume_TypeDefinitionIndex = 29624;

	class RTXVolume : public ::UnityEngine::NAPRenderPipeline0::RTX_NativeSRP
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enableRTXSubConfigs1; // 0x160
		::UnityEngine::NAPRenderPipeline0::BoolParameter* areaLightEnabled; // 0x168
		::UnityEngine::NAPRenderPipeline0::IntParameter* pvSubstepNum; // 0x170
		::UnityEngine::NAPRenderPipeline0::IntParameter* qualityPreset; // 0x178
		::UnityEngine::NAPRenderPipeline0::FloatParameter* rayBudget; // 0x180
		::UnityEngine::NAPRenderPipeline0::FloatParameter* resolutionScale; // 0x188
		::UnityEngine::NAPRenderPipeline0::FloatParameter* responseSpeed; // 0x190
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hueExcludeMin; // 0x198
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hueExcludeMax; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hueExcludeFade; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hitHueExcludeMin; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hitHueExcludeMax; // 0x1B8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* hitHueExcludeFade; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedChromaBoost; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedHueSimThreshold; // 0x1D0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedSatSimThreshold; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* colorBleedValSimThreshold; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* dirBiasStrength; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::FloatParameter* bandBiasPower; // 0x1F0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* upSuppressStrength; // 0x1F8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* inverseBentBiasEnabled; // 0x200
		::UnityEngine::NAPRenderPipeline0::FloatParameter* inverseBentBiasStrength; // 0x208
		::UnityEngine::NAPRenderPipeline0::BoolParameter* screenSteerEnabled; // 0x210
		::UnityEngine::NAPRenderPipeline0::FloatParameter* screenSteerStrength; // 0x218
		::UnityEngine::NAPRenderPipeline0::BoolParameter* distWeightEnabled; // 0x220
		::UnityEngine::NAPRenderPipeline0::FloatParameter* distWeightExp; // 0x228
		::UnityEngine::NAPRenderPipeline0::FloatParameter* restirSatWeight; // 0x230
		::UnityEngine::NAPRenderPipeline0::FloatParameter* historySatWeight; // 0x238
		::UnityEngine::NAPRenderPipeline0::FloatParameter* cacheSatInjectScale; // 0x240
		::UnityEngine::NAPRenderPipeline0::FloatParameter* thresholdRelax; // 0x248

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXVOLUME__CTOR_OFFSET))(this);
		}
	};
}
