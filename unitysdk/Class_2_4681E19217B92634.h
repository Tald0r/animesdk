#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_4681E19217B92634_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0xA765B80)
#define CLASS_2_4681E19217B92634_METHOD_2_1D05C371EBD1713E_OFFSET UNITYSDK_OFFSET(0xA765970)
#define CLASS_2_4681E19217B92634_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA765C30)
#define CLASS_2_4681E19217B92634__CTOR_OFFSET UNITYSDK_OFFSET(0xA765C20)

inline static constexpr unsigned int Class_2_4681E19217B92634_TypeDefinitionIndex = 79306;

class Class_2_4681E19217B92634 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::UnityEngine::GameObject* Field_2_4; // 0x20
	::UnityEngine::RectTransform* Field_2_6; // 0x28
	::UnityEngine::RectTransform* Field_2_1; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x38
	::UnityEngine::GameObject* Field_2_5; // 0x40
	::UnityEngine::RectTransform* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4681E19217B92634__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_1D05C371EBD1713E(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4681E19217B92634_METHOD_2_1D05C371EBD1713E_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_4681E19217B92634_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_4681E19217B92634_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
