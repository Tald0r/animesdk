#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_E4DD7A60F1CB4EDF_Class_2_0D5D8405826EE6F8_26;
class Class_2_E4DD7A60F1CB4EDF_Class_2_0EF245B87F02A5C0_6;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xE710310)
#define CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0xE70FCA0)
#define CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_8B7E7695FC17D6DD_1_OFFSET UNITYSDK_OFFSET(0xE710100)
#define CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0xE70FEF0)
#define CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xE7103C0)
#define CLASS_2_E4DD7A60F1CB4EDF__CTOR_OFFSET UNITYSDK_OFFSET(0xE7103B0)

inline static constexpr unsigned int Class_2_E4DD7A60F1CB4EDF_TypeDefinitionIndex = 60081;

class Class_2_E4DD7A60F1CB4EDF : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_8; // 0x20
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_E4DD7A60F1CB4EDF_Class_2_0D5D8405826EE6F8_26*>*>* Field_2_9; // 0x28
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_E4DD7A60F1CB4EDF_Class_2_0EF245B87F02A5C0_6*>*>* Field_2_5; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::UnityEngine::RectTransform* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::MonoUITableScrollV2* Field_2_7; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4DD7A60F1CB4EDF__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_E4DD7A60F1CB4EDF_Class_2_0EF245B87F02A5C0_6*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_E4DD7A60F1CB4EDF_Class_2_0EF245B87F02A5C0_6*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_E4DD7A60F1CB4EDF_Class_2_0D5D8405826EE6F8_26*>*>* Method_2_8B7E7695FC17D6DD_1(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_E4DD7A60F1CB4EDF_Class_2_0D5D8405826EE6F8_26*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E4DD7A60F1CB4EDF_METHOD_2_8B7E7695FC17D6DD_1_OFFSET))(this, a1, a2);
	}
};
