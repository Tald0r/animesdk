#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/NapBloom_NativeSRP.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::Rendering::Universal { class BloomResolutionParameter; }
namespace UnityEngine::Rendering::Universal { class HQBloomModeParameter; }
namespace UnityEngine::Rendering::Universal { class PPQualityParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_NAPBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0x19B267D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int NapBloom_TypeDefinitionIndex = 28674;

	class NapBloom : public ::UnityEngine::NAPRenderPipeline0::NapBloom_NativeSRP
	{
	public:
		::UnityEngine::Rendering::Universal::HQBloomModeParameter* hqBloomMode; // 0x100
		::UnityEngine::Rendering::Universal::PPQualityParameter* hqUESampleQuality; // 0x108
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* hqUEBloomThreshold; // 0x110
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* hqUEBloomThresholdChar; // 0x118
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* hqUEBloomMaxThreshold; // 0x120
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* hqUEBloomMaxThresholdChar; // 0x128
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqUEBloomIntensity; // 0x130
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqUEBloomIntensityChar; // 0x138
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomSize6; // 0x140
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomSize5; // 0x148
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomSize4; // 0x150
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomSize3; // 0x158
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomSize2; // 0x160
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomSize1; // 0x168
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomTint6; // 0x170
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomTint5; // 0x178
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomTint4; // 0x180
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomTint3; // 0x188
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomTint2; // 0x190
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hqBloomTint1; // 0x198
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hQBloomIntensity; // 0x1A0
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* hQBloomThreshold; // 0x1A8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* hQBloomScatter; // 0x1B0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* hQBloomTint; // 0x1B8
		::UnityEngine::Rendering::Universal::BloomResolutionParameter* hqBloomResolution; // 0x1C0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* xBlurIntensity; // 0x1C8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* yBlurIntensity; // 0x1D0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useRealDownSample; // 0x1D8
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* blurRadius; // 0x1E0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* doBloomAfterTAA; // 0x1E8
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useSourceLumaMask; // 0x1F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_NAPBLOOM__CTOR_OFFSET))(this);
		}
	};
}
