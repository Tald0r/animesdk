#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UISuibianLevelWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_B4F3F5C37525C9E1_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x80DEDB0)
#define CLASS_2_B4F3F5C37525C9E1_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x80DF010)
#define CLASS_2_B4F3F5C37525C9E1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x80DF0E0)
#define CLASS_2_B4F3F5C37525C9E1__CTOR_OFFSET UNITYSDK_OFFSET(0x80DF0D0)

inline static constexpr unsigned int Class_2_B4F3F5C37525C9E1_TypeDefinitionIndex = 48814;

class Class_2_B4F3F5C37525C9E1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_3_647A206587033F4E<::MoleMole::UISuibianLevelWidgetController*>* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x38
	::UnityEngine::RectTransform* Field_2_5; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x48
	::MonoUITableScrollV2* Field_2_1; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4F3F5C37525C9E1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B4F3F5C37525C9E1_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B4F3F5C37525C9E1_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B4F3F5C37525C9E1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
