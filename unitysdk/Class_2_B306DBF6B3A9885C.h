#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_B306DBF6B3A9885C_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xC557DE0)
#define CLASS_2_B306DBF6B3A9885C_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0xC557EF0)
#define CLASS_2_B306DBF6B3A9885C_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xC558070)
#define CLASS_2_B306DBF6B3A9885C__CTOR_OFFSET UNITYSDK_OFFSET(0xC558060)

inline static constexpr unsigned int Class_2_B306DBF6B3A9885C_TypeDefinitionIndex = 64354;

class Class_2_B306DBF6B3A9885C : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_0; // 0x18
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_3; // 0x20
	::UnityEngine::GameObject* Field_2_4; // 0x28
	::UnityEngine::GameObject* Field_2_2; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B306DBF6B3A9885C__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B306DBF6B3A9885C_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B306DBF6B3A9885C_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B306DBF6B3A9885C_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}
};
