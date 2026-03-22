#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class LayoutElement; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_DF6C6EDD3432F685_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xA970620)
#define CLASS_2_DF6C6EDD3432F685_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0xA9708B0)
#define CLASS_2_DF6C6EDD3432F685_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA970A10)
#define CLASS_2_DF6C6EDD3432F685__CTOR_OFFSET UNITYSDK_OFFSET(0xA970A00)

inline static constexpr unsigned int Class_2_DF6C6EDD3432F685_TypeDefinitionIndex = 58009;

class Class_2_DF6C6EDD3432F685 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::GameObject* Field_2_6; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_8; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x38
	::UnityEngine::RectTransform* Field_2_0; // 0x40
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x48
	::UnityEngine::RectTransform* Field_2_9; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x58
	::UnityEngine::UI::LayoutElement* Field_2_5; // 0x60
	::UnityEngine::Animation* Field_2_7; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6EDD3432F685__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6EDD3432F685_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6EDD3432F685_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_DF6C6EDD3432F685_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}
};
