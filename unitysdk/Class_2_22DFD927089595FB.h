#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_3;
class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_2_0D31A1661D004892;

#define CLASS_2_22DFD927089595FB_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0xDE88480)
#define CLASS_2_22DFD927089595FB_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xDE87FF0)
#define CLASS_2_22DFD927089595FB_METHOD_2_8B7E7695FC17D6DD_OFFSET UNITYSDK_OFFSET(0xDE88270)
#define CLASS_2_22DFD927089595FB_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDE885A0)
#define CLASS_2_22DFD927089595FB__CTOR_OFFSET UNITYSDK_OFFSET(0xDE88590)

inline static constexpr unsigned int Class_2_22DFD927089595FB_TypeDefinitionIndex = 40539;

class Class_2_22DFD927089595FB : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::UIGeneralButtonController* Field_2_1; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x30
	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_3*>*>* Field_2_9; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x58
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_2; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_3*>*>* Method_2_8B7E7695FC17D6DD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_0D31A1661D004892<::Class_2_22DFD927089595FB_Class_2_0EF245B87F02A5C0_3*>*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_8B7E7695FC17D6DD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_22DFD927089595FB_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
