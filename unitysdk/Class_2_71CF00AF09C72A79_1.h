#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_71CF00AF09C72A79_1_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x6FA0720)
#define CLASS_2_71CF00AF09C72A79_1_METHOD_2_43ED31B02AD5E38E_OFFSET UNITYSDK_OFFSET(0x6FA0550)
#define CLASS_2_71CF00AF09C72A79_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6FA07D0)
#define CLASS_2_71CF00AF09C72A79_1__CTOR_OFFSET UNITYSDK_OFFSET(0x6FA07C0)

inline static constexpr unsigned int Class_2_71CF00AF09C72A79_1_TypeDefinitionIndex = 65588;

class Class_2_71CF00AF09C72A79_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x28
	::UnityEngine::GameObject* Field_2_3; // 0x30

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_43ED31B02AD5E38E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1_METHOD_2_43ED31B02AD5E38E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_71CF00AF09C72A79_1_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
