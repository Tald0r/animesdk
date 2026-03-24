#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57_1.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_78DA3B72B76F4A93;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole::Config { class UIAchievementAnimConfig; }
namespace System { class String; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_04F9F04831A657E6_METHOD_2_3C8305164A0C9B06_OFFSET UNITYSDK_OFFSET(0x83880D0)
#define CLASS_2_04F9F04831A657E6_METHOD_2_77EA5BCD93BD96AE_OFFSET UNITYSDK_OFFSET(0x8387E20)
#define CLASS_2_04F9F04831A657E6_METHOD_2_929BD2659F9FA6CA_OFFSET UNITYSDK_OFFSET(0x8387BC0)
#define CLASS_2_04F9F04831A657E6_METHOD_2_AD399A63502445B7_OFFSET UNITYSDK_OFFSET(0x8387F30)
#define CLASS_2_04F9F04831A657E6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x83881E0)
#define CLASS_2_04F9F04831A657E6_METHOD_2_D78B7A4B1086EA41_OFFSET UNITYSDK_OFFSET(0x8388250)
#define CLASS_2_04F9F04831A657E6__CTOR_OFFSET UNITYSDK_OFFSET(0x8387F20)

inline static constexpr unsigned int Class_2_04F9F04831A657E6_TypeDefinitionIndex = 58590;

class Class_2_04F9F04831A657E6 : public ::Class_1_EEA0111A28582B57_1
{
public:
	// static const ::System::String* Field_2_0; // 0x0
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_5; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_3; // 0x40
	::UnityEngine::RectTransform* Field_2_4; // 0x48
	::MoleMole::Config::UIAchievementAnimConfig* Field_2_10; // 0x50
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x58
	::UnityEngine::RectTransform* Field_2_6; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_929BD2659F9FA6CA(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_929BD2659F9FA6CA_OFFSET))(this, a1, a2);
	}

	static ::System::Boolean Method_2_AD399A63502445B7(::MoleMole::UIControlCollection* a1)
	{
		return ((::System::Boolean(*)(::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_AD399A63502445B7_OFFSET))(a1);
	}

	::System::Void Method_2_3C8305164A0C9B06(::Class_2_78DA3B72B76F4A93* a1)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_78DA3B72B76F4A93*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_3C8305164A0C9B06_OFFSET))(this, a1);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_77EA5BCD93BD96AE()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_77EA5BCD93BD96AE_OFFSET))(this);
	}

	static ::Class_2_04F9F04831A657E6* Method_2_D78B7A4B1086EA41(::Class_2_78DA3B72B76F4A93* a1, ::Class_2_777A5D016ADC7368* a2, ::MoleMole::UIControlCollection* a3)
	{
		return ((::Class_2_04F9F04831A657E6*(*)(::Class_2_78DA3B72B76F4A93*, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_04F9F04831A657E6_METHOD_2_D78B7A4B1086EA41_OFFSET))(a1, a2, a3);
	}
};
