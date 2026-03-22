#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_6C0482AFA395892A_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0xBA9EFB0)
#define CLASS_2_6C0482AFA395892A_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0xBA9F1B0)
#define CLASS_2_6C0482AFA395892A_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBA9F280)
#define CLASS_2_6C0482AFA395892A__CTOR_OFFSET UNITYSDK_OFFSET(0xBA9F270)

inline static constexpr unsigned int Class_2_6C0482AFA395892A_TypeDefinitionIndex = 72359;

class Class_2_6C0482AFA395892A : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_4; // 0x28
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_7; // 0x40
	::MoleMole::NotificationBadgeEx* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_2; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_6C0482AFA395892A_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}
};
