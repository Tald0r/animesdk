#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButton; }

#define CLASS_2_E5B6798F8C52E39C_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB4D9E40)
#define CLASS_2_E5B6798F8C52E39C_1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xB4D9D40)
#define CLASS_2_E5B6798F8C52E39C_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB4D9E30)

inline static constexpr unsigned int Class_2_E5B6798F8C52E39C_1_TypeDefinitionIndex = 81183;

class Class_2_E5B6798F8C52E39C_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButton* Field_2_1; // 0x18
	::MoleMole::NotificationBadge* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5B6798F8C52E39C_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E5B6798F8C52E39C_1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E5B6798F8C52E39C_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
