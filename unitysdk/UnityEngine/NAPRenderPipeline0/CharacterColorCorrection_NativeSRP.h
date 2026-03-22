#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/UnityEngine/NAPRenderPipeline0/VolumeComponent.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace UnityEngine { class Texture; }
namespace UnityEngine::NAPRenderPipeline0 { class BoolParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ClampedFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class ColorParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class FloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class InterpolatedVolumeData; }
namespace UnityEngine::NAPRenderPipeline0 { class MinFloatParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurveParameter; }
namespace UnityEngine::NAPRenderPipeline0 { class Vector4Parameter; }

#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET UNITYSDK_OFFSET(0x19D19020)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP_ISACTIVE_OFFSET UNITYSDK_OFFSET(0x19D17BD0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET UNITYSDK_OFFSET(0x19D17BF0)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP__CCTOR_OFFSET UNITYSDK_OFFSET(0x19D18F20)
#define UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP__CTOR_OFFSET UNITYSDK_OFFSET(0x19D17C00)

namespace UnityEngine::NAPRenderPipeline0
{
	inline static constexpr unsigned int CharacterColorCorrection_NativeSRP_TypeDefinitionIndex = 6072;

	class CharacterColorCorrection_NativeSRP : public ::UnityEngine::NAPRenderPipeline0::VolumeComponent
	{
	public:
		::UnityEngine::NAPRenderPipeline0::BoolParameter* enable; // 0x38
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ambient; // 0x40
		::UnityEngine::NAPRenderPipeline0::ColorParameter* shallowTint; // 0x48
		::UnityEngine::NAPRenderPipeline0::ColorParameter* shallowFadeTint; // 0x50
		::UnityEngine::NAPRenderPipeline0::ColorParameter* shadowTint; // 0x58
		::UnityEngine::NAPRenderPipeline0::ColorParameter* frontTint; // 0x60
		::UnityEngine::NAPRenderPipeline0::ColorParameter* sssTint; // 0x68
		::UnityEngine::NAPRenderPipeline0::ColorParameter* shadowFadeTint; // 0x70
		::System::Boolean skinColorsInitialized; // 0x78
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skinShallowTint; // 0x80
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skinShallowFadeTint; // 0x88
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skinShadowTint; // 0x90
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skinFrontTint; // 0x98
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skinSssTint; // 0xA0
		::UnityEngine::NAPRenderPipeline0::ColorParameter* skinShadowFadeTint; // 0xA8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* ambientGradient; // 0xB0
		::UnityEngine::NAPRenderPipeline0::BoolParameter* useShadowTintAsOutline; // 0xB8
		::UnityEngine::NAPRenderPipeline0::ColorParameter* outlineTint; // 0xC0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* toeStrength; // 0xC8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* toeLength; // 0xD0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* shoulderStrength; // 0xD8
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* shoulderLength; // 0xE0
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* shoulderAngle; // 0xE8
		::UnityEngine::NAPRenderPipeline0::MinFloatParameter* customGamma; // 0xF0
		::UnityEngine::NAPRenderPipeline0::FloatParameter* postExposure; // 0xF8
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* contrast; // 0x100
		::UnityEngine::NAPRenderPipeline0::ClampedFloatParameter* saturation; // 0x108
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* lift; // 0x110
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* gamma; // 0x118
		::UnityEngine::NAPRenderPipeline0::Vector4Parameter* gain; // 0x120
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* master; // 0x128
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* red; // 0x130
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* green; // 0x138
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* blue; // 0x140
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsHue; // 0x148
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* hueVsSat; // 0x150
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* satVsSat; // 0x158
		::UnityEngine::NAPRenderPipeline0::TextureCurveParameter* lumVsSat; // 0x160
		::System::Boolean CharacterColorCorrection_enable; // 0x168
		::UnityEngine::Vector4 CharacterColorCorrection_ambient; // 0x16C
		::UnityEngine::Vector4 CharacterColorCorrection_shallowTint; // 0x17C
		::UnityEngine::Vector4 CharacterColorCorrection_shallowFadeTint; // 0x18C
		::UnityEngine::Vector4 CharacterColorCorrection_shadowTint; // 0x19C
		::UnityEngine::Vector4 CharacterColorCorrection_frontTint; // 0x1AC
		::UnityEngine::Vector4 CharacterColorCorrection_sssTint; // 0x1BC
		::UnityEngine::Vector4 CharacterColorCorrection_shadowFadeTint; // 0x1CC
		::UnityEngine::Vector4 CharacterColorCorrection_ambientGradient; // 0x1DC
		::System::Boolean CharacterColorCorrection_useShadowTintAsOutline; // 0x1EC
		::UnityEngine::Vector4 CharacterColorCorrection_outlineTint; // 0x1F0
		::System::Single CharacterColorCorrection_toeStrength; // 0x200
		::System::Single CharacterColorCorrection_toeLength; // 0x204
		::System::Single CharacterColorCorrection_shoulderStrength; // 0x208
		::System::Single CharacterColorCorrection_shoulderLength; // 0x20C
		::System::Single CharacterColorCorrection_shoulderAngle; // 0x210
		::System::Single CharacterColorCorrection_customGamma; // 0x214
		::System::Single CharacterColorCorrection_postExposure; // 0x218
		::System::Single CharacterColorCorrection_contrast; // 0x21C
		::System::Single CharacterColorCorrection_saturation; // 0x220
		::UnityEngine::Vector4 CharacterColorCorrection_lift; // 0x224
		::UnityEngine::Vector4 CharacterColorCorrection_gamma; // 0x234
		::UnityEngine::Vector4 CharacterColorCorrection_gain; // 0x244
		::UnityEngine::Texture* CharacterColorCorrection_master; // 0x258
		::UnityEngine::Texture* CharacterColorCorrection_red; // 0x260
		::UnityEngine::Texture* CharacterColorCorrection_green; // 0x268
		::UnityEngine::Texture* CharacterColorCorrection_blue; // 0x270
		::UnityEngine::Texture* CharacterColorCorrection_hueVsHue; // 0x278
		::UnityEngine::Texture* CharacterColorCorrection_hueVsSat; // 0x280
		::UnityEngine::Texture* CharacterColorCorrection_satVsSat; // 0x288
		::UnityEngine::Texture* CharacterColorCorrection_lumVsSat; // 0x290

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP__CTOR_OFFSET))(this);
		}

		static ::System::Void _cctor()
		{
			return ((::System::Void(*)())((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP__CCTOR_OFFSET))();
		}

		::System::Boolean IsActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP_ISACTIVE_OFFSET))(this);
		}

		::System::Boolean IsTileCompatible()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP_ISTILECOMPATIBLE_OFFSET))(this);
		}

		static ::System::Void InterpolateVolumeData(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData* cache, ::UnityEngine::NAPRenderPipeline0::VolumeComponent* defaultComp, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>* comps, ::Il2CppArray<::System::Single>* weights, ::System::Int32 compCount)
		{
			return ((::System::Void(*)(::UnityEngine::NAPRenderPipeline0::InterpolatedVolumeData*, ::UnityEngine::NAPRenderPipeline0::VolumeComponent*, ::Il2CppArray<::UnityEngine::NAPRenderPipeline0::VolumeComponent*>*, ::Il2CppArray<::System::Single>*, ::System::Int32))((::PBYTE)hIl2Cpp + UNITYENGINE_NAPRENDERPIPELINE0_CHARACTERCOLORCORRECTION_NATIVESRP_INTERPOLATEVOLUMEDATA_OFFSET))(cache, defaultComp, comps, weights, compCount);
		}
	};
}
