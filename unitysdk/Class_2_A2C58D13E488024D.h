#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UITabButton; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }

#define CLASS_2_A2C58D13E488024D_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xC545BF0)
#define CLASS_2_A2C58D13E488024D_METHOD_2_B04B0693FD45DBCD_OFFSET UNITYSDK_OFFSET(0xC5459A0)
#define CLASS_2_A2C58D13E488024D_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC545D50)
#define CLASS_2_A2C58D13E488024D__CTOR_OFFSET UNITYSDK_OFFSET(0xC545D40)

inline static constexpr unsigned int Class_2_A2C58D13E488024D_TypeDefinitionIndex = 55270;

class Class_2_A2C58D13E488024D : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_9; // 0x28
	::UnityEngine::GameObject* Field_2_7; // 0x30
	::UnityEngine::CanvasGroup* Field_2_4; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x40
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_3; // 0x48
	::UnityEngine::UI::Extension::UITabButton* Field_2_6; // 0x50
	::UnityEngine::UI::Extension::UITabButton* Field_2_5; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_B04B0693FD45DBCD(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D_METHOD_2_B04B0693FD45DBCD_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A2C58D13E488024D_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
