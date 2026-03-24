#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoUILoopText;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_30765AFAABE3B930_OFFSET UNITYSDK_OFFSET(0x6D8DD20)
#define CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x6D8DF20)
#define CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6D8E010)
#define CLASS_2_ACC3BE6A5FB4D20F__CTOR_OFFSET UNITYSDK_OFFSET(0x6D8E000)

inline static constexpr unsigned int Class_2_ACC3BE6A5FB4D20F_TypeDefinitionIndex = 52925;

class Class_2_ACC3BE6A5FB4D20F : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::GameObject* Field_2_4; // 0x18
	::MonoUILoopText* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x28
	::UnityEngine::UI::Text* Field_2_2; // 0x30
	::UnityEngine::GameObject* Field_2_7; // 0x38
	::UnityEngine::RectTransform* Field_2_1; // 0x40
	::UnityEngine::Animation* Field_2_0; // 0x48
	::UnityEngine::RectTransform* Field_2_6; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_30765AFAABE3B930(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_30765AFAABE3B930_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_ACC3BE6A5FB4D20F_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
