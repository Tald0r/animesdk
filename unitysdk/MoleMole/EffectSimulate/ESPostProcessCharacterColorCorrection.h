#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityAvatarColorCorrections; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class CharacterColorCorrection; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_06075B27B358B725_OFFSET UNITYSDK_OFFSET(0xE463900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xE46B410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xE46B420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xE45B990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xE46B560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xE46B4A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xE469940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0xE45BDD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xE469840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xE469700)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0xE45D260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xE469C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xE469B10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xE469A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xE46B400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xE46B670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xE46B650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xE45B4F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0xE469F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_789069FA653A07E9_1_OFFSET UNITYSDK_OFFSET(0xE46A9D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_789069FA653A07E9_OFFSET UNITYSDK_OFFSET(0xE469C80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_832172BF04246E66_OFFSET UNITYSDK_OFFSET(0xE45E440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xE46B6C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xE4699A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xE469B90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xE4698B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xE468F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xE46B5E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xE469A30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xE46B660)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xE46B5D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xE468E30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xE46B490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xE46B680)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_C26623CFD2E6EAE3_OFFSET UNITYSDK_OFFSET(0xE468B50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xE46B570)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xE45B930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xE4697D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xE46B640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xE46B500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xE46B6E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xE46B6D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_F918726BB6E76D4D_1_OFFSET UNITYSDK_OFFSET(0xE467210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_F918726BB6E76D4D_OFFSET UNITYSDK_OFFSET(0xE4658D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION__CTOR_OFFSET UNITYSDK_OFFSET(0xE46AC60)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessCharacterColorCorrection_TypeDefinitionIndex = 48228;

	class ESPostProcessCharacterColorCorrection : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::CharacterColorCorrection*>
	{
	public:
		::MoleMole::Config::ConfigEntityAvatarColorCorrections* m_stAsset; // 0xB0
		::System::Single _DefaultPostExposure; // 0xB8
		::System::Single _DefaultContrast; // 0xBC
		::System::Single _DefaultSaturation; // 0xC0
		::UnityEngine::Color _VolDefault_ambient; // 0xC4
		::UnityEngine::Color _VolDefault_skinFrontTint; // 0xD4
		::UnityEngine::Color _VolDefault_frontTint; // 0xE4
		::UnityEngine::Color _VolDefault_skinSssTint; // 0xF4
		::UnityEngine::Color _VolDefault_sssTint; // 0x104
		::UnityEngine::Color _VolDefault_skinShallowTint; // 0x114
		::UnityEngine::Color _VolDefault_shallowTint; // 0x124
		::UnityEngine::Color _VolDefault_skinShallowFadeTint; // 0x134
		::UnityEngine::Color _VolDefault_shallowFadeTint; // 0x144
		::UnityEngine::Color _VolDefault_skinShadowTint; // 0x154
		::UnityEngine::Color _VolDefault_shadowTint; // 0x164
		::UnityEngine::Color _VolDefault_skinShadowFadeTint; // 0x174
		::UnityEngine::Color _VolDefault_shadowFadeTint; // 0x184
		::UnityEngine::Color _VolDefault_ambientGradient; // 0x194
		::System::Boolean _VolDefault_useShadowTintAsOutline; // 0x1A4
		::UnityEngine::Color _VolDefault_outlineTint; // 0x1A8
		::System::Single _VolDefault_postExposure; // 0x1B8
		::System::Single _VolDefault_contrast; // 0x1BC
		::System::Single _VolDefault_saturation; // 0x1C0
		::System::Boolean _VolPreVal_ambient_overrideState; // 0x1C4
		::UnityEngine::Color _VolPreVal_ambient; // 0x1C8
		::System::Boolean _VolPreVal_skinFrontTint_overrideState; // 0x1D8
		::UnityEngine::Color _VolPreVal_skinFrontTint; // 0x1DC
		::System::Boolean _VolPreVal_frontTint_overrideState; // 0x1EC
		::UnityEngine::Color _VolPreVal_frontTint; // 0x1F0
		::System::Boolean _VolPreVal_skinSssTint_overrideState; // 0x200
		::UnityEngine::Color _VolPreVal_skinSssTint; // 0x204
		::System::Boolean _VolPreVal_sssTint_overrideState; // 0x214
		::UnityEngine::Color _VolPreVal_sssTint; // 0x218
		::System::Boolean _VolPreVal_skinShallowTint_overrideState; // 0x228
		::UnityEngine::Color _VolPreVal_skinShallowTint; // 0x22C
		::System::Boolean _VolPreVal_shallowTint_overrideState; // 0x23C
		::UnityEngine::Color _VolPreVal_shallowTint; // 0x240
		::System::Boolean _VolPreVal_skinShallowFadeTint_overrideState; // 0x250
		::UnityEngine::Color _VolPreVal_skinShallowFadeTint; // 0x254
		::System::Boolean _VolPreVal_shallowFadeTint_overrideState; // 0x264
		::UnityEngine::Color _VolPreVal_shallowFadeTint; // 0x268
		::System::Boolean _VolPreVal_skinShadowTint_overrideState; // 0x278
		::UnityEngine::Color _VolPreVal_skinShadowTint; // 0x27C
		::System::Boolean _VolPreVal_shadowTint_overrideState; // 0x28C
		::UnityEngine::Color _VolPreVal_shadowTint; // 0x290
		::System::Boolean _VolPreVal_skinShadowFadeTint_overrideState; // 0x2A0
		::UnityEngine::Color _VolPreVal_skinShadowFadeTint; // 0x2A4
		::System::Boolean _VolPreVal_shadowFadeTint_overrideState; // 0x2B4
		::UnityEngine::Color _VolPreVal_shadowFadeTint; // 0x2B8
		::System::Boolean _VolPreVal_ambientGradient_overrideState; // 0x2C8
		::UnityEngine::Color _VolPreVal_ambientGradient; // 0x2CC
		::System::Boolean _VolPreVal_useShadowTintAsOutline_overrideState; // 0x2DC
		::System::Boolean _VolPreVal_useShadowTintAsOutline; // 0x2DD
		::System::Boolean _VolPreVal_outlineTint_overrideState; // 0x2DE
		::UnityEngine::Color _VolPreVal_outlineTint; // 0x2E0
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x2F0
		::System::Single _VolPreVal_postExposure; // 0x2F4
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x2F8
		::System::Single _VolPreVal_contrast; // 0x2FC
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x300
		::System::Single _VolPreVal_saturation; // 0x304
		::UnityEngine::Color _TimelineCurveFirstVal_ambient; // 0x308
		::UnityEngine::Color _TimelineCurveLastVal_ambient; // 0x318
		::UnityEngine::Color _TimelineCurveFirstVal_skinFrontTint; // 0x328
		::UnityEngine::Color _TimelineCurveLastVal_skinFrontTint; // 0x338
		::UnityEngine::Color _TimelineCurveFirstVal_frontTint; // 0x348
		::UnityEngine::Color _TimelineCurveLastVal_frontTint; // 0x358
		::UnityEngine::Color _TimelineCurveFirstVal_skinSssTint; // 0x368
		::UnityEngine::Color _TimelineCurveLastVal_skinSssTint; // 0x378
		::UnityEngine::Color _TimelineCurveFirstVal_sssTint; // 0x388
		::UnityEngine::Color _TimelineCurveLastVal_sssTint; // 0x398
		::UnityEngine::Color _TimelineCurveFirstVal_skinShallowTint; // 0x3A8
		::UnityEngine::Color _TimelineCurveLastVal_skinShallowTint; // 0x3B8
		::UnityEngine::Color _TimelineCurveFirstVal_shallowTint; // 0x3C8
		::UnityEngine::Color _TimelineCurveLastVal_shallowTint; // 0x3D8
		::UnityEngine::Color _TimelineCurveFirstVal_skinShallowFadeTint; // 0x3E8
		::UnityEngine::Color _TimelineCurveLastVal_skinShallowFadeTint; // 0x3F8
		::UnityEngine::Color _TimelineCurveFirstVal_shallowFadeTint; // 0x408
		::UnityEngine::Color _TimelineCurveLastVal_shallowFadeTint; // 0x418
		::UnityEngine::Color _TimelineCurveFirstVal_skinShadowTint; // 0x428
		::UnityEngine::Color _TimelineCurveLastVal_skinShadowTint; // 0x438
		::UnityEngine::Color _TimelineCurveFirstVal_shadowTint; // 0x448
		::UnityEngine::Color _TimelineCurveLastVal_shadowTint; // 0x458
		::UnityEngine::Color _TimelineCurveFirstVal_skinShadowFadeTint; // 0x468
		::UnityEngine::Color _TimelineCurveLastVal_skinShadowFadeTint; // 0x478
		::UnityEngine::Color _TimelineCurveFirstVal_shadowFadeTint; // 0x488
		::UnityEngine::Color _TimelineCurveLastVal_shadowFadeTint; // 0x498
		::UnityEngine::Color _TimelineCurveFirstVal_ambientGradient; // 0x4A8
		::UnityEngine::Color _TimelineCurveLastVal_ambientGradient; // 0x4B8
		::UnityEngine::Color _TimelineCurveFirstVal_outlineTint; // 0x4C8
		::UnityEngine::Color _TimelineCurveLastVal_outlineTint; // 0x4D8
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x4E8
		::System::Single _TimelineCurveLastVal_postExposure; // 0x4EC
		::System::Single _TimelineCurveFirstVal_contrast; // 0x4F0
		::System::Single _TimelineCurveLastVal_contrast; // 0x4F4
		::System::Single _TimelineCurveFirstVal_saturation; // 0x4F8
		::System::Single _TimelineCurveLastVal_saturation; // 0x4FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambient_FieldHandleType; // 0x500
		::System::Boolean ESPP_ambient_UseIt; // 0x504
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambient; // 0x508
		::System::Boolean ESPP_ambient_EnableFade; // 0x510
		::System::Boolean ESPP_ambient_EnableOverrideDefaultValue; // 0x511
		::UnityEngine::Color ESPP_ambient_OverrideDefaultValue; // 0x514
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinFrontTint_FieldHandleType; // 0x524
		::System::Boolean ESPP_skinFrontTint_UseIt; // 0x528
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinFrontTint; // 0x530
		::System::Boolean ESPP_skinFrontTint_EnableFade; // 0x538
		::System::Boolean ESPP_skinFrontTint_EnableOverrideDefaultValue; // 0x539
		::UnityEngine::Color ESPP_skinFrontTint_OverrideDefaultValue; // 0x53C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_frontTint_FieldHandleType; // 0x54C
		::System::Boolean ESPP_frontTint_UseIt; // 0x550
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_frontTint; // 0x558
		::System::Boolean ESPP_frontTint_EnableFade; // 0x560
		::System::Boolean ESPP_frontTint_EnableOverrideDefaultValue; // 0x561
		::UnityEngine::Color ESPP_frontTint_OverrideDefaultValue; // 0x564
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinSssTint_FieldHandleType; // 0x574
		::System::Boolean ESPP_skinSssTint_UseIt; // 0x578
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinSssTint; // 0x580
		::System::Boolean ESPP_skinSssTint_EnableFade; // 0x588
		::System::Boolean ESPP_skinSssTint_EnableOverrideDefaultValue; // 0x589
		::UnityEngine::Color ESPP_skinSssTint_OverrideDefaultValue; // 0x58C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sssTint_FieldHandleType; // 0x59C
		::System::Boolean ESPP_sssTint_UseIt; // 0x5A0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_sssTint; // 0x5A8
		::System::Boolean ESPP_sssTint_EnableFade; // 0x5B0
		::System::Boolean ESPP_sssTint_EnableOverrideDefaultValue; // 0x5B1
		::UnityEngine::Color ESPP_sssTint_OverrideDefaultValue; // 0x5B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShallowTint_FieldHandleType; // 0x5C4
		::System::Boolean ESPP_skinShallowTint_UseIt; // 0x5C8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShallowTint; // 0x5D0
		::System::Boolean ESPP_skinShallowTint_EnableFade; // 0x5D8
		::System::Boolean ESPP_skinShallowTint_EnableOverrideDefaultValue; // 0x5D9
		::UnityEngine::Color ESPP_skinShallowTint_OverrideDefaultValue; // 0x5DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shallowTint_FieldHandleType; // 0x5EC
		::System::Boolean ESPP_shallowTint_UseIt; // 0x5F0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shallowTint; // 0x5F8
		::System::Boolean ESPP_shallowTint_EnableFade; // 0x600
		::System::Boolean ESPP_shallowTint_EnableOverrideDefaultValue; // 0x601
		::UnityEngine::Color ESPP_shallowTint_OverrideDefaultValue; // 0x604
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShallowFadeTint_FieldHandleType; // 0x614
		::System::Boolean ESPP_skinShallowFadeTint_UseIt; // 0x618
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShallowFadeTint; // 0x620
		::System::Boolean ESPP_skinShallowFadeTint_EnableFade; // 0x628
		::System::Boolean ESPP_skinShallowFadeTint_EnableOverrideDefaultValue; // 0x629
		::UnityEngine::Color ESPP_skinShallowFadeTint_OverrideDefaultValue; // 0x62C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shallowFadeTint_FieldHandleType; // 0x63C
		::System::Boolean ESPP_shallowFadeTint_UseIt; // 0x640
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shallowFadeTint; // 0x648
		::System::Boolean ESPP_shallowFadeTint_EnableFade; // 0x650
		::System::Boolean ESPP_shallowFadeTint_EnableOverrideDefaultValue; // 0x651
		::UnityEngine::Color ESPP_shallowFadeTint_OverrideDefaultValue; // 0x654
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShadowTint_FieldHandleType; // 0x664
		::System::Boolean ESPP_skinShadowTint_UseIt; // 0x668
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShadowTint; // 0x670
		::System::Boolean ESPP_skinShadowTint_EnableFade; // 0x678
		::System::Boolean ESPP_skinShadowTint_EnableOverrideDefaultValue; // 0x679
		::UnityEngine::Color ESPP_skinShadowTint_OverrideDefaultValue; // 0x67C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowTint_FieldHandleType; // 0x68C
		::System::Boolean ESPP_shadowTint_UseIt; // 0x690
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shadowTint; // 0x698
		::System::Boolean ESPP_shadowTint_EnableFade; // 0x6A0
		::System::Boolean ESPP_shadowTint_EnableOverrideDefaultValue; // 0x6A1
		::UnityEngine::Color ESPP_shadowTint_OverrideDefaultValue; // 0x6A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skinShadowFadeTint_FieldHandleType; // 0x6B4
		::System::Boolean ESPP_skinShadowFadeTint_UseIt; // 0x6B8
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_skinShadowFadeTint; // 0x6C0
		::System::Boolean ESPP_skinShadowFadeTint_EnableFade; // 0x6C8
		::System::Boolean ESPP_skinShadowFadeTint_EnableOverrideDefaultValue; // 0x6C9
		::UnityEngine::Color ESPP_skinShadowFadeTint_OverrideDefaultValue; // 0x6CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_shadowFadeTint_FieldHandleType; // 0x6DC
		::System::Boolean ESPP_shadowFadeTint_UseIt; // 0x6E0
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_shadowFadeTint; // 0x6E8
		::System::Boolean ESPP_shadowFadeTint_EnableFade; // 0x6F0
		::System::Boolean ESPP_shadowFadeTint_EnableOverrideDefaultValue; // 0x6F1
		::UnityEngine::Color ESPP_shadowFadeTint_OverrideDefaultValue; // 0x6F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_ambientGradient_FieldHandleType; // 0x704
		::System::Boolean ESPP_ambientGradient_UseIt; // 0x708
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_ambientGradient; // 0x710
		::System::Boolean ESPP_ambientGradient_EnableFade; // 0x718
		::System::Boolean ESPP_ambientGradient_EnableOverrideDefaultValue; // 0x719
		::UnityEngine::Color ESPP_ambientGradient_OverrideDefaultValue; // 0x71C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useShadowTintAsOutline_FieldHandleType; // 0x72C
		::System::Boolean ESPP_useShadowTintAsOutline; // 0x730
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_outlineTint_FieldHandleType; // 0x734
		::System::Boolean ESPP_outlineTint_UseIt; // 0x738
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_outlineTint; // 0x740
		::System::Boolean ESPP_outlineTint_EnableFade; // 0x748
		::System::Boolean ESPP_outlineTint_EnableOverrideDefaultValue; // 0x749
		::UnityEngine::Color ESPP_outlineTint_OverrideDefaultValue; // 0x74C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0x75C
		::System::Boolean ESPP_postExposure_UseIt; // 0x760
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0x768
		::System::Boolean ESPP_postExposure_EnableFade; // 0x770
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0x771
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0x774
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0x778
		::System::Boolean ESPP_contrast_UseIt; // 0x77C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0x780
		::System::Boolean ESPP_contrast_EnableFade; // 0x788
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0x789
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0x78C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0x790
		::System::Boolean ESPP_saturation_UseIt; // 0x794
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0x798
		::System::Boolean ESPP_saturation_EnableFade; // 0x7A0
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0x7A1
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0x7A4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_3DA91C9B57824EE6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_3DA91C9B57824EE6_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_832172BF04246E66(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_832172BF04246E66_OFFSET))(this, a1);
		}

		::System::Void Method_5_06075B27B358B725(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_06075B27B358B725_OFFSET))(this, a1);
		}

		::System::Void Method_5_F918726BB6E76D4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_F918726BB6E76D4D_OFFSET))(this, a1);
		}

		::System::Void Method_5_F918726BB6E76D4D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_F918726BB6E76D4D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_C26623CFD2E6EAE3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_C26623CFD2E6EAE3_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_789069FA653A07E9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_789069FA653A07E9_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_789069FA653A07E9_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_789069FA653A07E9_1_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCHARACTERCOLORCORRECTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
