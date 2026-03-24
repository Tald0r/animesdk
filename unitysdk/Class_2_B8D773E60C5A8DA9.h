#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class Animator; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine { class Transform; }

#define CLASS_2_B8D773E60C5A8DA9_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0xDC14760)
#define CLASS_2_B8D773E60C5A8DA9_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0xDC144B0)
#define CLASS_2_B8D773E60C5A8DA9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xDC148A0)
#define CLASS_2_B8D773E60C5A8DA9__CTOR_OFFSET UNITYSDK_OFFSET(0xDC14890)

inline static constexpr unsigned int Class_2_B8D773E60C5A8DA9_TypeDefinitionIndex = 42746;

class Class_2_B8D773E60C5A8DA9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::Animation* Field_2_2; // 0x18
	::UnityEngine::Transform* Field_2_6; // 0x20
	::UnityEngine::CanvasGroup* Field_2_11; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x30
	::Class_2_A8F5ABF31E066ED4* Field_2_10; // 0x38
	::UnityEngine::Transform* Field_2_3; // 0x40
	::UnityEngine::Animator* Field_2_1; // 0x48
	::UnityEngine::CanvasGroup* Field_2_5; // 0x50
	::UnityEngine::RectTransform* Field_2_7; // 0x58
	::UnityEngine::GameObject* Field_2_9; // 0x60
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x68
	::UnityEngine::RectTransform* Field_2_12; // 0x70
	::UnityEngine::RectTransform* Field_2_8; // 0x78

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D773E60C5A8DA9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B8D773E60C5A8DA9_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B8D773E60C5A8DA9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B8D773E60C5A8DA9_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
