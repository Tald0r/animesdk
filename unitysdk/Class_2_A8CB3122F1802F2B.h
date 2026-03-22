#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Transform; }

#define CLASS_2_A8CB3122F1802F2B_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xB029D50)
#define CLASS_2_A8CB3122F1802F2B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB029ED0)
#define CLASS_2_A8CB3122F1802F2B__CTOR_OFFSET UNITYSDK_OFFSET(0xB029EC0)

inline static constexpr unsigned int Class_2_A8CB3122F1802F2B_TypeDefinitionIndex = 40985;

class Class_2_A8CB3122F1802F2B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Transform* Field_2_6; // 0x18
	::UnityEngine::Transform* Field_2_7; // 0x20
	::UnityEngine::Transform* Field_2_2; // 0x28
	::UnityEngine::Animation* Field_2_9; // 0x30
	::UnityEngine::Transform* Field_2_4; // 0x38
	::UnityEngine::Transform* Field_2_1; // 0x40
	::UnityEngine::Transform* Field_2_3; // 0x48
	::UnityEngine::Transform* Field_2_8; // 0x50
	::UnityEngine::Transform* Field_2_5; // 0x58
	::UnityEngine::Transform* Field_2_0; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_A8CB3122F1802F2B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
