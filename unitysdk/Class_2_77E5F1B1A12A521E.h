#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_77E5F1B1A12A521E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x9852D00)
#define CLASS_2_77E5F1B1A12A521E_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x9852B40)
#define CLASS_2_77E5F1B1A12A521E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9852DB0)
#define CLASS_2_77E5F1B1A12A521E__CTOR_OFFSET UNITYSDK_OFFSET(0x9852DA0)

inline static constexpr unsigned int Class_2_77E5F1B1A12A521E_TypeDefinitionIndex = 43690;

class Class_2_77E5F1B1A12A521E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x18
	::UnityEngine::Transform* Field_2_4; // 0x20
	::UnityEngine::Transform* Field_2_3; // 0x28
	::UnityEngine::Transform* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_0; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77E5F1B1A12A521E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77E5F1B1A12A521E_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_77E5F1B1A12A521E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_77E5F1B1A12A521E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
