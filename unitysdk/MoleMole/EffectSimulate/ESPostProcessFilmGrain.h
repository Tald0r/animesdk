#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"
#include "unitysdk/UnityEngine/Rendering/Universal/FilmGrainLookup.h"

namespace MoleMole::Config { class ConfigEntityFilmGrains; }
namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine::Rendering::Universal { class FilmGrain; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0x17530410)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_24B2CA816EFA1FA5_OFFSET UNITYSDK_OFFSET(0x17530010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0x17530260)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_33ACA6CB2ABC73F7_OFFSET UNITYSDK_OFFSET(0x1752FEB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0x175303B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0x175302D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0x1752FAC0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_41A074549EF25F63_OFFSET UNITYSDK_OFFSET(0x1752D380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0x1752F9E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0x1752F8A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_459C79521BFE514E_OFFSET UNITYSDK_OFFSET(0x1752D910)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0x1752FDA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0x1752FC90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0x1752FC10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0x17530230)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0x17530340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0x17530500)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0x1752D1C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0x175304F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0x1752FD10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0x1752FB20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_8E7482C252877E8A_1_OFFSET UNITYSDK_OFFSET(0x1752F050)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_8E7482C252877E8A_OFFSET UNITYSDK_OFFSET(0x1752EBD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0x1752F6D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0x17530430)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0x1752FBB0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0x17530420)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0x17530330)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B1983B8E0FEB5BBD_1_OFFSET UNITYSDK_OFFSET(0x1752E630)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B1983B8E0FEB5BBD_OFFSET UNITYSDK_OFFSET(0x1752DAF0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0x1752F5C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0x175303C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_BAEE5DE0AF1ED2B0_OFFSET UNITYSDK_OFFSET(0x1752FE00)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0x175303D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0x17530350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0x1752D320)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0x1752F970)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0x17530240)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_DA1BF2C227DC3D86_1_OFFSET UNITYSDK_OFFSET(0x17530490)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0x1752FA50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0x17530510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0x17530250)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_EBEE0D0A222A8264_OFFSET UNITYSDK_OFFSET(0x1752F4D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_F53BAAE38A584428_OFFSET UNITYSDK_OFFSET(0x1752D510)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN__CTOR_OFFSET UNITYSDK_OFFSET(0x175300C0)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessFilmGrain_TypeDefinitionIndex = 51350;

	class ESPostProcessFilmGrain : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::FilmGrain*>
	{
	public:
		::MoleMole::Config::ConfigEntityFilmGrains* m_stAsset; // 0xB0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _DefaultType; // 0xB8
		::System::Single _DefaultIntensity; // 0xBC
		::System::Single _DefaultResponse; // 0xC0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _VolDefault_type; // 0xC4
		::System::Single _VolDefault_intensity; // 0xC8
		::System::Single _VolDefault_response; // 0xCC
		::System::Boolean _VolPreVal_type_overrideState; // 0xD0
		::UnityEngine::Rendering::Universal::FilmGrainLookup _VolPreVal_type; // 0xD4
		::System::Boolean _VolPreVal_intensity_overrideState; // 0xD8
		::System::Single _VolPreVal_intensity; // 0xDC
		::System::Boolean _VolPreVal_response_overrideState; // 0xE0
		::System::Single _VolPreVal_response; // 0xE4
		::System::Single _TimelineCurveFirstVal_intensity; // 0xE8
		::System::Single _TimelineCurveLastVal_intensity; // 0xEC
		::System::Single _TimelineCurveFirstVal_response; // 0xF0
		::System::Single _TimelineCurveLastVal_response; // 0xF4
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_type_FieldHandleType; // 0xF8
		::UnityEngine::Rendering::Universal::FilmGrainLookup ESPP_type; // 0xFC
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_intensity_FieldHandleType; // 0x100
		::System::Boolean ESPP_intensity_UseIt; // 0x104
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_intensity; // 0x108
		::System::Boolean ESPP_intensity_EnableFade; // 0x110
		::System::Boolean ESPP_intensity_EnableOverrideDefaultValue; // 0x111
		::System::Single ESPP_intensity_OverrideDefaultValue; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_response_FieldHandleType; // 0x118
		::System::Boolean ESPP_response_UseIt; // 0x11C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_response; // 0x120
		::System::Boolean ESPP_response_EnableFade; // 0x128
		::System::Boolean ESPP_response_EnableOverrideDefaultValue; // 0x129
		::System::Single ESPP_response_OverrideDefaultValue; // 0x12C

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_41A074549EF25F63()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_41A074549EF25F63_OFFSET))(this);
		}

		::System::Void Method_5_F53BAAE38A584428()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_F53BAAE38A584428_OFFSET))(this);
		}

		::System::Void Method_5_459C79521BFE514E(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_459C79521BFE514E_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1983B8E0FEB5BBD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B1983B8E0FEB5BBD_OFFSET))(this, a1);
		}

		::System::Void Method_5_B1983B8E0FEB5BBD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B1983B8E0FEB5BBD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_8E7482C252877E8A(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_8E7482C252877E8A_OFFSET))(this, a1);
		}

		::System::Void Method_5_8E7482C252877E8A_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_8E7482C252877E8A_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_EBEE0D0A222A8264()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_EBEE0D0A222A8264_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_BAEE5DE0AF1ED2B0(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_BAEE5DE0AF1ED2B0_OFFSET))(this, a1);
		}

		::System::Void Method_5_33ACA6CB2ABC73F7()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_33ACA6CB2ABC73F7_OFFSET))(this);
		}

		::System::Void Method_5_24B2CA816EFA1FA5(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_24B2CA816EFA1FA5_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_DA1BF2C227DC3D86_1_OFFSET))(this);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSFILMGRAIN_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}
	};
}
