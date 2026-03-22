#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadCustomList; }
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }

#define CLASS_2_A1B81CF87EE39EFE_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x9C48660)
#define CLASS_2_A1B81CF87EE39EFE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9C48730)
#define CLASS_2_A1B81CF87EE39EFE_METHOD_2_E117CAE09780A0EE_OFFSET UNITYSDK_OFFSET(0x9C48390)
#define CLASS_2_A1B81CF87EE39EFE__CTOR_OFFSET UNITYSDK_OFFSET(0x9C48720)

inline static constexpr unsigned int Class_2_A1B81CF87EE39EFE_TypeDefinitionIndex = 68841;

class Class_2_A1B81CF87EE39EFE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::MoleMole::MonoGamepadCustomList* Field_2_9; // 0x28
	::MoleMole::MonoGamepadSelectable* Field_2_8; // 0x30
	::UnityEngine::GameObject* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::UnityEngine::GameObject* Field_2_10; // 0x48
	::UnityEngine::GameObject* Field_2_11; // 0x50
	::Class_2_9E3E3CDA608A4F58* Field_2_7; // 0x58
	::UnityEngine::GameObject* Field_2_5; // 0x60
	::MoleMole::MonoGamepadModule* Field_2_12; // 0x68
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1B81CF87EE39EFE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E117CAE09780A0EE(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A1B81CF87EE39EFE_METHOD_2_E117CAE09780A0EE_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A1B81CF87EE39EFE_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A1B81CF87EE39EFE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
