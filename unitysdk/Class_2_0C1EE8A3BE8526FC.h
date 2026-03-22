#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class UIControllerExtensionData;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_0C1EE8A3BE8526FC_METHOD_2_29352E75304CF2A0_OFFSET UNITYSDK_OFFSET(0xB0269B0)
#define CLASS_2_0C1EE8A3BE8526FC_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xB0266E0)
#define CLASS_2_0C1EE8A3BE8526FC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB026AF0)
#define CLASS_2_0C1EE8A3BE8526FC__CTOR_OFFSET UNITYSDK_OFFSET(0xB026AE0)

inline static constexpr unsigned int Class_2_0C1EE8A3BE8526FC_TypeDefinitionIndex = 40217;

class Class_2_0C1EE8A3BE8526FC : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::UIControllerExtensionData* Field_2_11; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x30
	::UnityEngine::UI::Text* Field_2_6; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x40
	::UnityEngine::RectTransform* Field_2_10; // 0x48
	::UnityEngine::CanvasGroup* Field_2_12; // 0x50
	::UnityEngine::UI::Text* Field_2_8; // 0x58
	::UnityEngine::Transform* Field_2_9; // 0x60
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x68
	::UnityEngine::GameObject* Field_2_7; // 0x70
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_29352E75304CF2A0()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_METHOD_2_29352E75304CF2A0_OFFSET))(this);
	}
};
