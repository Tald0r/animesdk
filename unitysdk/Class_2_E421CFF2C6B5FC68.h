#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_E421CFF2C6B5FC68_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8E63370)
#define CLASS_2_E421CFF2C6B5FC68_METHOD_2_87DF7AD2E0AB49C9_OFFSET UNITYSDK_OFFSET(0x8E63120)
#define CLASS_2_E421CFF2C6B5FC68_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8E63420)
#define CLASS_2_E421CFF2C6B5FC68__CTOR_OFFSET UNITYSDK_OFFSET(0x8E63410)

inline static constexpr unsigned int Class_2_E421CFF2C6B5FC68_TypeDefinitionIndex = 51978;

class Class_2_E421CFF2C6B5FC68 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_5; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_3; // 0x20
	::Class_2_9E3E3CDA608A4F58* Field_2_8; // 0x28
	::UnityEngine::RectTransform* Field_2_0; // 0x30
	::UnityEngine::RectTransform* Field_2_6; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::UnityEngine::RectTransform* Field_2_1; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x50
	::UnityEngine::GameObject* Field_2_7; // 0x58

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E421CFF2C6B5FC68__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_87DF7AD2E0AB49C9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E421CFF2C6B5FC68_METHOD_2_87DF7AD2E0AB49C9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E421CFF2C6B5FC68_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E421CFF2C6B5FC68_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
