#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_CB269CE6BD2E8FD0_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0xBB91840)
#define CLASS_2_CB269CE6BD2E8FD0_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xBB91AA0)
#define CLASS_2_CB269CE6BD2E8FD0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xBB91C20)
#define CLASS_2_CB269CE6BD2E8FD0__CTOR_OFFSET UNITYSDK_OFFSET(0xBB91C10)

inline static constexpr unsigned int Class_2_CB269CE6BD2E8FD0_TypeDefinitionIndex = 59373;

class Class_2_CB269CE6BD2E8FD0 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_5; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x50
	::UnityEngine::Transform* Field_2_0; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_CB269CE6BD2E8FD0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
