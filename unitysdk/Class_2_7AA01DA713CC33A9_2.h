#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_7AA01DA713CC33A9_2_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0xAC0AD40)
#define CLASS_2_7AA01DA713CC33A9_2_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xAC0AEE0)
#define CLASS_2_7AA01DA713CC33A9_2__CTOR_OFFSET UNITYSDK_OFFSET(0xAC0AED0)

inline static constexpr unsigned int Class_2_7AA01DA713CC33A9_2_TypeDefinitionIndex = 66792;

class Class_2_7AA01DA713CC33A9_2 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_6; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_0; // 0x20
	::UnityEngine::GameObject* Field_2_3; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_4; // 0x38
	::UnityEngine::GameObject* Field_2_1; // 0x40
	::UnityEngine::GameObject* Field_2_5; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_2__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_2_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7AA01DA713CC33A9_2_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
