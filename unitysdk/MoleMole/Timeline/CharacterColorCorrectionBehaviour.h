#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Timeline/CharacterColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_25.h"
#include "unitysdk/MoleMole/Timeline/PostProcessBehaviourBase.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Playables/Playable.h"
#include "unitysdk/UnityEngine/Vector4.h"

namespace System { class Object; }
namespace System { class String; }
namespace UnityEngine::NAPRenderPipeline0 { class TextureCurve; }
namespace UnityEngine::Rendering::Universal { class CharacterColorCorrection; }

#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET UNITYSDK_OFFSET(0xB3054B0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_1_OFFSET UNITYSDK_OFFSET(0xB30C3C0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET UNITYSDK_OFFSET(0xB30C3A0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET UNITYSDK_OFFSET(0xB30C3E0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET UNITYSDK_OFFSET(0xB306830)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET UNITYSDK_OFFSET(0xB30C3D0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET UNITYSDK_OFFSET(0xB30C3B0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_BEBCAFF53057C562_OFFSET UNITYSDK_OFFSET(0xB305F20)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLECREATE_OFFSET UNITYSDK_OFFSET(0xB305390)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET UNITYSDK_OFFSET(0xB3062E0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET UNITYSDK_OFFSET(0xB309EF0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET UNITYSDK_OFFSET(0xB30A4B0)
#define MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET UNITYSDK_OFFSET(0xB30C1B0)

namespace MoleMole::Timeline
{
	inline static constexpr unsigned int CharacterColorCorrectionBehaviour_TypeDefinitionIndex = 71755;

	class CharacterColorCorrectionBehaviour : public ::MoleMole::Timeline::PostProcessBehaviourBase
	{
	public:
		::MoleMole::Timeline::CharacterColorCorrectionBehaviour_Struct_2_52AD02145F5FCE3A_25 _methodParm; // 0x18
		::System::Boolean enabled; // 0x298
		::System::Boolean active_enable; // 0x299
		::System::Boolean use_enable; // 0x29A
		::System::Boolean enable; // 0x29B
		::System::Boolean active_ambient; // 0x29C
		::System::Boolean use_ambient; // 0x29D
		::UnityEngine::Color ambient; // 0x2A0
		::System::Boolean active_skinFrontTint; // 0x2B0
		::System::Boolean use_skinFrontTint; // 0x2B1
		::UnityEngine::Color skinFrontTint; // 0x2B4
		::System::Boolean active_frontTint; // 0x2C4
		::System::Boolean use_frontTint; // 0x2C5
		::UnityEngine::Color frontTint; // 0x2C8
		::System::Boolean active_skinSssTint; // 0x2D8
		::System::Boolean use_skinSssTint; // 0x2D9
		::UnityEngine::Color skinSssTint; // 0x2DC
		::System::Boolean active_sssTint; // 0x2EC
		::System::Boolean use_sssTint; // 0x2ED
		::UnityEngine::Color sssTint; // 0x2F0
		::System::Boolean active_skinShallowTint; // 0x300
		::System::Boolean use_skinShallowTint; // 0x301
		::UnityEngine::Color skinShallowTint; // 0x304
		::System::Boolean active_shallowTint; // 0x314
		::System::Boolean use_shallowTint; // 0x315
		::UnityEngine::Color shallowTint; // 0x318
		::System::Boolean active_skinShallowFadeTint; // 0x328
		::System::Boolean use_skinShallowFadeTint; // 0x329
		::UnityEngine::Color skinShallowFadeTint; // 0x32C
		::System::Boolean active_shallowFadeTint; // 0x33C
		::System::Boolean use_shallowFadeTint; // 0x33D
		::UnityEngine::Color shallowFadeTint; // 0x340
		::System::Boolean active_skinShadowTint; // 0x350
		::System::Boolean use_skinShadowTint; // 0x351
		::UnityEngine::Color skinShadowTint; // 0x354
		::System::Boolean active_shadowTint; // 0x364
		::System::Boolean use_shadowTint; // 0x365
		::UnityEngine::Color shadowTint; // 0x368
		::System::Boolean active_skinShadowFadeTint; // 0x378
		::System::Boolean use_skinShadowFadeTint; // 0x379
		::UnityEngine::Color skinShadowFadeTint; // 0x37C
		::System::Boolean active_shadowFadeTint; // 0x38C
		::System::Boolean use_shadowFadeTint; // 0x38D
		::UnityEngine::Color shadowFadeTint; // 0x390
		::System::Boolean active_ambientGradient; // 0x3A0
		::System::Boolean use_ambientGradient; // 0x3A1
		::UnityEngine::Color ambientGradient; // 0x3A4
		::System::Boolean active_useShadowTintAsOutline; // 0x3B4
		::System::Boolean use_useShadowTintAsOutline; // 0x3B5
		::System::Boolean useShadowTintAsOutline; // 0x3B6
		::System::Boolean active_outlineTint; // 0x3B7
		::System::Boolean use_outlineTint; // 0x3B8
		::UnityEngine::Color outlineTint; // 0x3BC
		::System::Boolean active_toeStrength; // 0x3CC
		::System::Boolean use_toeStrength; // 0x3CD
		::System::Single toeStrength; // 0x3D0
		::System::Boolean active_toeLength; // 0x3D4
		::System::Boolean use_toeLength; // 0x3D5
		::System::Single toeLength; // 0x3D8
		::System::Boolean active_shoulderStrength; // 0x3DC
		::System::Boolean use_shoulderStrength; // 0x3DD
		::System::Single shoulderStrength; // 0x3E0
		::System::Boolean active_shoulderLength; // 0x3E4
		::System::Boolean use_shoulderLength; // 0x3E5
		::System::Single shoulderLength; // 0x3E8
		::System::Boolean active_shoulderAngle; // 0x3EC
		::System::Boolean use_shoulderAngle; // 0x3ED
		::System::Single shoulderAngle; // 0x3F0
		::System::Boolean active_customGamma; // 0x3F4
		::System::Boolean use_customGamma; // 0x3F5
		::System::Single customGamma; // 0x3F8
		::System::Boolean active_lift; // 0x3FC
		::System::Boolean use_lift; // 0x3FD
		::UnityEngine::Vector4 lift; // 0x400
		::System::Boolean active_gamma; // 0x410
		::System::Boolean use_gamma; // 0x411
		::UnityEngine::Vector4 gamma; // 0x414
		::System::Boolean active_gain; // 0x424
		::System::Boolean use_gain; // 0x425
		::UnityEngine::Vector4 gain; // 0x428
		::System::Boolean active_postExposure; // 0x438
		::System::Boolean use_postExposure; // 0x439
		::System::Single postExposure; // 0x43C
		::System::Boolean active_contrast; // 0x440
		::System::Boolean use_contrast; // 0x441
		::System::Single contrast; // 0x444
		::System::Boolean active_saturation; // 0x448
		::System::Boolean use_saturation; // 0x449
		::System::Single saturation; // 0x44C
		::System::Boolean active_rimGlowIntensityForChara; // 0x450
		::System::Boolean use_rimGlowIntensityForChara; // 0x451
		::System::Single rimGlowIntensityForChara; // 0x454
		::System::Boolean active_rimGlowWidthForCharacter; // 0x458
		::System::Boolean use_rimGlowWidthForCharacter; // 0x459
		::System::Single rimGlowWidthForCharacter; // 0x45C
		::System::Boolean active_weaponUseCustomLightProperty; // 0x460
		::System::Boolean use_weaponUseCustomLightProperty; // 0x461
		::System::Boolean weaponUseCustomLightProperty; // 0x462
		::System::Boolean active_master; // 0x463
		::System::Boolean use_master; // 0x464
		::UnityEngine::NAPRenderPipeline0::TextureCurve* master; // 0x468
		::System::Boolean active_red; // 0x470
		::System::Boolean use_red; // 0x471
		::UnityEngine::NAPRenderPipeline0::TextureCurve* red; // 0x478
		::System::Boolean active_green; // 0x480
		::System::Boolean use_green; // 0x481
		::UnityEngine::NAPRenderPipeline0::TextureCurve* green; // 0x488
		::System::Boolean active_blue; // 0x490
		::System::Boolean use_blue; // 0x491
		::UnityEngine::NAPRenderPipeline0::TextureCurve* blue; // 0x498
		::System::Boolean active_hueVsHue; // 0x4A0
		::System::Boolean use_hueVsHue; // 0x4A1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsHue; // 0x4A8
		::System::Boolean active_hueVsSat; // 0x4B0
		::System::Boolean use_hueVsSat; // 0x4B1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* hueVsSat; // 0x4B8
		::System::Boolean active_satVsSat; // 0x4C0
		::System::Boolean use_satVsSat; // 0x4C1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* satVsSat; // 0x4C8
		::System::Boolean active_lumVsSat; // 0x4D0
		::System::Boolean use_lumVsSat; // 0x4D1
		::UnityEngine::NAPRenderPipeline0::TextureCurve* lumVsSat; // 0x4D8
		::System::Boolean active_rimGlowColorForCharacter; // 0x4E0
		::System::Boolean use_rimGlowColorForCharacter; // 0x4E1
		::UnityEngine::Color rimGlowColorForCharacter; // 0x4E4
		::System::Boolean active_rimGlowStyleForCharacter01; // 0x4F4
		::System::Boolean use_rimGlowStyleForCharacter01; // 0x4F5
		::System::Single rimGlowStyleForCharacter01; // 0x4F8
		::System::Boolean active_rimGlowStyleForCharacter02; // 0x4FC
		::System::Boolean use_rimGlowStyleForCharacter02; // 0x4FD
		::System::Single rimGlowStyleForCharacter02; // 0x500
		::System::Boolean active_rimGlowStyleForCharacter03; // 0x504
		::System::Boolean use_rimGlowStyleForCharacter03; // 0x505
		::System::Single rimGlowStyleForCharacter03; // 0x508
		::System::Boolean active_rimGlowStyleForCharacter04; // 0x50C
		::System::Boolean use_rimGlowStyleForCharacter04; // 0x50D
		::System::Single rimGlowStyleForCharacter04; // 0x510
		::System::Boolean SkinColorsDiffWithOther; // 0x514
		::UnityEngine::Rendering::Universal::CharacterColorCorrection* _CharacterColorCorrection; // 0x518

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR__CTOR_OFFSET))(this);
		}

		::System::Void OnPlayableCreate(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLECREATE_OFFSET))(this, a1);
		}

		::System::Void CopyValueFromComp(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_COPYVALUEFROMCOMP_OFFSET))(this, a1);
		}

		::System::Void OnPlayableDestroy(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_ONPLAYABLEDESTROY_OFFSET))(this, a1);
		}

		::System::Void ProcessFrame(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_PROCESSFRAME_OFFSET))(this, a1);
		}

		::System::Void SetValue(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_SETVALUE_OFFSET))(this, a1, a2);
		}

		::System::Void Method_4_324AEE341AAA7A1B(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_OFFSET))(this, a1);
		}

		::System::Void Method_4_80313B77C31AD02B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_80313B77C31AD02B_OFFSET))(this);
		}

		::System::Void Method_4_B072873681D4192B(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_OFFSET))(this, a1);
		}

		::UnityEngine::Rendering::Universal::CharacterColorCorrection* Method_4_BEBCAFF53057C562(::System::Object* a1)
		{
			return ((::UnityEngine::Rendering::Universal::CharacterColorCorrection*(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_BEBCAFF53057C562_OFFSET))(this, a1);
		}

		::System::Void Method_4_324AEE341AAA7A1B_1(::UnityEngine::Playables::Playable a1)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Playables::Playable))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_324AEE341AAA7A1B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_B072873681D4192B_1(::System::Object* a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_B072873681D4192B_1_OFFSET))(this, a1);
		}

		::System::Void Method_4_63F7844DC2D57F6C(::System::String* a1, ::System::Single a2)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_TIMELINE_CHARACTERCOLORCORRECTIONBEHAVIOUR_METHOD_4_63F7844DC2D57F6C_OFFSET))(this, a1, a2);
		}
	};
}
