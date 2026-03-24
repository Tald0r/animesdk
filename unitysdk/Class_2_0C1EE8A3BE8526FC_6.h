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

#define CLASS_2_0C1EE8A3BE8526FC_6_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xA799C50)
#define CLASS_2_0C1EE8A3BE8526FC_6_METHOD_2_8BCB3191E6BEE7CB_OFFSET UNITYSDK_OFFSET(0xA799F10)
#define CLASS_2_0C1EE8A3BE8526FC_6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xA79A090)
#define CLASS_2_0C1EE8A3BE8526FC_6__CTOR_OFFSET UNITYSDK_OFFSET(0xA79A080)

inline static constexpr unsigned int Class_2_0C1EE8A3BE8526FC_6_TypeDefinitionIndex = 49897;

class Class_2_0C1EE8A3BE8526FC_6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_12; // 0x18
	::UnityEngine::Animator* Field_2_1; // 0x20
	::UnityEngine::Transform* Field_2_9; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x48
	::UIControllerExtensionData* Field_2_11; // 0x50
	::UnityEngine::UI::Text* Field_2_6; // 0x58
	::Class_2_A8F5ABF31E066ED4* Field_2_3; // 0x60
	::UnityEngine::RectTransform* Field_2_10; // 0x68
	::UnityEngine::UI::Text* Field_2_8; // 0x70
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_6_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_8BCB3191E6BEE7CB()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_6_METHOD_2_8BCB3191E6BEE7CB_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_0C1EE8A3BE8526FC_6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
