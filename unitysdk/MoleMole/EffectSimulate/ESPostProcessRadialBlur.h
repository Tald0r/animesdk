#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/DownSampleLevel.h"
#include "unitysdk/UnityEngine/Rendering/Universal/SampleDistanceMode.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityRadialBlurs; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class RadialBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xEC61D70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xEC56920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_1DE6433C25680F9D_OFFSET UNITYSDK_OFFSET(0xEC60EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_2561DC986DD32699_OFFSET UNITYSDK_OFFSET(0xEC58430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xEC61F40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xEC565A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xEC61CF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xEC61E00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xEC609D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xEC608D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xEC60790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_438300467EDE6B0B_OFFSET UNITYSDK_OFFSET(0xEC60D10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xEC60CB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xEC60BA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xEC60B20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xEC61D60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xEC61F30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xEC61DF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xEC56270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xEC57CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_79E872D90798D236_OFFSET UNITYSDK_OFFSET(0xEC61500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xEC61F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xEC60A30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xEC60C20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xEC60940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xEC602C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xEC61D90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xEC60AC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xEC61EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xEC61CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_1_OFFSET UNITYSDK_OFFSET(0xEC5EF50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_OFFSET UNITYSDK_OFFSET(0xEC5DEE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xEC601B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xEC61F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xEC61E60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xEC61EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xEC56540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xEC60860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xEC61CC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xEC61D00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xEC61D80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xEC61CE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ECCE1872B868F9DC_OFFSET UNITYSDK_OFFSET(0xEC5C640)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_F0D9B6AAFF504D87_OFFSET UNITYSDK_OFFSET(0xEC5FFC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0xEC616A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessRadialBlur_TypeDefinitionIndex = 66280;

	class ESPostProcessRadialBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::RadialBlur*>
	{
	public:
		::MoleMole::Config::ConfigEntityRadialBlurs* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::DownSampleLevel _DefaultDownSampleLevel; // 0xB8
		::UnityEngine::Rendering::Universal::SampleDistanceMode _DefaultSampleDistanceMode; // 0xBC
		::System::Single _DefaultRadius; // 0xC0
		::System::Single _DefaultThreshold; // 0xC4
		::UnityEngine::Vector2 _DefaultCircleRange; // 0xC8
		::System::Boolean _DefaultForceActiveOverlayDistortion; // 0xD0
		::System::Boolean _DefaultUseBloomMode; // 0xD1
		::System::Single _DefaultGlareIntensity; // 0xD4
		::System::Single _DefaultGlareThreshold; // 0xD8
		::System::Single _DefaultGlareCenterFadeRange; // 0xDC
		::System::Single _DefaultGlareFadeShapeRatio; // 0xE0
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolDefault_downSample; // 0xE4
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolDefault_sampleDistanceMode; // 0xE8
		::System::Int32 _VolDefault_sampleCount; // 0xEC
		::System::Single _VolDefault_radius; // 0xF0
		::UnityEngine::Vector2 _VolDefault_centerPosition; // 0xF4
		::System::Single _VolDefault_threshold; // 0xFC
		::System::Boolean _VolDefault_useCircleRange; // 0x100
		::UnityEngine::Vector2 _VolDefault_circleRange; // 0x104
		::System::Boolean _VolDefault_forceActiveOverlayDistortion; // 0x10C
		::System::Boolean _VolDefault_useBloomMode; // 0x10D
		::System::Single _VolDefault_glareIntensity; // 0x110
		::System::Single _VolDefault_glareThreshold; // 0x114
		::System::Single _VolDefault_glareCenterFadeRange; // 0x118
		::System::Single _VolDefault_glareFadeShapeRatio; // 0x11C
		::System::Boolean _VolDefault_canBeDisabledByGlobalConfig; // 0x120
		::System::Boolean _VolPreVal_downSample_overrideState; // 0x121
		::UnityEngine::Rendering::Universal::DownSampleLevel _VolPreVal_downSample; // 0x124
		::System::Boolean _VolPreVal_sampleDistanceMode_overrideState; // 0x128
		::UnityEngine::Rendering::Universal::SampleDistanceMode _VolPreVal_sampleDistanceMode; // 0x12C
		::System::Boolean _VolPreVal_sampleCount_overrideState; // 0x130
		::System::Int32 _VolPreVal_sampleCount; // 0x134
		::System::Boolean _VolPreVal_radius_overrideState; // 0x138
		::System::Single _VolPreVal_radius; // 0x13C
		::System::Boolean _VolPreVal_centerPosition_overrideState; // 0x140
		::UnityEngine::Vector2 _VolPreVal_centerPosition; // 0x144
		::System::Boolean _VolPreVal_threshold_overrideState; // 0x14C
		::System::Single _VolPreVal_threshold; // 0x150
		::System::Boolean _VolPreVal_useCircleRange_overrideState; // 0x154
		::System::Boolean _VolPreVal_useCircleRange; // 0x155
		::System::Boolean _VolPreVal_circleRange_overrideState; // 0x156
		::UnityEngine::Vector2 _VolPreVal_circleRange; // 0x158
		::System::Boolean _VolPreVal_forceActiveOverlayDistortion_overrideState; // 0x160
		::System::Boolean _VolPreVal_forceActiveOverlayDistortion; // 0x161
		::System::Boolean _VolPreVal_useBloomMode_overrideState; // 0x162
		::System::Boolean _VolPreVal_useBloomMode; // 0x163
		::System::Boolean _VolPreVal_glareIntensity_overrideState; // 0x164
		::System::Single _VolPreVal_glareIntensity; // 0x168
		::System::Boolean _VolPreVal_glareThreshold_overrideState; // 0x16C
		::System::Single _VolPreVal_glareThreshold; // 0x170
		::System::Boolean _VolPreVal_glareCenterFadeRange_overrideState; // 0x174
		::System::Single _VolPreVal_glareCenterFadeRange; // 0x178
		::System::Boolean _VolPreVal_glareFadeShapeRatio_overrideState; // 0x17C
		::System::Single _VolPreVal_glareFadeShapeRatio; // 0x180
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig_overrideState; // 0x184
		::System::Boolean _VolPreVal_canBeDisabledByGlobalConfig; // 0x185
		::System::Single _TimelineCurveFirstVal_radius; // 0x188
		::System::Single _TimelineCurveLastVal_radius; // 0x18C
		::UnityEngine::Vector2 _TimelineCurveFirstVal_centerPosition; // 0x190
		::UnityEngine::Vector2 _TimelineCurveLastVal_centerPosition; // 0x198
		::System::Single _TimelineCurveFirstVal_threshold; // 0x1A0
		::System::Single _TimelineCurveLastVal_threshold; // 0x1A4
		::System::Boolean _TimelineCurveFirstVal_useCircleRange; // 0x1A8
		::System::Boolean _TimelineCurveLastVal_useCircleRange; // 0x1A9
		::UnityEngine::Vector2 _TimelineCurveFirstVal_circleRange; // 0x1AC
		::UnityEngine::Vector2 _TimelineCurveLastVal_circleRange; // 0x1B4
		::System::Boolean _TimelineCurveFirstVal_useBloomMode; // 0x1BC
		::System::Boolean _TimelineCurveLastVal_useBloomMode; // 0x1BD
		::System::Single _TimelineCurveFirstVal_glareIntensity; // 0x1C0
		::System::Single _TimelineCurveLastVal_glareIntensity; // 0x1C4
		::System::Single _TimelineCurveFirstVal_glareThreshold; // 0x1C8
		::System::Single _TimelineCurveLastVal_glareThreshold; // 0x1CC
		::System::Single _TimelineCurveFirstVal_glareCenterFadeRange; // 0x1D0
		::System::Single _TimelineCurveLastVal_glareCenterFadeRange; // 0x1D4
		::System::Single _TimelineCurveFirstVal_glareFadeShapeRatio; // 0x1D8
		::System::Single _TimelineCurveLastVal_glareFadeShapeRatio; // 0x1DC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x1E0
		::UnityEngine::Rendering::Universal::DownSampleLevel ESPP_downSample; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleDistanceMode_FieldHandleType; // 0x1E8
		::UnityEngine::Rendering::Universal::SampleDistanceMode ESPP_sampleDistanceMode; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_sampleCount_FieldHandleType; // 0x1F0
		::System::Int32 ESPP_sampleCount; // 0x1F4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x1F8
		::System::Boolean ESPP_radius_UseIt; // 0x1FC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x200
		::System::Boolean ESPP_radius_EnableFade; // 0x208
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x209
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x20C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_centerPosition_FieldHandleType; // 0x210
		::System::Boolean ESPP_centerPosition_UseIt; // 0x214
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_centerPosition; // 0x218
		::System::Boolean ESPP_centerPosition_EnableFade; // 0x220
		::System::Boolean ESPP_centerPosition_EnableOverrideDefaultValue; // 0x221
		::UnityEngine::Vector2 ESPP_centerPosition_OverrideDefaultValue; // 0x224
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_threshold_FieldHandleType; // 0x22C
		::System::Boolean ESPP_threshold_UseIt; // 0x230
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_threshold; // 0x238
		::System::Boolean ESPP_threshold_EnableFade; // 0x240
		::System::Boolean ESPP_threshold_EnableOverrideDefaultValue; // 0x241
		::System::Single ESPP_threshold_OverrideDefaultValue; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useCircleRange_FieldHandleType; // 0x248
		::System::Boolean ESPP_useCircleRange_UseIt; // 0x24C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useCircleRange; // 0x250
		::System::Boolean ESPP_useCircleRange_EnableFade; // 0x258
		::System::Boolean ESPP_useCircleRange_EnableOverrideDefaultValue; // 0x259
		::System::Boolean ESPP_useCircleRange_OverrideDefaultValue; // 0x25A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_circleRange_FieldHandleType; // 0x25C
		::System::Boolean ESPP_circleRange_UseIt; // 0x260
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_circleRange; // 0x268
		::System::Boolean ESPP_circleRange_EnableFade; // 0x270
		::System::Boolean ESPP_circleRange_EnableOverrideDefaultValue; // 0x271
		::UnityEngine::Vector2 ESPP_circleRange_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActiveOverlayDistortion_FieldHandleType; // 0x27C
		::System::Boolean ESPP_forceActiveOverlayDistortion; // 0x280
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_useBloomMode_FieldHandleType; // 0x284
		::System::Boolean ESPP_useBloomMode_UseIt; // 0x288
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_useBloomMode; // 0x290
		::System::Boolean ESPP_useBloomMode_EnableFade; // 0x298
		::System::Boolean ESPP_useBloomMode_EnableOverrideDefaultValue; // 0x299
		::System::Boolean ESPP_useBloomMode_OverrideDefaultValue; // 0x29A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareIntensity_FieldHandleType; // 0x29C
		::System::Boolean ESPP_glareIntensity_UseIt; // 0x2A0
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareIntensity; // 0x2A8
		::System::Boolean ESPP_glareIntensity_EnableFade; // 0x2B0
		::System::Boolean ESPP_glareIntensity_EnableOverrideDefaultValue; // 0x2B1
		::System::Single ESPP_glareIntensity_OverrideDefaultValue; // 0x2B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareThreshold_FieldHandleType; // 0x2B8
		::System::Boolean ESPP_glareThreshold_UseIt; // 0x2BC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareThreshold; // 0x2C0
		::System::Boolean ESPP_glareThreshold_EnableFade; // 0x2C8
		::System::Boolean ESPP_glareThreshold_EnableOverrideDefaultValue; // 0x2C9
		::System::Single ESPP_glareThreshold_OverrideDefaultValue; // 0x2CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareCenterFadeRange_FieldHandleType; // 0x2D0
		::System::Boolean ESPP_glareCenterFadeRange_UseIt; // 0x2D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareCenterFadeRange; // 0x2D8
		::System::Boolean ESPP_glareCenterFadeRange_EnableFade; // 0x2E0
		::System::Boolean ESPP_glareCenterFadeRange_EnableOverrideDefaultValue; // 0x2E1
		::System::Single ESPP_glareCenterFadeRange_OverrideDefaultValue; // 0x2E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareFadeShapeRatio_FieldHandleType; // 0x2E8
		::System::Boolean ESPP_glareFadeShapeRatio_UseIt; // 0x2EC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareFadeShapeRatio; // 0x2F0
		::System::Boolean ESPP_glareFadeShapeRatio_EnableFade; // 0x2F8
		::System::Boolean ESPP_glareFadeShapeRatio_EnableOverrideDefaultValue; // 0x2F9
		::System::Single ESPP_glareFadeShapeRatio_OverrideDefaultValue; // 0x2FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_canBeDisabledByGlobalConfig_FieldHandleType; // 0x300
		::System::Boolean ESPP_canBeDisabledByGlobalConfig; // 0x304

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_1283EC0876EAAACF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_1283EC0876EAAACF_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2561DC986DD32699(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_2561DC986DD32699_OFFSET))(this, a1);
		}

		::System::Void Method_5_ECCE1872B868F9DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ECCE1872B868F9DC_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_OFFSET))(this, a1);
		}

		::System::Void Method_5_ABD8624DE9A02803_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_ABD8624DE9A02803_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_F0D9B6AAFF504D87()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_F0D9B6AAFF504D87_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_438300467EDE6B0B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_438300467EDE6B0B_OFFSET))(this, a1);
		}

		::System::Void Method_5_1DE6433C25680F9D()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_1DE6433C25680F9D_OFFSET))(this);
		}

		::System::Void Method_5_79E872D90798D236(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_79E872D90798D236_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSRADIALBLUR_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}
	};
}
