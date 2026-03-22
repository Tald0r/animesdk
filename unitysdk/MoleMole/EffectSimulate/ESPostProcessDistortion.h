#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Vector3.h"

namespace MoleMole::Config { class ConfigEntityDistortionEffects; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class BoolKeyframeCurve; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class Distortion; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x8F68960)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0x8F68240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x8F68810)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3021F634E77C58A0_OFFSET UNITYSDK_OFFSET(0x8F647F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_33AEB8F024CE4DC0_OFFSET UNITYSDK_OFFSET(0x8F660E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x8F68880)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x8F68890)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x8F67E40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3DA91C9B57824EE6_OFFSET UNITYSDK_OFFSET(0x8F63D20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x8F67D40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0x8F67C00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x8F68120)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x8F68010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x8F67F90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0x8F68450)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x8F68920)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x8F68940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0x8F68970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_65BB8F0F1E258993_1_OFFSET UNITYSDK_OFFSET(0x8F67180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0x8F66B50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x8F63950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0x8F64560)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x8F68930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x8F67EA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0x8F68090)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x8F67DB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x8F679D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x8F68750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x8F67F30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x8F68980)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x8F688F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x8F678C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x8F68900)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0x8F68180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x8F68710)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x8F687B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x8F63AE0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x8F67CD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x8F68990)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x8F689A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x8F68950)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x8F68910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0x8F63B40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_F8F1E3D43C912F88_OFFSET UNITYSDK_OFFSET(0x8F677B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET UNITYSDK_OFFSET(0x8F68510)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessDistortion_TypeDefinitionIndex = 64004;

	class ESPostProcessDistortion : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::Distortion*>
	{
	public:
		::MoleMole::Config::ConfigEntityDistortionEffects* m_stAsset; // 0xB0
		::System::Single _DefaultIntensity; // 0xB8
		::System::Single _DefaultSeparateRGBIntensity; // 0xBC
		::System::Int32 _VolDefault_downScaleFactor; // 0xC0
		::System::Single _VolDefault_intensity; // 0xC4
		::UnityEngine::Vector3 _VolDefault_rgbShift; // 0xC8
		::System::Single _VolDefault_separateRGBIntensity; // 0xD4
		::System::Boolean _VolDefault_forceActive; // 0xD8
		::System::Boolean _VolPreVal_downScaleFactor_overrideState; // 0xD9
		::System::Int32 _VolPreVal_downScaleFactor; // 0xDC
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xE0
		::System::Single _VolPreVal_intensity; // 0xE4
		::System::Boolean _VolPreVal_rgbShift_overrideState; // 0xE8
		::UnityEngine::Vector3 _VolPreVal_rgbShift; // 0xEC
		::System::Boolean _VolPreVal_separateRGBIntensity_overrideState; // 0xF8
		::System::Single _VolPreVal_separateRGBIntensity; // 0xFC
		::System::Boolean _VolPreVal_forceActive_overrideState; // 0x100
		::System::Boolean _VolPreVal_forceActive; // 0x101
		::System::Single _TimelineCurveFirstVal_intensity; // 0x104
		::System::Single _TimelineCurveLastVal_intensity; // 0x108
		::System::Single _TimelineCurveFirstVal_separateRGBIntensity; // 0x10C
		::System::Single _TimelineCurveLastVal_separateRGBIntensity; // 0x110
		::System::Boolean _TimelineCurveFirstVal_forceActive; // 0x114
		::System::Boolean _TimelineCurveLastVal_forceActive; // 0x115
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downScaleFactor_FieldHandleType; // 0x118
		::System::Int32 ESPP_downScaleFactor; // 0x11C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x120
		::System::Boolean ESPP_intensity_UseIt; // 0x124
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x128
		::System::Boolean ESPP_intensity_EnableFade; // 0x130
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x131
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_rgbShift_FieldHandleType; // 0x138
		::UnityEngine::Vector3 ESPP_rgbShift; // 0x13C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_separateRGBIntensity_FieldHandleType; // 0x148
		::System::Boolean ESPP_separateRGBIntensity_UseIt; // 0x14C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_separateRGBIntensity; // 0x150
		::System::Boolean ESPP_separateRGBIntensity_EnableFade; // 0x158
		::System::Boolean ESPP_separateRGBIntensity_EnableOverrideDefaultValue; // 0x159
		::System::Single ESPP_separateRGBIntensity_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_forceActive_FieldHandleType; // 0x160
		::System::Boolean ESPP_forceActive_UseIt; // 0x164
		::MoleMole::EffectSimulate::BoolKeyframeCurve* ESPP_forceActive; // 0x168
		::System::Boolean ESPP_forceActive_EnableFade; // 0x170
		::System::Boolean ESPP_forceActive_EnableOverrideDefaultValue; // 0x171
		::System::Boolean ESPP_forceActive_OverrideDefaultValue; // 0x172

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_3DA91C9B57824EE6()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3DA91C9B57824EE6_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_3021F634E77C58A0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3021F634E77C58A0_OFFSET))(this, a1);
		}

		::System::Void Method_5_33AEB8F024CE4DC0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_33AEB8F024CE4DC0_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_65BB8F0F1E258993_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_F8F1E3D43C912F88()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_F8F1E3D43C912F88_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_B86122B0EE4F8679(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B86122B0EE4F8679_OFFSET))(this, a1);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_52CA0F45BC3414DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_52CA0F45BC3414DC_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSDISTORTION_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}
	};
}
