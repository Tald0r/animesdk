#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"

namespace MoleMole::Config { class ConfigEntityColorAdjustments; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class ColorAdjustments; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xB9D7E90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB9D7F50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_28EB11670A8E5A86_OFFSET UNITYSDK_OFFSET(0xB0C5880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0xB0C6FD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xB9D7EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB9D8030)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB9D6CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xB9D6BD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xB9D6A90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_438300467EDE6B0B_OFFSET UNITYSDK_OFFSET(0xB9D7010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_497833CF065C1894_OFFSET UNITYSDK_OFFSET(0xB9D7190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xB9D6FB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xB9D6EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB9D6E20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xB9D7EE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xB9D7EC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xB9D7EB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_1_OFFSET UNITYSDK_OFFSET(0xB9D5580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_OFFSET UNITYSDK_OFFSET(0xB9D4790)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xB0C5580)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_71456C0B214E6DAC_OFFSET UNITYSDK_OFFSET(0xB9D6370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xB0C6910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB9D7ED0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xB9D6D30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xB9D6F20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB9D6C40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xB9D6650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xB9D7EF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB9D6DC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A4D542D66439C65E_OFFSET UNITYSDK_OFFSET(0xB9D3560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xB9D8020)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xB9D7E40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xB9D6540)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xB9D7E10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xB9D7E50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB9D7FC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB0C5820)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xB9D6B60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xB9D7E00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB9D7DA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xB9D7E30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xB9D7E20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0xB9D7720)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0xB0C5B70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS__CTOR_OFFSET UNITYSDK_OFFSET(0xB9D78A0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessColorAdjustments_TypeDefinitionIndex = 58328;

	class ESPostProcessColorAdjustments : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::ColorAdjustments*>
	{
	public:
		::MoleMole::Config::ConfigEntityColorAdjustments* m_stAsset; // 0xB0
		::System::Single _DefaultPostExposure; // 0xB8
		::System::Single _DefaultContrast; // 0xBC
		::UnityEngine::Color _DefaultColorFilter; // 0xC0
		::System::Single _DefaultHueShift; // 0xD0
		::System::Single _DefaultSaturation; // 0xD4
		::System::Single _DefaultDesaturate; // 0xD8
		::System::Boolean _DefaultApplyLutToSkybox; // 0xDC
		::System::Single _DefaultSkySaturation; // 0xE0
		::System::Single _DefaultSkyContrast; // 0xE4
		::System::Boolean _DefaultKeepVolumetricFogInFrontOfTransparent; // 0xE8
		::System::Boolean _VolDefault_UseSceneDesaturateMask; // 0xE9
		::System::Single _VolDefault_postExposure; // 0xEC
		::System::Single _VolDefault_contrast; // 0xF0
		::UnityEngine::Color _VolDefault_colorFilter; // 0xF4
		::System::Single _VolDefault_hueShift; // 0x104
		::System::Single _VolDefault_saturation; // 0x108
		::System::Single _VolDefault_desaturate; // 0x10C
		::System::Boolean _VolDefault_applyLutToSkybox; // 0x110
		::System::Single _VolDefault_skySaturation; // 0x114
		::System::Single _VolDefault_skyContrast; // 0x118
		::System::Boolean _VolDefault_keepVolumetricFogInFrontOfTransparent; // 0x11C
		::System::Boolean _VolPreVal_UseSceneDesaturateMask_overrideState; // 0x11D
		::System::Boolean _VolPreVal_UseSceneDesaturateMask; // 0x11E
		::System::Boolean _VolPreVal_postExposure_overrideState; // 0x11F
		::System::Single _VolPreVal_postExposure; // 0x120
		::System::Boolean _VolPreVal_contrast_overrideState; // 0x124
		::System::Single _VolPreVal_contrast; // 0x128
		::System::Boolean _VolPreVal_colorFilter_overrideState; // 0x12C
		::UnityEngine::Color _VolPreVal_colorFilter; // 0x130
		::System::Boolean _VolPreVal_hueShift_overrideState; // 0x140
		::System::Single _VolPreVal_hueShift; // 0x144
		::System::Boolean _VolPreVal_saturation_overrideState; // 0x148
		::System::Single _VolPreVal_saturation; // 0x14C
		::System::Boolean _VolPreVal_desaturate_overrideState; // 0x150
		::System::Single _VolPreVal_desaturate; // 0x154
		::System::Boolean _VolPreVal_applyLutToSkybox_overrideState; // 0x158
		::System::Boolean _VolPreVal_applyLutToSkybox; // 0x159
		::System::Boolean _VolPreVal_skySaturation_overrideState; // 0x15A
		::System::Single _VolPreVal_skySaturation; // 0x15C
		::System::Boolean _VolPreVal_skyContrast_overrideState; // 0x160
		::System::Single _VolPreVal_skyContrast; // 0x164
		::System::Boolean _VolPreVal_keepVolumetricFogInFrontOfTransparent_overrideState; // 0x168
		::System::Boolean _VolPreVal_keepVolumetricFogInFrontOfTransparent; // 0x169
		::System::Single _TimelineCurveFirstVal_postExposure; // 0x16C
		::System::Single _TimelineCurveLastVal_postExposure; // 0x170
		::System::Single _TimelineCurveFirstVal_contrast; // 0x174
		::System::Single _TimelineCurveLastVal_contrast; // 0x178
		::System::Single _TimelineCurveFirstVal_hueShift; // 0x17C
		::System::Single _TimelineCurveLastVal_hueShift; // 0x180
		::System::Single _TimelineCurveFirstVal_saturation; // 0x184
		::System::Single _TimelineCurveLastVal_saturation; // 0x188
		::System::Single _TimelineCurveFirstVal_desaturate; // 0x18C
		::System::Single _TimelineCurveLastVal_desaturate; // 0x190
		::System::Boolean _TimelineCurveFirstVal_applyLutToSkybox; // 0x194
		::System::Boolean _TimelineCurveLastVal_applyLutToSkybox; // 0x195
		::System::Single _TimelineCurveFirstVal_skySaturation; // 0x198
		::System::Single _TimelineCurveLastVal_skySaturation; // 0x19C
		::System::Single _TimelineCurveFirstVal_skyContrast; // 0x1A0
		::System::Single _TimelineCurveLastVal_skyContrast; // 0x1A4
		::System::Boolean _TimelineCurveFirstVal_keepVolumetricFogInFrontOfTransparent; // 0x1A8
		::System::Boolean _TimelineCurveLastVal_keepVolumetricFogInFrontOfTransparent; // 0x1A9
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_UseSceneDesaturateMask_FieldHandleType; // 0x1AC
		::System::Boolean ESPP_UseSceneDesaturateMask; // 0x1B0
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_postExposure_FieldHandleType; // 0x1B4
		::System::Boolean ESPP_postExposure_UseIt; // 0x1B8
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_postExposure; // 0x1C0
		::System::Boolean ESPP_postExposure_EnableFade; // 0x1C8
		::System::Boolean ESPP_postExposure_EnableOverrideDefaultValue; // 0x1C9
		::System::Single ESPP_postExposure_OverrideDefaultValue; // 0x1CC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_contrast_FieldHandleType; // 0x1D0
		::System::Boolean ESPP_contrast_UseIt; // 0x1D4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_contrast; // 0x1D8
		::System::Boolean ESPP_contrast_EnableFade; // 0x1E0
		::System::Boolean ESPP_contrast_EnableOverrideDefaultValue; // 0x1E1
		::System::Single ESPP_contrast_OverrideDefaultValue; // 0x1E4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_colorFilter_FieldHandleType; // 0x1E8
		::UnityEngine::Color ESPP_colorFilter; // 0x1EC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_hueShift_FieldHandleType; // 0x1FC
		::System::Boolean ESPP_hueShift_UseIt; // 0x200
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_hueShift; // 0x208
		::System::Boolean ESPP_hueShift_EnableFade; // 0x210
		::System::Boolean ESPP_hueShift_EnableOverrideDefaultValue; // 0x211
		::System::Single ESPP_hueShift_OverrideDefaultValue; // 0x214
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_saturation_FieldHandleType; // 0x218
		::System::Boolean ESPP_saturation_UseIt; // 0x21C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_saturation; // 0x220
		::System::Boolean ESPP_saturation_EnableFade; // 0x228
		::System::Boolean ESPP_saturation_EnableOverrideDefaultValue; // 0x229
		::System::Single ESPP_saturation_OverrideDefaultValue; // 0x22C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_desaturate_FieldHandleType; // 0x230
		::System::Boolean ESPP_desaturate_UseIt; // 0x234
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_desaturate; // 0x238
		::System::Boolean ESPP_desaturate_EnableFade; // 0x240
		::System::Boolean ESPP_desaturate_EnableOverrideDefaultValue; // 0x241
		::System::Single ESPP_desaturate_OverrideDefaultValue; // 0x244
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_applyLutToSkybox_FieldHandleType; // 0x248
		::System::Boolean ESPP_applyLutToSkybox_UseIt; // 0x24C
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_applyLutToSkybox; // 0x250
		::System::Boolean ESPP_applyLutToSkybox_EnableFade; // 0x258
		::System::Boolean ESPP_applyLutToSkybox_EnableOverrideDefaultValue; // 0x259
		::System::Boolean ESPP_applyLutToSkybox_OverrideDefaultValue; // 0x25A
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skySaturation_FieldHandleType; // 0x25C
		::System::Boolean ESPP_skySaturation_UseIt; // 0x260
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skySaturation; // 0x268
		::System::Boolean ESPP_skySaturation_EnableFade; // 0x270
		::System::Boolean ESPP_skySaturation_EnableOverrideDefaultValue; // 0x271
		::System::Single ESPP_skySaturation_OverrideDefaultValue; // 0x274
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_skyContrast_FieldHandleType; // 0x278
		::System::Boolean ESPP_skyContrast_UseIt; // 0x27C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_skyContrast; // 0x280
		::System::Boolean ESPP_skyContrast_EnableFade; // 0x288
		::System::Boolean ESPP_skyContrast_EnableOverrideDefaultValue; // 0x289
		::System::Single ESPP_skyContrast_OverrideDefaultValue; // 0x28C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_keepVolumetricFogInFrontOfTransparent_FieldHandleType; // 0x290
		::System::Boolean ESPP_keepVolumetricFogInFrontOfTransparent_UseIt; // 0x294
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_keepVolumetricFogInFrontOfTransparent; // 0x298
		::System::Boolean ESPP_keepVolumetricFogInFrontOfTransparent_EnableFade; // 0x2A0
		::System::Boolean ESPP_keepVolumetricFogInFrontOfTransparent_EnableOverrideDefaultValue; // 0x2A1
		::System::Boolean ESPP_keepVolumetricFogInFrontOfTransparent_OverrideDefaultValue; // 0x2A2

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_28EB11670A8E5A86()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_28EB11670A8E5A86_OFFSET))(this);
		}

		::System::Void Method_5_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_A4D542D66439C65E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A4D542D66439C65E_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_OFFSET))(this, a1);
		}

		::System::Void Method_5_59791C706EFFC2BA_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_59791C706EFFC2BA_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_71456C0B214E6DAC()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_71456C0B214E6DAC_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_438300467EDE6B0B(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_438300467EDE6B0B_OFFSET))(this, a1);
		}

		::System::Void Method_5_497833CF065C1894()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_497833CF065C1894_OFFSET))(this);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSCOLORADJUSTMENTS_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
