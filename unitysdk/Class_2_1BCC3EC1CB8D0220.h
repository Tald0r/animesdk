#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1BCC3EC1CB8D0220_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0xA60EBD0)
#define CLASS_2_1BCC3EC1CB8D0220_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0xA60EDF0)
#define CLASS_2_1BCC3EC1CB8D0220_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA60EEE0)
#define CLASS_2_1BCC3EC1CB8D0220__CTOR_OFFSET UNITYSDK_OFFSET(0xA60EED0)

inline static constexpr unsigned int Class_2_1BCC3EC1CB8D0220_TypeDefinitionIndex = 53969;

class Class_2_1BCC3EC1CB8D0220 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x18
	::Class_2_60DDD9C206686F44* Field_2_7; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_3; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_1; // 0x48
	::MoleMole::NotificationBadge* Field_2_8; // 0x50
	::MoleMole::UIGeneralButtonController* Field_2_4; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1BCC3EC1CB8D0220_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
