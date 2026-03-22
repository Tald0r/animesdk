#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityFXFogEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class ColorKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class FXFog; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x141C0EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_25CD86BF8626C8D9_OFFSET UNITYSDK_OFFSET(0x141B1130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x141C0FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0x141BC490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0x141BA7D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x141C0E90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x141C1030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x141BEF80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x141BEE80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0x141BED40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x141BF260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x141BF150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x141BF0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x141C10D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x141C10F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0x141C1020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_594D45A47A873869_OFFSET UNITYSDK_OFFSET(0x141B20E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x141AEC60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_6BA7BB45F0BA72F4_OFFSET UNITYSDK_OFFSET(0x141BF590)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_76ECC59BC7430042_1_OFFSET UNITYSDK_OFFSET(0x141C0180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_76ECC59BC7430042_OFFSET UNITYSDK_OFFSET(0x141BF2C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x141C10C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x141BEFE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x141BF1D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x141BEEF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_8D6879CAA76F6588_OFFSET UNITYSDK_OFFSET(0x141BE150)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x141BE580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x141C1100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x141BF070)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A6544B958241856F_OFFSET UNITYSDK_OFFSET(0x141AF160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x141C10E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x141C10B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x141BE470)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x141C1170)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x141C0F70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x141C0F10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x141AF100)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x141BEE10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D3694D678C874488_OFFSET UNITYSDK_OFFSET(0x141B8390)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x141C1160)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D68547FF19A170E2_OFFSET UNITYSDK_OFFSET(0x141AF670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x141C0EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x141C10A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x141C1090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG__CTOR_OFFSET UNITYSDK_OFFSET(0x141C0450)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFXFog_TypeDefinitionIndex = 61078;

	class ESPostProcessFXFog : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::FXFog*>
	{
	public:
		::MoleMole::Config::ConfigEntityFXFogEffects* m_stAsset; // 0xB0
		::System::Boolean _DefaultFxFogOverrideCustomData; // 0xB8
		::System::Boolean _DefaultFxFog; // 0xB9
		::UnityEngine::Color _DefaultFxFogStartColor; // 0xBC
		::UnityEngine::Color _DefaultFxFogEndColor; // 0xCC
		::UnityEngine::Color _DefaultFxFogFinalColor; // 0xDC
		::System::Single _DefaultFxFogIntensityForSky; // 0xEC
		::System::Single _DefaultFxVolumetricFogIntensity; // 0xF0
		::System::Boolean _VolDefault_fxFogOverrideCustomData; // 0xF4
		::System::Boolean _VolDefault_fxFog; // 0xF5
		::System::Single _VolDefault_fxFogStart; // 0xF8
		::UnityEngine::Color _VolDefault_fxFogStartColor; // 0xFC
		::System::Single _VolDefault_fxFogDistance; // 0x10C
		::UnityEngine::Color _VolDefault_fxFogEndColor; // 0x110
		::System::Single _VolDefault_fxFogDistance2; // 0x120
		::UnityEngine::Color _VolDefault_fxFogFinalColor; // 0x124
		::System::Boolean _VolDefault_fxFogForCharacter; // 0x134
		::System::Single _VolDefault_fxFogStartForChar; // 0x138
		::System::Single _VolDefault_fxFogDistanceForChar; // 0x13C
		::System::Single _VolDefault_fxFogIntensityForSky; // 0x140
		::System::Single _VolDefault_fxVolumetricFogIntensity; // 0x144
		::System::Boolean _VolDefault_PPFogEnable; // 0x148
		::System::Single _VolDefault_PPFogStartDistance; // 0x14C
		::System::Single _VolDefault_PPFogEndDistance; // 0x150
		::System::Single _VolDefault_PPFogEnd2Distance; // 0x154
		::UnityEngine::Color _VolDefault_PPFogColor; // 0x158
		::System::Single _VolDefault_PPFogMaxDensity; // 0x168
		::System::Single _VolDefault_fxFogIntensityForSceneAndChar; // 0x16C
		::System::Boolean _VolDefault_fxFogFixFxFogFinalColorANotWork; // 0x170
		::System::Boolean _VolDefault_fxFogKeepCharFogSameAsScene; // 0x171
		::System::Boolean _VolPreVal_fxFogOverrideCustomData_overrideState; // 0x172
		::System::Boolean _VolPreVal_fxFogOverrideCustomData; // 0x173
		::System::Boolean _VolPreVal_fxFog_overrideState; // 0x174
		::System::Boolean _VolPreVal_fxFog; // 0x175
		::System::Boolean _VolPreVal_fxFogStart_overrideState; // 0x176
		::System::Single _VolPreVal_fxFogStart; // 0x178
		::System::Boolean _VolPreVal_fxFogStartColor_overrideState; // 0x17C
		::UnityEngine::Color _VolPreVal_fxFogStartColor; // 0x180
		::System::Boolean _VolPreVal_fxFogDistance_overrideState; // 0x190
		::System::Single _VolPreVal_fxFogDistance; // 0x194
		::System::Boolean _VolPreVal_fxFogEndColor_overrideState; // 0x198
		::UnityEngine::Color _VolPreVal_fxFogEndColor; // 0x19C
		::System::Boolean _VolPreVal_fxFogDistance2_overrideState; // 0x1AC
		::System::Single _VolPreVal_fxFogDistance2; // 0x1B0
		::System::Boolean _VolPreVal_fxFogFinalColor_overrideState; // 0x1B4
		::UnityEngine::Color _VolPreVal_fxFogFinalColor; // 0x1B8
		::System::Boolean _VolPreVal_fxFogForCharacter_overrideState; // 0x1C8
		::System::Boolean _VolPreVal_fxFogForCharacter; // 0x1C9
		::System::Boolean _VolPreVal_fxFogStartForChar_overrideState; // 0x1CA
		::System::Single _VolPreVal_fxFogStartForChar; // 0x1CC
		::System::Boolean _VolPreVal_fxFogDistanceForChar_overrideState; // 0x1D0
		::System::Single _VolPreVal_fxFogDistanceForChar; // 0x1D4
		::System::Boolean _VolPreVal_fxFogIntensityForSky_overrideState; // 0x1D8
		::System::Single _VolPreVal_fxFogIntensityForSky; // 0x1DC
		::System::Boolean _VolPreVal_fxVolumetricFogIntensity_overrideState; // 0x1E0
		::System::Single _VolPreVal_fxVolumetricFogIntensity; // 0x1E4
		::System::Boolean _VolPreVal_PPFogEnable_overrideState; // 0x1E8
		::System::Boolean _VolPreVal_PPFogEnable; // 0x1E9
		::System::Boolean _VolPreVal_PPFogStartDistance_overrideState; // 0x1EA
		::System::Single _VolPreVal_PPFogStartDistance; // 0x1EC
		::System::Boolean _VolPreVal_PPFogEndDistance_overrideState; // 0x1F0
		::System::Single _VolPreVal_PPFogEndDistance; // 0x1F4
		::System::Boolean _VolPreVal_PPFogEnd2Distance_overrideState; // 0x1F8
		::System::Single _VolPreVal_PPFogEnd2Distance; // 0x1FC
		::System::Boolean _VolPreVal_PPFogColor_overrideState; // 0x200
		::UnityEngine::Color _VolPreVal_PPFogColor; // 0x204
		::System::Boolean _VolPreVal_PPFogMaxDensity_overrideState; // 0x214
		::System::Single _VolPreVal_PPFogMaxDensity; // 0x218
		::System::Boolean _VolPreVal_fxFogIntensityForSceneAndChar_overrideState; // 0x21C
		::System::Single _VolPreVal_fxFogIntensityForSceneAndChar; // 0x220
		::System::Boolean _VolPreVal_fxFogFixFxFogFinalColorANotWork_overrideState; // 0x224
		::System::Boolean _VolPreVal_fxFogFixFxFogFinalColorANotWork; // 0x225
		::System::Boolean _VolPreVal_fxFogKeepCharFogSameAsScene_overrideState; // 0x226
		::System::Boolean _VolPreVal_fxFogKeepCharFogSameAsScene; // 0x227
		::System::Single _TimelineCurveFirstVal_fxFogStart; // 0x228
		::System::Single _TimelineCurveLastVal_fxFogStart; // 0x22C
		::UnityEngine::Color _TimelineCurveFirstVal_fxFogStartColor; // 0x230
		::UnityEngine::Color _TimelineCurveLastVal_fxFogStartColor; // 0x240
		::System::Single _TimelineCurveFirstVal_fxFogDistance; // 0x250
		::System::Single _TimelineCurveLastVal_fxFogDistance; // 0x254
		::UnityEngine::Color _TimelineCurveFirstVal_fxFogEndColor; // 0x258
		::UnityEngine::Color _TimelineCurveLastVal_fxFogEndColor; // 0x268
		::System::Single _TimelineCurveFirstVal_fxFogDistance2; // 0x278
		::System::Single _TimelineCurveLastVal_fxFogDistance2; // 0x27C
		::UnityEngine::Color _TimelineCurveFirstVal_fxFogFinalColor; // 0x280
		::UnityEngine::Color _TimelineCurveLastVal_fxFogFinalColor; // 0x290
		::System::Boolean _TimelineCurveFirstVal_fxFogForCharacter; // 0x2A0
		::System::Boolean _TimelineCurveLastVal_fxFogForCharacter; // 0x2A1
		::System::Single _TimelineCurveFirstVal_fxFogStartForChar; // 0x2A4
		::System::Single _TimelineCurveLastVal_fxFogStartForChar; // 0x2A8
		::System::Single _TimelineCurveFirstVal_fxFogDistanceForChar; // 0x2AC
		::System::Single _TimelineCurveLastVal_fxFogDistanceForChar; // 0x2B0
		::System::Single _TimelineCurveFirstVal_fxFogIntensityForSky; // 0x2B4
		::System::Single _TimelineCurveLastVal_fxFogIntensityForSky; // 0x2B8
		::System::Single _TimelineCurveFirstVal_fxVolumetricFogIntensity; // 0x2BC
		::System::Single _TimelineCurveLastVal_fxVolumetricFogIntensity; // 0x2C0
		::System::Boolean _TimelineCurveFirstVal_PPFogEnable; // 0x2C4
		::System::Boolean _TimelineCurveLastVal_PPFogEnable; // 0x2C5
		::System::Single _TimelineCurveFirstVal_PPFogStartDistance; // 0x2C8
		::System::Single _TimelineCurveLastVal_PPFogStartDistance; // 0x2CC
		::System::Single _TimelineCurveFirstVal_PPFogEndDistance; // 0x2D0
		::System::Single _TimelineCurveLastVal_PPFogEndDistance; // 0x2D4
		::System::Single _TimelineCurveFirstVal_PPFogEnd2Distance; // 0x2D8
		::System::Single _TimelineCurveLastVal_PPFogEnd2Distance; // 0x2DC
		::UnityEngine::Color _TimelineCurveFirstVal_PPFogColor; // 0x2E0
		::UnityEngine::Color _TimelineCurveLastVal_PPFogColor; // 0x2F0
		::System::Single _TimelineCurveFirstVal_PPFogMaxDensity; // 0x300
		::System::Single _TimelineCurveLastVal_PPFogMaxDensity; // 0x304
		::System::Single _TimelineCurveFirstVal_fxFogIntensityForSceneAndChar; // 0x308
		::System::Single _TimelineCurveLastVal_fxFogIntensityForSceneAndChar; // 0x30C
		::System::Boolean _TimelineCurveFirstVal_fxFogFixFxFogFinalColorANotWork; // 0x310
		::System::Boolean _TimelineCurveLastVal_fxFogFixFxFogFinalColorANotWork; // 0x311
		::System::Boolean _TimelineCurveFirstVal_fxFogKeepCharFogSameAsScene; // 0x312
		::System::Boolean _TimelineCurveLastVal_fxFogKeepCharFogSameAsScene; // 0x313
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogOverrideCustomData_FieldHandleType; // 0x314
		::System::Boolean ESPP_fxFogOverrideCustomData; // 0x318
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFog_FieldHandleType; // 0x31C
		::System::Boolean ESPP_fxFog; // 0x320
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogStart_FieldHandleType; // 0x324
		::System::Boolean ESPP_fxFogStart_UseIt; // 0x328
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogStart; // 0x330
		::System::Boolean ESPP_fxFogStart_EnableFade; // 0x338
		::System::Boolean ESPP_fxFogStart_EnableOverrideDefaultValue; // 0x339
		::System::Single ESPP_fxFogStart_OverrideDefaultValue; // 0x33C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogStartColor_FieldHandleType; // 0x340
		::System::Boolean ESPP_fxFogStartColor_UseIt; // 0x344
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxFogStartColor; // 0x348
		::System::Boolean ESPP_fxFogStartColor_EnableFade; // 0x350
		::System::Boolean ESPP_fxFogStartColor_EnableOverrideDefaultValue; // 0x351
		::UnityEngine::Color ESPP_fxFogStartColor_OverrideDefaultValue; // 0x354
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogDistance_FieldHandleType; // 0x364
		::System::Boolean ESPP_fxFogDistance_UseIt; // 0x368
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogDistance; // 0x370
		::System::Boolean ESPP_fxFogDistance_EnableFade; // 0x378
		::System::Boolean ESPP_fxFogDistance_EnableOverrideDefaultValue; // 0x379
		::System::Single ESPP_fxFogDistance_OverrideDefaultValue; // 0x37C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogEndColor_FieldHandleType; // 0x380
		::System::Boolean ESPP_fxFogEndColor_UseIt; // 0x384
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxFogEndColor; // 0x388
		::System::Boolean ESPP_fxFogEndColor_EnableFade; // 0x390
		::System::Boolean ESPP_fxFogEndColor_EnableOverrideDefaultValue; // 0x391
		::UnityEngine::Color ESPP_fxFogEndColor_OverrideDefaultValue; // 0x394
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogDistance2_FieldHandleType; // 0x3A4
		::System::Boolean ESPP_fxFogDistance2_UseIt; // 0x3A8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogDistance2; // 0x3B0
		::System::Boolean ESPP_fxFogDistance2_EnableFade; // 0x3B8
		::System::Boolean ESPP_fxFogDistance2_EnableOverrideDefaultValue; // 0x3B9
		::System::Single ESPP_fxFogDistance2_OverrideDefaultValue; // 0x3BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogFinalColor_FieldHandleType; // 0x3C0
		::System::Boolean ESPP_fxFogFinalColor_UseIt; // 0x3C4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_fxFogFinalColor; // 0x3C8
		::System::Boolean ESPP_fxFogFinalColor_EnableFade; // 0x3D0
		::System::Boolean ESPP_fxFogFinalColor_EnableOverrideDefaultValue; // 0x3D1
		::UnityEngine::Color ESPP_fxFogFinalColor_OverrideDefaultValue; // 0x3D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogForCharacter_FieldHandleType; // 0x3E4
		::System::Boolean ESPP_fxFogForCharacter_UseIt; // 0x3E8
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogForCharacter; // 0x3F0
		::System::Boolean ESPP_fxFogForCharacter_EnableFade; // 0x3F8
		::System::Boolean ESPP_fxFogForCharacter_EnableOverrideDefaultValue; // 0x3F9
		::System::Boolean ESPP_fxFogForCharacter_OverrideDefaultValue; // 0x3FA
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogStartForChar_FieldHandleType; // 0x3FC
		::System::Boolean ESPP_fxFogStartForChar_UseIt; // 0x400
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogStartForChar; // 0x408
		::System::Boolean ESPP_fxFogStartForChar_EnableFade; // 0x410
		::System::Boolean ESPP_fxFogStartForChar_EnableOverrideDefaultValue; // 0x411
		::System::Single ESPP_fxFogStartForChar_OverrideDefaultValue; // 0x414
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogDistanceForChar_FieldHandleType; // 0x418
		::System::Boolean ESPP_fxFogDistanceForChar_UseIt; // 0x41C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogDistanceForChar; // 0x420
		::System::Boolean ESPP_fxFogDistanceForChar_EnableFade; // 0x428
		::System::Boolean ESPP_fxFogDistanceForChar_EnableOverrideDefaultValue; // 0x429
		::System::Single ESPP_fxFogDistanceForChar_OverrideDefaultValue; // 0x42C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogIntensityForSky_FieldHandleType; // 0x430
		::System::Boolean ESPP_fxFogIntensityForSky_UseIt; // 0x434
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogIntensityForSky; // 0x438
		::System::Boolean ESPP_fxFogIntensityForSky_EnableFade; // 0x440
		::System::Boolean ESPP_fxFogIntensityForSky_EnableOverrideDefaultValue; // 0x441
		::System::Single ESPP_fxFogIntensityForSky_OverrideDefaultValue; // 0x444
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxVolumetricFogIntensity_FieldHandleType; // 0x448
		::System::Boolean ESPP_fxVolumetricFogIntensity_UseIt; // 0x44C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxVolumetricFogIntensity; // 0x450
		::System::Boolean ESPP_fxVolumetricFogIntensity_EnableFade; // 0x458
		::System::Boolean ESPP_fxVolumetricFogIntensity_EnableOverrideDefaultValue; // 0x459
		::System::Single ESPP_fxVolumetricFogIntensity_OverrideDefaultValue; // 0x45C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogEnable_FieldHandleType; // 0x460
		::System::Boolean ESPP_PPFogEnable_UseIt; // 0x464
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_PPFogEnable; // 0x468
		::System::Boolean ESPP_PPFogEnable_EnableFade; // 0x470
		::System::Boolean ESPP_PPFogEnable_EnableOverrideDefaultValue; // 0x471
		::System::Boolean ESPP_PPFogEnable_OverrideDefaultValue; // 0x472
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogStartDistance_FieldHandleType; // 0x474
		::System::Boolean ESPP_PPFogStartDistance_UseIt; // 0x478
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogStartDistance; // 0x480
		::System::Boolean ESPP_PPFogStartDistance_EnableFade; // 0x488
		::System::Boolean ESPP_PPFogStartDistance_EnableOverrideDefaultValue; // 0x489
		::System::Single ESPP_PPFogStartDistance_OverrideDefaultValue; // 0x48C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogEndDistance_FieldHandleType; // 0x490
		::System::Boolean ESPP_PPFogEndDistance_UseIt; // 0x494
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogEndDistance; // 0x498
		::System::Boolean ESPP_PPFogEndDistance_EnableFade; // 0x4A0
		::System::Boolean ESPP_PPFogEndDistance_EnableOverrideDefaultValue; // 0x4A1
		::System::Single ESPP_PPFogEndDistance_OverrideDefaultValue; // 0x4A4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogEnd2Distance_FieldHandleType; // 0x4A8
		::System::Boolean ESPP_PPFogEnd2Distance_UseIt; // 0x4AC
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogEnd2Distance; // 0x4B0
		::System::Boolean ESPP_PPFogEnd2Distance_EnableFade; // 0x4B8
		::System::Boolean ESPP_PPFogEnd2Distance_EnableOverrideDefaultValue; // 0x4B9
		::System::Single ESPP_PPFogEnd2Distance_OverrideDefaultValue; // 0x4BC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogColor_FieldHandleType; // 0x4C0
		::System::Boolean ESPP_PPFogColor_UseIt; // 0x4C4
		::MoleMole::EffectSimulate::ColorKeyframeCurve* ESPP_PPFogColor; // 0x4C8
		::System::Boolean ESPP_PPFogColor_EnableFade; // 0x4D0
		::System::Boolean ESPP_PPFogColor_EnableOverrideDefaultValue; // 0x4D1
		::UnityEngine::Color ESPP_PPFogColor_OverrideDefaultValue; // 0x4D4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_PPFogMaxDensity_FieldHandleType; // 0x4E4
		::System::Boolean ESPP_PPFogMaxDensity_UseIt; // 0x4E8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_PPFogMaxDensity; // 0x4F0
		::System::Boolean ESPP_PPFogMaxDensity_EnableFade; // 0x4F8
		::System::Boolean ESPP_PPFogMaxDensity_EnableOverrideDefaultValue; // 0x4F9
		::System::Single ESPP_PPFogMaxDensity_OverrideDefaultValue; // 0x4FC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogIntensityForSceneAndChar_FieldHandleType; // 0x500
		::System::Boolean ESPP_fxFogIntensityForSceneAndChar_UseIt; // 0x504
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_fxFogIntensityForSceneAndChar; // 0x508
		::System::Boolean ESPP_fxFogIntensityForSceneAndChar_EnableFade; // 0x510
		::System::Boolean ESPP_fxFogIntensityForSceneAndChar_EnableOverrideDefaultValue; // 0x511
		::System::Single ESPP_fxFogIntensityForSceneAndChar_OverrideDefaultValue; // 0x514
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogFixFxFogFinalColorANotWork_FieldHandleType; // 0x518
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_UseIt; // 0x51C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogFixFxFogFinalColorANotWork; // 0x520
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_EnableFade; // 0x528
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_EnableOverrideDefaultValue; // 0x529
		::System::Boolean ESPP_fxFogFixFxFogFinalColorANotWork_OverrideDefaultValue; // 0x52A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_fxFogKeepCharFogSameAsScene_FieldHandleType; // 0x52C
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_UseIt; // 0x530
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_fxFogKeepCharFogSameAsScene; // 0x538
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_EnableFade; // 0x540
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_EnableOverrideDefaultValue; // 0x541
		::System::Boolean ESPP_fxFogKeepCharFogSameAsScene_OverrideDefaultValue; // 0x542

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_A6544B958241856F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A6544B958241856F_OFFSET))(this);
		}

		::System::Void Method_5_D68547FF19A170E2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D68547FF19A170E2_OFFSET))(this);
		}

		::System::Void Method_5_25CD86BF8626C8D9(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_25CD86BF8626C8D9_OFFSET))(this, a1);
		}

		::System::Void Method_5_594D45A47A873869(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_594D45A47A873869_OFFSET))(this, a1);
		}

		::System::Void Method_5_D3694D678C874488(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D3694D678C874488_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8D6879CAA76F6588()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_8D6879CAA76F6588_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_76ECC59BC7430042_OFFSET))(this, a1);
		}

		::System::Void Method_5_6BA7BB45F0BA72F4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_6BA7BB45F0BA72F4_OFFSET))(this);
		}

		::System::Void Method_5_76ECC59BC7430042_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_76ECC59BC7430042_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFXFOG_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}
	};
}
