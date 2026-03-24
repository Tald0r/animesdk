#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_AEEA82AB75F4904D_1_METHOD_2_737220D2233A9067_OFFSET UNITYSDK_OFFSET(0x7958E70)
#define CLASS_2_AEEA82AB75F4904D_1_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x7958C30)
#define CLASS_2_AEEA82AB75F4904D_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7958F90)
#define CLASS_2_AEEA82AB75F4904D_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7958F80)

inline static constexpr unsigned int Class_2_AEEA82AB75F4904D_1_TypeDefinitionIndex = 39052;

class Class_2_AEEA82AB75F4904D_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::MoleMole::NotificationBadgeEx* Field_2_5; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x38
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_3; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x48
	::UnityEngine::UI::Text* Field_2_0; // 0x50
	::UnityEngine::RectTransform* Field_2_8; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_1_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_737220D2233A9067()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AEEA82AB75F4904D_1_METHOD_2_737220D2233A9067_OFFSET))(this);
	}
};
