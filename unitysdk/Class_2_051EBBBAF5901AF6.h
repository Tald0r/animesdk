#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadNavigatableList; }
namespace MoleMole { class UIActivityCompWeekRewardBtnWidgetController; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
template <typename T> class Class_3_647A206587033F4E;

#define CLASS_2_051EBBBAF5901AF6_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xA584690)
#define CLASS_2_051EBBBAF5901AF6_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xA584900)
#define CLASS_2_051EBBBAF5901AF6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA584A60)
#define CLASS_2_051EBBBAF5901AF6__CTOR_OFFSET UNITYSDK_OFFSET(0xA584A50)

inline static constexpr unsigned int Class_2_051EBBBAF5901AF6_TypeDefinitionIndex = 73360;

class Class_2_051EBBBAF5901AF6 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x18
	::MoleMole::MonoGamepadNavigatableList* Field_2_9; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::Class_3_647A206587033F4E<::MoleMole::UIActivityCompWeekRewardBtnWidgetController*>* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_6; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x50
	::MonoUITableScrollV2* Field_2_5; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_051EBBBAF5901AF6_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
