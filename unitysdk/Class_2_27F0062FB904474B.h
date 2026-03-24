#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_27F0062FB904474B_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x70D2D40)
#define CLASS_2_27F0062FB904474B_METHOD_2_B6EEC4B10357AB73_OFFSET UNITYSDK_OFFSET(0x70D2B20)
#define CLASS_2_27F0062FB904474B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x70D2E30)
#define CLASS_2_27F0062FB904474B__CTOR_OFFSET UNITYSDK_OFFSET(0x70D2E20)

inline static constexpr unsigned int Class_2_27F0062FB904474B_TypeDefinitionIndex = 74015;

class Class_2_27F0062FB904474B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::MoleMole::NotificationBadge* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F0062FB904474B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B6EEC4B10357AB73(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_27F0062FB904474B_METHOD_2_B6EEC4B10357AB73_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_27F0062FB904474B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_27F0062FB904474B_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
