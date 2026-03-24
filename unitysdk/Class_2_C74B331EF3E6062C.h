#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace Cinemachine { class CinemachineVirtualCamera; }
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class BoxCollider; }
namespace UnityEngine { class Transform; }

#define CLASS_2_C74B331EF3E6062C_METHOD_2_65367CC4DD011F4E_OFFSET UNITYSDK_OFFSET(0x6B7F9D0)
#define CLASS_2_C74B331EF3E6062C_METHOD_2_7095683BF6D13E9A_OFFSET UNITYSDK_OFFSET(0x6B7FB40)
#define CLASS_2_C74B331EF3E6062C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6B7FCC0)
#define CLASS_2_C74B331EF3E6062C_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x6B7F870)
#define CLASS_2_C74B331EF3E6062C__CTOR_OFFSET UNITYSDK_OFFSET(0x6B7FCB0)

inline static constexpr unsigned int Class_2_C74B331EF3E6062C_TypeDefinitionIndex = 54439;

class Class_2_C74B331EF3E6062C : public ::Class_1_EEA0111A28582B57
{
public:
	::Cinemachine::CinemachineVirtualCamera* Field_2_2; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* Field_2_4; // 0x20
	::UnityEngine::Transform* Field_2_0; // 0x28
	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Field_2_3; // 0x30
	::UnityEngine::Transform* Field_2_1; // 0x38
	::UnityEngine::Transform* Field_2_5; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::Transform*>* Method_2_65367CC4DD011F4E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::Transform*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_65367CC4DD011F4E_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>* Method_2_7095683BF6D13E9A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::BoxCollider*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_7095683BF6D13E9A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_C74B331EF3E6062C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
