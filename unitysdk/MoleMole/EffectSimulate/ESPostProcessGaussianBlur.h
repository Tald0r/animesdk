#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/Config/ScreenEffectFieldHandleType.h"
#include "unitysdk/MoleMole/Config/ScreenEffectType.h"
#include "unitysdk/MoleMole/EffectSimulate/ESPostProcessBehavior_1.h"

namespace MoleMole::Config { class ConfigEntityScreenEffectBase; }
namespace MoleMole::Config { class ConfigGaussianBlurEffects; }
namespace MoleMole::EffectSimulate { class FloatKeyframeCurve; }
namespace Sirenix::OdinInspector { template <typename T> class ValueDropdownList_1; }
namespace System { class String; }
namespace System { class Type; }
namespace UnityEngine { class ScriptableObject; }
namespace UnityEngine { class Texture; }
namespace UnityEngine::Rendering::Universal { class GaussianBlur; }

#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_1092C5537716905B_OFFSET UNITYSDK_OFFSET(0xCCC21D0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_126AB3935214AA22_OFFSET UNITYSDK_OFFSET(0xCCC3370)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_1283EC0876EAAACF_OFFSET UNITYSDK_OFFSET(0xCCBF010)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_1290EA767C459179_OFFSET UNITYSDK_OFFSET(0xCCC2C50)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2685B6183E614529_OFFSET UNITYSDK_OFFSET(0xCCC3380)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2A99139D13C42A50_1_OFFSET UNITYSDK_OFFSET(0xCCC0D90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2A99139D13C42A50_OFFSET UNITYSDK_OFFSET(0xCCBF930)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET UNITYSDK_OFFSET(0xCCC3400)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET UNITYSDK_OFFSET(0xCCC3280)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_OFFSET UNITYSDK_OFFSET(0xCCC2850)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET UNITYSDK_OFFSET(0xCCC2750)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_43069389B18F0936_OFFSET UNITYSDK_OFFSET(0xCCC2610)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET UNITYSDK_OFFSET(0xCCC2B30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET UNITYSDK_OFFSET(0xCCC2A20)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_OFFSET UNITYSDK_OFFSET(0xCCC29A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_52CA0F45BC3414DC_OFFSET UNITYSDK_OFFSET(0xCCC2E60)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET UNITYSDK_OFFSET(0xCCC3200)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET UNITYSDK_OFFSET(0xCCC31E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_581A5078A2F29034_OFFSET UNITYSDK_OFFSET(0xCCC33F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_65BB8F0F1E258993_1_OFFSET UNITYSDK_OFFSET(0xCCC1C10)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_65BB8F0F1E258993_OFFSET UNITYSDK_OFFSET(0xCCC1650)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_6B72D4EE8C6E907F_OFFSET UNITYSDK_OFFSET(0xCCBEC40)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET UNITYSDK_OFFSET(0xCCBF6A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_832295EC279E5994_OFFSET UNITYSDK_OFFSET(0xCCC3350)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET UNITYSDK_OFFSET(0xCCC28B0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET UNITYSDK_OFFSET(0xCCC2AA0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET UNITYSDK_OFFSET(0xCCC27C0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_99F887AAD84BE668_OFFSET UNITYSDK_OFFSET(0xCCC23F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET UNITYSDK_OFFSET(0xCCC3120)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET UNITYSDK_OFFSET(0xCCC2940)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_1_OFFSET UNITYSDK_OFFSET(0xCCC3190)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_OFFSET UNITYSDK_OFFSET(0xCCC3180)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET UNITYSDK_OFFSET(0xCCC22E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B4596DBEA209120C_OFFSET UNITYSDK_OFFSET(0xCCC3360)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B86122B0EE4F8679_OFFSET UNITYSDK_OFFSET(0xCCC2B90)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET UNITYSDK_OFFSET(0xCCC31A0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET UNITYSDK_OFFSET(0xCCC3210)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_OFFSET UNITYSDK_OFFSET(0xCCBEDD0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET UNITYSDK_OFFSET(0xCCC26E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET UNITYSDK_OFFSET(0xCCC31F0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET UNITYSDK_OFFSET(0xCCC32E0)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET UNITYSDK_OFFSET(0xCCC3340)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET UNITYSDK_OFFSET(0xCCC3270)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_EDFD49C942C75D6C_OFFSET UNITYSDK_OFFSET(0xCCBEE30)
#define MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR__CTOR_OFFSET UNITYSDK_OFFSET(0xCCC2F20)

namespace MoleMole::EffectSimulate
{
	inline static constexpr unsigned int ESPostProcessGaussianBlur_TypeDefinitionIndex = 46352;

	class ESPostProcessGaussianBlur : public ::MoleMole::EffectSimulate::ESPostProcessBehavior_1<::UnityEngine::Rendering::Universal::GaussianBlur*>
	{
	public:
		::MoleMole::Config::ConfigGaussianBlurEffects* m_stAsset; // 0xB0
		::System::Int32 _VolDefault_downSample; // 0xB8
		::System::Single _VolDefault_radius; // 0xBC
		::UnityEngine::Texture* _VolDefault_mask; // 0xC0
		::System::Single _VolDefault_maskTiling; // 0xC8
		::System::Single _VolDefault_maskRotation; // 0xCC
		::System::Boolean _VolPreVal_downSample_overrideState; // 0xD0
		::System::Int32 _VolPreVal_downSample; // 0xD4
		::System::Boolean _VolPreVal_radius_overrideState; // 0xD8
		::System::Single _VolPreVal_radius; // 0xDC
		::System::Boolean _VolPreVal_mask_overrideState; // 0xE0
		::UnityEngine::Texture* _VolPreVal_mask; // 0xE8
		::System::Boolean _VolPreVal_maskTiling_overrideState; // 0xF0
		::System::Single _VolPreVal_maskTiling; // 0xF4
		::System::Boolean _VolPreVal_maskRotation_overrideState; // 0xF8
		::System::Single _VolPreVal_maskRotation; // 0xFC
		::System::Single _TimelineCurveFirstVal_radius; // 0x100
		::System::Single _TimelineCurveLastVal_radius; // 0x104
		::System::Single _TimelineCurveFirstVal_maskTiling; // 0x108
		::System::Single _TimelineCurveLastVal_maskTiling; // 0x10C
		::System::Single _TimelineCurveFirstVal_maskRotation; // 0x110
		::System::Single _TimelineCurveLastVal_maskRotation; // 0x114
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_downSample_FieldHandleType; // 0x118
		::System::Int32 ESPP_downSample; // 0x11C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_radius_FieldHandleType; // 0x120
		::System::Boolean ESPP_radius_UseIt; // 0x124
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_radius; // 0x128
		::System::Boolean ESPP_radius_EnableFade; // 0x130
		::System::Boolean ESPP_radius_EnableOverrideDefaultValue; // 0x131
		::System::Single ESPP_radius_OverrideDefaultValue; // 0x134
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_mask_FieldHandleType; // 0x138
		::UnityEngine::Texture* ESPP_mask; // 0x140
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskTiling_FieldHandleType; // 0x148
		::System::Boolean ESPP_maskTiling_UseIt; // 0x14C
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maskTiling; // 0x150
		::System::Boolean ESPP_maskTiling_EnableFade; // 0x158
		::System::Boolean ESPP_maskTiling_EnableOverrideDefaultValue; // 0x159
		::System::Single ESPP_maskTiling_OverrideDefaultValue; // 0x15C
		::MoleMole::Config::ScreenEffectFieldHandleType ESPP_maskRotation_FieldHandleType; // 0x160
		::System::Boolean ESPP_maskRotation_UseIt; // 0x164
		::MoleMole::EffectSimulate::FloatKeyframeCurve* ESPP_maskRotation; // 0x168
		::System::Boolean ESPP_maskRotation_EnableFade; // 0x170
		::System::Boolean ESPP_maskRotation_EnableOverrideDefaultValue; // 0x171
		::System::Single ESPP_maskRotation_OverrideDefaultValue; // 0x174

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR__CTOR_OFFSET))(this);
		}

		::System::Void Method_5_6B72D4EE8C6E907F()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_6B72D4EE8C6E907F_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_OFFSET))(this);
		}

		::System::Void Method_5_EDFD49C942C75D6C()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_EDFD49C942C75D6C_OFFSET))(this);
		}

		::System::Void Method_5_1283EC0876EAAACF()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_1283EC0876EAAACF_OFFSET))(this);
		}

		::System::Void Method_5_76CD9B9D1269FA90(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_76CD9B9D1269FA90_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2A99139D13C42A50_OFFSET))(this, a1);
		}

		::System::Void Method_5_2A99139D13C42A50_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2A99139D13C42A50_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_65BB8F0F1E258993_OFFSET))(this, a1);
		}

		::System::Void Method_5_65BB8F0F1E258993_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_65BB8F0F1E258993_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_1092C5537716905B()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_1092C5537716905B_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_B2C24AFA396A3C80(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B2C24AFA396A3C80_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::System::Void Method_5_99F887AAD84BE668(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_99F887AAD84BE668_OFFSET))(this, a1);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_43069389B18F0936()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_43069389B18F0936_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D2A9D107FA1E5A31(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D2A9D107FA1E5A31_OFFSET))(this, a1, a2);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_429B9EF3AD5C70EB(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_429B9EF3AD5C70EB_OFFSET))(this, a1);
		}

		::System::String* Method_5_88B60F3B95FAA4F1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_OFFSET))(this);
		}

		::System::Boolean Method_5_391A84BCD9F51317()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_1()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_1_OFFSET))(this);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_OFFSET))(this);
		}

		::System::Type* Method_5_4FB5F56430673EA6_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4FB5F56430673EA6_1_OFFSET))(this);
		}

		::System::String* Method_5_88B60F3B95FAA4F1_2()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_88B60F3B95FAA4F1_2_OFFSET))(this);
		}

		::MoleMole::Config::ScreenEffectType Method_5_4ED0F9748169EC7E()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_4ED0F9748169EC7E_OFFSET))(this);
		}

		::System::Void Method_5_B86122B0EE4F8679(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B86122B0EE4F8679_OFFSET))(this, a1);
		}

		::System::Void Method_5_1290EA767C459179()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_1290EA767C459179_OFFSET))(this);
		}

		::System::Void Method_5_52CA0F45BC3414DC(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_52CA0F45BC3414DC_OFFSET))(this, a1);
		}

		::System::Int32 Method_5_A1D8CD775DEC3C21_1()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A1D8CD775DEC3C21_1_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_OFFSET))(this);
		}

		::System::Type* Method_5_A99467CE9479C990_1()
		{
			return ((::System::Type*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_A99467CE9479C990_1_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_BE3471DF7E3D4326(::System::String* a1, ::System::String* a2, ::System::Single a3, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a4, ::UnityEngine::ScriptableObject*& a5, ::MoleMole::Config::ConfigEntityScreenEffectBase*& a6, ::UnityEngine::ScriptableObject*& a7, ::System::String*& a8)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*, ::System::Single, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::MoleMole::Config::ConfigEntityScreenEffectBase*&, ::UnityEngine::ScriptableObject*&, ::System::String*&))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_BE3471DF7E3D4326_OFFSET))(this, a1, a2, a3, a4, a5, a6, a7, a8);
		}

		::MoleMole::Config::ScreenEffectType Method_5_55D8CF5F1FB0803A()
		{
			return ((::MoleMole::Config::ScreenEffectType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_55D8CF5F1FB0803A_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_D5F190FE5CE966B3(::System::String* a1, ::System::String* a2)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_D5F190FE5CE966B3_OFFSET))(this, a1, a2);
		}

		::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>* Method_5_54BEE211D32F7DEF()
		{
			return ((::Sirenix::OdinInspector::ValueDropdownList_1<::System::String*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_54BEE211D32F7DEF_OFFSET))(this);
		}

		::System::Void Method_5_CA373AA1C7054598_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_CA373AA1C7054598_1_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_OFFSET))(this, a1);
		}

		::System::Boolean Method_5_391A84BCD9F51317_1()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_391A84BCD9F51317_1_OFFSET))(this);
		}

		::System::String* Method_5_DA1BF2C227DC3D86()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_DA1BF2C227DC3D86_OFFSET))(this);
		}

		::System::Void Method_5_E7F1AECA7CFF8AAD_1(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_E7F1AECA7CFF8AAD_1_OFFSET))(this, a1);
		}

		::System::Void Method_5_832295EC279E5994()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_832295EC279E5994_OFFSET))(this);
		}

		::System::Void Method_5_B4596DBEA209120C(::MoleMole::Config::ConfigEntityScreenEffectBase* a1)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::Config::ConfigEntityScreenEffectBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_B4596DBEA209120C_OFFSET))(this, a1);
		}

		::System::String* Method_5_126AB3935214AA22()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_126AB3935214AA22_OFFSET))(this);
		}

		::System::Void Method_5_2685B6183E614529(::System::Single a1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_2685B6183E614529_OFFSET))(this, a1);
		}

		::System::String* Method_5_581A5078A2F29034()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_581A5078A2F29034_OFFSET))(this);
		}

		::MoleMole::Config::ConfigEntityScreenEffectBase* Method_5_3622C2D1E940D3F4(::System::String* a1)
		{
			return ((::MoleMole::Config::ConfigEntityScreenEffectBase*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_EFFECTSIMULATE_ESPOSTPROCESSGAUSSIANBLUR_METHOD_5_3622C2D1E940D3F4_OFFSET))(this, a1);
		}
	};
}
