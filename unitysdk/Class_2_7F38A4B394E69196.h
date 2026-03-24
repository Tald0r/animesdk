#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_7F38A4B394E69196_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x9D97550)
#define CLASS_2_7F38A4B394E69196_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x9D979E0)
#define CLASS_2_7F38A4B394E69196_METHOD_2_DE52BD42C4B0B772_OFFSET UNITYSDK_OFFSET(0x9D97850)
#define CLASS_2_7F38A4B394E69196__CTOR_OFFSET UNITYSDK_OFFSET(0x9D979D0)

inline static constexpr unsigned int Class_2_7F38A4B394E69196_TypeDefinitionIndex = 74057;

class Class_2_7F38A4B394E69196 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_9; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_1; // 0x28
	::UnityEngine::RectTransform* Field_2_2; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x38
	::UnityEngine::GameObject* Field_2_4; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x48
	::UnityEngine::RectTransform* Field_2_8; // 0x50
	::Class_2_A8F5ABF31E066ED4* Field_2_11; // 0x58
	::MoleMole::MonoGamepadSelectable* Field_2_13; // 0x60
	::UnityEngine::GameObject* Field_2_12; // 0x68
	::UnityEngine::RectTransform* Field_2_7; // 0x70
	::Class_2_60DDD9C206686F44* Field_2_3; // 0x78
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F38A4B394E69196__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F38A4B394E69196_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_DE52BD42C4B0B772()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7F38A4B394E69196_METHOD_2_DE52BD42C4B0B772_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7F38A4B394E69196_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
