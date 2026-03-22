#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_F356F730CBE9F77E_METHOD_2_5B900C0AEB2813BC_OFFSET UNITYSDK_OFFSET(0x7BA22D0)
#define CLASS_2_F356F730CBE9F77E_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x7BA24E0)
#define CLASS_2_F356F730CBE9F77E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7BA25B0)
#define CLASS_2_F356F730CBE9F77E__CTOR_OFFSET UNITYSDK_OFFSET(0x7BA25A0)

inline static constexpr unsigned int Class_2_F356F730CBE9F77E_TypeDefinitionIndex = 69740;

class Class_2_F356F730CBE9F77E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5B900C0AEB2813BC(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E_METHOD_2_5B900C0AEB2813BC_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_F356F730CBE9F77E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
