#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_B33D4DBECC9805C8_1_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x95287E0)
#define CLASS_2_B33D4DBECC9805C8_1_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x9528A50)
#define CLASS_2_B33D4DBECC9805C8_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9528B40)
#define CLASS_2_B33D4DBECC9805C8_1__CTOR_OFFSET UNITYSDK_OFFSET(0x9528B30)

inline static constexpr unsigned int Class_2_B33D4DBECC9805C8_1_TypeDefinitionIndex = 68378;

class Class_2_B33D4DBECC9805C8_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x18
	::UnityEngine::GameObject* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_0; // 0x30
	::UnityEngine::GameObject* Field_2_5; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x40
	::UnityEngine::GameObject* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x58
	::MoleMole::NotificationBadgeEx* Field_2_8; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33D4DBECC9805C8_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B33D4DBECC9805C8_1_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B33D4DBECC9805C8_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B33D4DBECC9805C8_1_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
