#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadSpaceList; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_724B52733CF016D0_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x9B83830)
#define CLASS_2_724B52733CF016D0_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9B83A20)
#define CLASS_2_724B52733CF016D0_METHOD_2_E171F3958EB08A5E_OFFSET UNITYSDK_OFFSET(0x9B838F0)
#define CLASS_2_724B52733CF016D0_METHOD_2_F9D756242E9FCFE7_OFFSET UNITYSDK_OFFSET(0x9B839B0)
#define CLASS_2_724B52733CF016D0__CTOR_OFFSET UNITYSDK_OFFSET(0x9B839A0)

inline static constexpr unsigned int Class_2_724B52733CF016D0_TypeDefinitionIndex = 49268;

class Class_2_724B52733CF016D0 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x18
	::MonoUITableScrollV2* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::MoleMole::MonoGamepadSpaceList* Field_2_3; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_724B52733CF016D0__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_724B52733CF016D0_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_E171F3958EB08A5E(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_724B52733CF016D0_METHOD_2_E171F3958EB08A5E_OFFSET))(this, a1, a2);
	}

	::System::Boolean Method_2_F9D756242E9FCFE7(::MoleMole::UIControlCollection* a1, ::Class_2_777A5D016ADC7368* a2)
	{
		return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIControlCollection*, ::Class_2_777A5D016ADC7368*))((::PBYTE)hIl2Cpp + CLASS_2_724B52733CF016D0_METHOD_2_F9D756242E9FCFE7_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_724B52733CF016D0_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
