#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIOperationYumMainWidgetController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_C9AC68D5E8DE2708_METHOD_2_52607DE4C357D269_OFFSET UNITYSDK_OFFSET(0xB60B7E0)
#define CLASS_2_C9AC68D5E8DE2708_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB60B950)
#define CLASS_2_C9AC68D5E8DE2708_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0xB60B4D0)
#define CLASS_2_C9AC68D5E8DE2708__CTOR_OFFSET UNITYSDK_OFFSET(0xB60B940)

inline static constexpr unsigned int Class_2_C9AC68D5E8DE2708_TypeDefinitionIndex = 57586;

class Class_2_C9AC68D5E8DE2708 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_8; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_9; // 0x30
	::Class_3_647A206587033F4E<::MoleMole::UIOperationYumMainWidgetController*>* Field_2_4; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIOperationYumMainWidgetController*>* Field_2_5; // 0x40
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_2; // 0x48
	::MoleMole::MonoGamepadCustomList* Field_2_10; // 0x50
	::Class_3_647A206587033F4E<::MoleMole::UIOperationYumMainWidgetController*>* Field_2_3; // 0x58
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_6; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_52607DE4C357D269()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708_METHOD_2_52607DE4C357D269_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C9AC68D5E8DE2708_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
