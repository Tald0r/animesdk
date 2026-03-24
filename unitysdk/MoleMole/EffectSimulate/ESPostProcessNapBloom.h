#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigNapBlooms; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class NapBloom; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_0AD139A96804E15E_OFFSET UNITYSDK_OFFSET(0xB88D750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xB88DCF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xB88DD10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_31F1C58AB372DEB4_OFFSET UNITYSDK_OFFSET(0xB889B60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xB88DB90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xB88DC60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xB88CFE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xB88CF00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xB88CDC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4E608ED8CF3CBCB8_OFFSET UNITYSDK_OFFSET(0xB88AF30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xB88D2C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xB88D1B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xB88D130)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xB88DCC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xB88DDE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xB88DB70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xB888D50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xB889760)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xB88DD80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xB88D230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xB88D040)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xB88CB30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xB88DBA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xB88D0D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xB88DE50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xB88DB80)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xB88CA20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xB88DD00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xB88DDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xB88DC00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xB888F30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xB88CE90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xB88DCD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D97CDF059CC668F7_OFFSET UNITYSDK_OFFSET(0xB88D320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0xB88DDF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xB88CF70)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xB88DD90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xB88DCE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0xB88C8C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EDFD49C942C75D6C_1_OFFSET UNITYSDK_OFFSET(0xB88D420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xB888F90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EE2957687AFE92A5_1_OFFSET UNITYSDK_OFFSET(0xB88C080)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EE2957687AFE92A5_OFFSET UNITYSDK_OFFSET(0xB88B840)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0xB889180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM__CTOR_OFFSET UNITYSDK_OFFSET(0xB88D850)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessNapBloom_TypeDefinitionIndex = 68820;

	class ESPostProcessNapBloom : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::NapBloom*>
	{
	public:
		::MoleMole::Config::ConfigNapBlooms* m_stAsset; // 0xB0
		::System::Single _DefaultGlareScaler; // 0xB8
		::System::Single _DefaultGlareThreshold; // 0xBC
		::System::Single _DefaultGlareIntensity; // 0xC0
		::System::Single _VolDefault_glareScaler; // 0xC4
		::System::Single _VolDefault_glareThreshold; // 0xC8
		::System::Single _VolDefault_glareIntensity; // 0xCC
		::System::Single _VolDefault_xBlurIntensity; // 0xD0
		::System::Single _VolDefault_yBlurIntensity; // 0xD4
		::System::Boolean _VolPreVal_glareScaler_overrideState; // 0xD8
		::System::Single _VolPreVal_glareScaler; // 0xDC
		::System::Boolean _VolPreVal_glareThreshold_overrideState; // 0xE0
		::System::Single _VolPreVal_glareThreshold; // 0xE4
		::System::Boolean _VolPreVal_glareIntensity_overrideState; // 0xE8
		::System::Single _VolPreVal_glareIntensity; // 0xEC
		::System::Boolean _VolPreVal_xBlurIntensity_overrideState; // 0xF0
		::System::Single _VolPreVal_xBlurIntensity; // 0xF4
		::System::Boolean _VolPreVal_yBlurIntensity_overrideState; // 0xF8
		::System::Single _VolPreVal_yBlurIntensity; // 0xFC
		::System::Single _TimelineCurveFirstVal_glareScaler; // 0x100
		::System::Single _TimelineCurveLastVal_glareScaler; // 0x104
		::System::Single _TimelineCurveFirstVal_glareThreshold; // 0x108
		::System::Single _TimelineCurveLastVal_glareThreshold; // 0x10C
		::System::Single _TimelineCurveFirstVal_glareIntensity; // 0x110
		::System::Single _TimelineCurveLastVal_glareIntensity; // 0x114
		::System::Single _TimelineCurveFirstVal_xBlurIntensity; // 0x118
		::System::Single _TimelineCurveLastVal_xBlurIntensity; // 0x11C
		::System::Single _TimelineCurveFirstVal_yBlurIntensity; // 0x120
		::System::Single _TimelineCurveLastVal_yBlurIntensity; // 0x124
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareScaler_FieldHandleType; // 0x128
		::System::Boolean ESPP_glareScaler_UseIt; // 0x12C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareScaler; // 0x130
		::System::Boolean ESPP_glareScaler_EnableFade; // 0x138
		::System::Boolean ESPP_glareScaler_EnableOverrideDefaultValue; // 0x139
		::System::Single ESPP_glareScaler_OverrideDefaultValue; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareThreshold_FieldHandleType; // 0x140
		::System::Boolean ESPP_glareThreshold_UseIt; // 0x144
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareThreshold; // 0x148
		::System::Boolean ESPP_glareThreshold_EnableFade; // 0x150
		::System::Boolean ESPP_glareThreshold_EnableOverrideDefaultValue; // 0x151
		::System::Single ESPP_glareThreshold_OverrideDefaultValue; // 0x154
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_glareIntensity_FieldHandleType; // 0x158
		::System::Boolean ESPP_glareIntensity_UseIt; // 0x15C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_glareIntensity; // 0x160
		::System::Boolean ESPP_glareIntensity_EnableFade; // 0x168
		::System::Boolean ESPP_glareIntensity_EnableOverrideDefaultValue; // 0x169
		::System::Single ESPP_glareIntensity_OverrideDefaultValue; // 0x16C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_xBlurIntensity_FieldHandleType; // 0x170
		::System::Boolean ESPP_xBlurIntensity_UseIt; // 0x174
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_xBlurIntensity; // 0x178
		::System::Boolean ESPP_xBlurIntensity_EnableFade; // 0x180
		::System::Boolean ESPP_xBlurIntensity_EnableOverrideDefaultValue; // 0x181
		::System::Single ESPP_xBlurIntensity_OverrideDefaultValue; // 0x184
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_yBlurIntensity_FieldHandleType; // 0x188
		::System::Boolean ESPP_yBlurIntensity_UseIt; // 0x18C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_yBlurIntensity; // 0x190
		::System::Boolean ESPP_yBlurIntensity_EnableFade; // 0x198
		::System::Boolean ESPP_yBlurIntensity_EnableOverrideDefaultValue; // 0x199
		::System::Single ESPP_yBlurIntensity_OverrideDefaultValue; // 0x19C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_31F1C58AB372DEB4(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_31F1C58AB372DEB4_OFFSET))(this, a1);
		}

		::System::Void Method_5_4E608ED8CF3CBCB8(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4E608ED8CF3CBCB8_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EE2957687AFE92A5_OFFSET))(this, a1);
		}

		::System::Void Method_5_EE2957687AFE92A5_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EE2957687AFE92A5_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBEE0D0A222A8264()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_D97CDF059CC668F7(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D97CDF059CC668F7_OFFSET))(this, a1);
		}

		::System::Void Method_5_EDFD49C942C75D6C_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_EDFD49C942C75D6C_1_OFFSET))(this);
		}

		::System::Void Method_5_0AD139A96804E15E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_0AD139A96804E15E_OFFSET))(this, a1);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_DA1BF2C227DC3D86_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSNAPBLOOM_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}
	};
}
