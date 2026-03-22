#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_84D60E5AA05E9C23_3_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x734DB60)
#define CLASS_2_84D60E5AA05E9C23_3_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x734DC10)
#define CLASS_2_84D60E5AA05E9C23_3_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x734D980)
#define CLASS_2_84D60E5AA05E9C23_3__CTOR_OFFSET UNITYSDK_OFFSET(0x734DC00)

inline static constexpr unsigned int Class_2_84D60E5AA05E9C23_3_TypeDefinitionIndex = 67072;

class Class_2_84D60E5AA05E9C23_3 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x20
	::UnityEngine::RectTransform* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::UnityEngine::GameObject* Field_2_3; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84D60E5AA05E9C23_3__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84D60E5AA05E9C23_3_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_84D60E5AA05E9C23_3_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_84D60E5AA05E9C23_3_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
