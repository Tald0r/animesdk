#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Color.h"
#include "unitysdk/UnityEngine/Vector2.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigEntityVignettes; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace MoleMole::EffectSimulate { class Vector2KeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Vignette; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xCCCD990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xCCCD9A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_2FA22A822BDD19EE_OFFSET UNITYSDK_OFFSET(0xCCCD0A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xCCCD870)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xCCCDA60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCCCCD60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0xCCCD180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xCCCCC60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xCCCCB20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xCCCD040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xCCCCF30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xCCCCEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_521267F2AEE4A422_OFFSET UNITYSDK_OFFSET(0xCCCAC00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xCCCD920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xCCCD8F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xCCCD880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_63E3E26A3D57F57D_OFFSET UNITYSDK_OFFSET(0xCCC95B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xCCC8730)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xCCC9270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xCCCD850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xCCCCDC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xCCCCFB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xCCCCCD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_98B37EE2C09006BA_OFFSET UNITYSDK_OFFSET(0xCCCC670)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xCCCC8B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xCCCD890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCCCCE50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xCCCD860)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xCCCD7D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xCCCC7A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xCCCD840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xCCCDA10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCCCD7E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCCC88E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xCCCCBF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xCCCD910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xCCCD930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E05ADF64DE351167_OFFSET UNITYSDK_OFFSET(0xCCCD440)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xCCCDA50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xCCCD900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xCCC8940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EEED34E9AAC26D51_OFFSET UNITYSDK_OFFSET(0xCCC8B20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_1_OFFSET UNITYSDK_OFFSET(0xCCCBE10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_OFFSET UNITYSDK_OFFSET(0xCCCB5B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET UNITYSDK_OFFSET(0xCCCD520)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessVignette_TypeDefinitionIndex = 67287;

	class ESPostProcessVignette : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Vignette*>
	{
	public:
		::MoleMole::Config::ConfigEntityVignettes* m_stAsset; // 0xB0
		::UnityEngine::Color _DefaultColor; // 0xB8
		::UnityEngine::Vector2 _DefaultCenter; // 0xC8
		::System::Single _DefaultIntensity; // 0xD0
		::System::Single _DefaultSmoothness; // 0xD4
		::System::Boolean _DefaultRounded; // 0xD8
		::UnityEngine::Color _VolDefault_color; // 0xDC
		::UnityEngine::Vector2 _VolDefault_center; // 0xEC
		::System::Single _VolDefault_intensity; // 0xF4
		::System::Single _VolDefault_smoothness; // 0xF8
		::System::Boolean _VolDefault_rounded; // 0xFC
		::System::Boolean _VolPreVal_color_overrideState; // 0xFD
		::UnityEngine::Color _VolPreVal_color; // 0x100
		::System::Boolean _VolPreVal_center_overrideState; // 0x110
		::UnityEngine::Vector2 _VolPreVal_center; // 0x114
		::System::Boolean _VolPreVal_intensity_overrideState; // 0x11C
		::System::Single _VolPreVal_intensity; // 0x120
		::System::Boolean _VolPreVal_smoothness_overrideState; // 0x124
		::System::Single _VolPreVal_smoothness; // 0x128
		::System::Boolean _VolPreVal_rounded_overrideState; // 0x12C
		::System::Boolean _VolPreVal_rounded; // 0x12D
		::UnityEngine::Vector2 _TimelineCurveFirstVal_center; // 0x130
		::UnityEngine::Vector2 _TimelineCurveLastVal_center; // 0x138
		::System::Single _TimelineCurveFirstVal_intensity; // 0x140
		::System::Single _TimelineCurveLastVal_intensity; // 0x144
		::System::Single _TimelineCurveFirstVal_smoothness; // 0x148
		::System::Single _TimelineCurveLastVal_smoothness; // 0x14C
		::System::Boolean _TimelineCurveFirstVal_rounded; // 0x150
		::System::Boolean _TimelineCurveLastVal_rounded; // 0x151
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_color_FieldHandleType; // 0x154
		::UnityEngine::Color ESPP_color; // 0x158
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_center_FieldHandleType; // 0x168
		::System::Boolean ESPP_center_UseIt; // 0x16C
		::MoleMole::EffectSimulate::Vector2KeyframeCurve* ESPP_center; // 0x170
		::System::Boolean ESPP_center_EnableFade; // 0x178
		::System::Boolean ESPP_center_EnableOverrideDefaultValue; // 0x179
		::UnityEngine::Vector2 ESPP_center_OverrideDefaultValue; // 0x17C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x184
		::System::Boolean ESPP_intensity_UseIt; // 0x188
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x190
		::System::Boolean ESPP_intensity_EnableFade; // 0x198
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x199
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x19C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_smoothness_FieldHandleType; // 0x1A0
		::System::Boolean ESPP_smoothness_UseIt; // 0x1A4
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_smoothness; // 0x1A8
		::System::Boolean ESPP_smoothness_EnableFade; // 0x1B0
		::System::Boolean ESPP_smoothness_EnableOverrideDefaultValue; // 0x1B1
		::System::Single ESPP_smoothness_OverrideDefaultValue; // 0x1B4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rounded_FieldHandleType; // 0x1B8
		::System::Boolean ESPP_rounded_UseIt; // 0x1BC
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_rounded; // 0x1C0
		::System::Boolean ESPP_rounded_EnableFade; // 0x1C8
		::System::Boolean ESPP_rounded_EnableOverrideDefaultValue; // 0x1C9
		::System::Boolean ESPP_rounded_OverrideDefaultValue; // 0x1CA

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_EEED34E9AAC26D51()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_EEED34E9AAC26D51_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_63E3E26A3D57F57D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_63E3E26A3D57F57D_OFFSET))(this, a1);
		}

		::System::Void Method_5_521267F2AEE4A422(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_521267F2AEE4A422_OFFSET))(this, a1);
		}

		::System::Void Method_5_F918726BB6E76D4D(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_OFFSET))(this, a1);
		}

		::System::Void Method_5_F918726BB6E76D4D_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_F918726BB6E76D4D_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_98B37EE2C09006BA()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_98B37EE2C09006BA_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_2FA22A822BDD19EE(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_2FA22A822BDD19EE_OFFSET))(this, a1);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_E05ADF64DE351167(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E05ADF64DE351167_OFFSET))(this, a1);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSVIGNETTE_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}
	};
}
