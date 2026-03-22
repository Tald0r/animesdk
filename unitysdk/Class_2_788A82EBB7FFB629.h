#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_788A82EBB7FFB629_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xA20EB50)
#define CLASS_2_788A82EBB7FFB629_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0xA20E790)
#define CLASS_2_788A82EBB7FFB629_METHOD_2_AB195FC75502CC36_OFFSET UNITYSDK_OFFSET(0xA20E9E0)
#define CLASS_2_788A82EBB7FFB629_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA20EC00)
#define CLASS_2_788A82EBB7FFB629__CTOR_OFFSET UNITYSDK_OFFSET(0xA20EBF0)

inline static constexpr unsigned int Class_2_788A82EBB7FFB629_TypeDefinitionIndex = 44836;

class Class_2_788A82EBB7FFB629 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x18
	::UnityEngine::GameObject* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x28
	::UnityEngine::GameObject* Field_2_4; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_8; // 0x40
	::Class_2_9E3E3CDA608A4F58* Field_2_2; // 0x48
	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Field_2_5; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_788A82EBB7FFB629__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_788A82EBB7FFB629_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_788A82EBB7FFB629_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Collections::Generic::List_1<::UnityEngine::GameObject*>* Method_2_AB195FC75502CC36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::UnityEngine::GameObject*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_788A82EBB7FFB629_METHOD_2_AB195FC75502CC36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_788A82EBB7FFB629_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
