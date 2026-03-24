#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_E5B6798F8C52E39C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6755240)
#define CLASS_2_E5B6798F8C52E39C_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x6755120)
#define CLASS_2_E5B6798F8C52E39C__CTOR_OFFSET UNITYSDK_OFFSET(0x6755230)

inline static constexpr unsigned int Class_2_E5B6798F8C52E39C_TypeDefinitionIndex = 60126;

class Class_2_E5B6798F8C52E39C : public ::Class_1_EEA0111A28582B57
{
public:
	::MoleMole::NotificationBadge* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::MoleMole::NotificationBadge* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UITabButton* Field_2_0; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5B6798F8C52E39C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E5B6798F8C52E39C_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E5B6798F8C52E39C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
