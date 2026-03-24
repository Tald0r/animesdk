#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"

namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector3Parameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x19C3CB50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19C3CA10)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x19C3CA40)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19C3CA50)
#define UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x19C3C090)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int RTX_NativeSRP_TypeDefinitionIndex = 6089;

	class RTX_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enabled; // 0x38
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* boost; // 0x40
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* specularBoost; // 0x48
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skyDiffuseScale; // 0x50
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* skySpecularScale; // 0x58
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* splitSpecThreshold; // 0x60
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* microAOStrength; // 0x68
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceScale; // 0x70
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceFarDistScale; // 0x78
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceIndoorScale; // 0x80
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* multiBounceScaleMaxDist; // 0x88
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* lightmapBoost; // 0x90
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* aoLength; // 0x98
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* aoIntensity; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionMinDist; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionMaxDist; // 0xB0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionScale; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionDelta; // 0xC0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionInteriorMinDist; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionInteriorMaxDist; // 0xD0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionInteriorScale; // 0xD8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraEmissionInteriorDelta; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* addLocallightMinDist; // 0xE8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* addLocallightMaxDist; // 0xF0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* addLocallightScale; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* addLocallightDelta; // 0x100
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraColorbleedingMinDist; // 0x108
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraColorbleedingMaxDist; // 0x110
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraColorbleedingScale; // 0x118
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* extraColorbleedingDelta; // 0x120
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* diffuseProxyIntensity; // 0x128
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* diffuseColorValue; // 0x130
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* diffuseColorSaturate; // 0x138
		::UnityEngine::NAPRenderPipeline0::Vector3Parameter* diffuseColorDiffThreshold; // 0x140
		::UnityEngine::NAPRenderPipeline0::TextureParameter* lut; // 0x148
		::UnityEngine::NAPRenderPipeline0::TextureParameter* roughnessLut; // 0x150
		::UnityEngine::NAPRenderPipeline0::TextureParameter* multiBounceAlbedoLut; // 0x158

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_RTX_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
