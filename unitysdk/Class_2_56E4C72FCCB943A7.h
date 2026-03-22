#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class UIControlReferenceList;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_56E4C72FCCB943A7_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x818F960)
#define CLASS_2_56E4C72FCCB943A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x818FB60)
#define CLASS_2_56E4C72FCCB943A7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x818FC50)
#define CLASS_2_56E4C72FCCB943A7__CTOR_OFFSET UNITYSDK_OFFSET(0x818FC40)

inline static constexpr unsigned int Class_2_56E4C72FCCB943A7_TypeDefinitionIndex = 63087;

class Class_2_56E4C72FCCB943A7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_0; // 0x20
	::UIControlReferenceList* Field_2_6; // 0x28
	::UnityEngine::GameObject* Field_2_1; // 0x30
	::UIControlReferenceList* Field_2_5; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x40
	::MoleMole::MonoGamepadSelectable* Field_2_4; // 0x48
	::UnityEngine::GameObject* Field_2_7; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_56E4C72FCCB943A7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
