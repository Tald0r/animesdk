#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }

#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG_MARKTEXTURECURVEASDIRTY_OFFSET UNITYSDK_OFFSET(0x16FA4320)
#define UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG__CTOR_OFFSET UNITYSDK_OFFSET(0x16FA44D0)

namespace UnityEngine::Rendering::Universal
{
	inline static constexpr unsigned int RTXGIConfig_TypeDefinitionIndex = 28515;

	class RTXGIConfig : public ::System::Object
	{
	public:
		::System::Single Boost; // 0x10
		::System::Single MultibounceScale; // 0x14
		::System::Single MultiBounceFarDistScale; // 0x18
		::System::Single MultiBouncelndoorScale; // 0x1C
		::System::Single MultiBounceScaleMaxDist; // 0x20
		::System::Single LightMapBoost; // 0x24
		::System::Single SkyDiffuseScale; // 0x28
		::System::Single SkySpecularScale; // 0x2C
		::UnityEngine::Vector4 rtxlift; // 0x30
		::UnityEngine::Vector4 rtxgamma; // 0x40
		::UnityEngine::Vector4 rtxgain; // 0x50
		::System::Single redOutRedIn; // 0x60
		::System::Single redOutGreenIn; // 0x64
		::System::Single redOutBlueIn; // 0x68
		::System::Single greenOutRedIn; // 0x6C
		::System::Single greenOutGreenIn; // 0x70
		::System::Single greenOutBlueIn; // 0x74
		::System::Single blueOutRedIn; // 0x78
		::System::Single blueOutGreenIn; // 0x7C
		::System::Single blueOutBlueIn; // 0x80
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x88
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x90
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x98
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0xA0
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0xA8
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0xB0
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0xB8
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0xC0
		::UnityEngine::Color colorFilter; // 0xC8
		::System::Single postExposure; // 0xD8
		::System::Single contrast; // 0xDC
		::System::Single hueShift; // 0xE0
		::System::Single saturation; // 0xE4
		::System::Single desaturate; // 0xE8
		::UnityEngine::Texture* Lut; // 0xF0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG__CTOR_OFFSET))(this);
		}

		::System::Void MarkTextureCurveAsDirty(::System::Int32 curveId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_RENDERING_UNIVERSAL_RTXGICONFIG_MARKTEXTURECURVEASDIRTY_OFFSET))(this, curveId);
		}
	};
}
