#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_19E2B946422FA426_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x8D29F30)
#define CLASS_2_19E2B946422FA426_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x8D2A190)
#define CLASS_2_19E2B946422FA426_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8D2A2F0)
#define CLASS_2_19E2B946422FA426__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2A2E0)

inline static constexpr unsigned int Class_2_19E2B946422FA426_TypeDefinitionIndex = 66405;

class Class_2_19E2B946422FA426 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::MoleMole::NotificationBadge* Field_2_8; // 0x28
	::UIControllerExtensionData* Field_2_7; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x40
	::UnityEngine::GameObject* Field_2_6; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E2B946422FA426__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19E2B946422FA426_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_19E2B946422FA426_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_19E2B946422FA426_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
