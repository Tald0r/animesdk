#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralToggleWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_84B525E249D8B43F_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x70A77D0)
#define CLASS_2_84B525E249D8B43F_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x70A7A30)
#define CLASS_2_84B525E249D8B43F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x70A7B90)
#define CLASS_2_84B525E249D8B43F__CTOR_OFFSET UNITYSDK_OFFSET(0x70A7B80)

inline static constexpr unsigned int Class_2_84B525E249D8B43F_TypeDefinitionIndex = 73256;

class Class_2_84B525E249D8B43F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x28
	::Class_3_647A206587033F4E<::MoleMole::UIGeneralToggleWidgetController*>* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_6; // 0x48
	::UnityEngine::RectTransform* Field_2_5; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84B525E249D8B43F_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
