#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define CLASS_2_949134FE88CA671F_METHOD_2_21D544786F2D43F4_OFFSET UNITYSDK_OFFSET(0x7F71690)
#define CLASS_2_949134FE88CA671F_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x7F71810)
#define CLASS_2_949134FE88CA671F_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x7F71980)
#define CLASS_2_949134FE88CA671F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7F71A70)
#define CLASS_2_949134FE88CA671F__CTOR_OFFSET UNITYSDK_OFFSET(0x7F71A60)

inline static constexpr unsigned int Class_2_949134FE88CA671F_TypeDefinitionIndex = 59470;

class Class_2_949134FE88CA671F : public ::Class_1_EEA0111A28582B57
{
public:
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_0; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_21D544786F2D43F4(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_21D544786F2D43F4_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_949134FE88CA671F_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}
};
