#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_E87F1D15F1D4AC72.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_3_AD44310A10317371_METHOD_3_5176DC743E478510_OFFSET UNITYSDK_OFFSET(0x70CD410)
#define CLASS_3_AD44310A10317371_METHOD_3_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x70CD0D0)
#define CLASS_3_AD44310A10317371_METHOD_3_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x70CD350)
#define CLASS_3_AD44310A10317371__CTOR_OFFSET UNITYSDK_OFFSET(0x70CD960)

inline static constexpr unsigned int Class_3_AD44310A10317371_TypeDefinitionIndex = 57946;

class Class_3_AD44310A10317371 : public ::Class_2_E87F1D15F1D4AC72
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_3_11; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_8; // 0x38
	::UnityEngine::RectTransform* Field_3_7; // 0x40
	::MoleMole::NotificationBadgeEx* Field_3_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_9; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_10; // 0x58
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_5; // 0x60
	::UnityEngine::UI::Extension::UIToggleButton* Field_3_0; // 0x68
	::Class_2_A8F5ABF31E066ED4* Field_3_1; // 0x70
	::UnityEngine::RectTransform* Field_3_3; // 0x78
	::UnityEngine::UI::Extension::UILocalizationText* Field_3_4; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371__CTOR_OFFSET))(this);
	}

	::System::Void Method_3_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371_METHOD_3_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_3_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371_METHOD_3_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_3_5176DC743E478510()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_3_AD44310A10317371_METHOD_3_5176DC743E478510_OFFSET))(this);
	}
};
