#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoGeneralLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class Text; }
namespace UnityEngine::UI::Extension { class UIDynamicNumberLabel; }

#define CLASS_2_665DC60C570878D1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xD271DD0)
#define CLASS_2_665DC60C570878D1_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0xD271C10)
#define CLASS_2_665DC60C570878D1__CTOR_OFFSET UNITYSDK_OFFSET(0xD271DC0)

inline static constexpr unsigned int Class_2_665DC60C570878D1_TypeDefinitionIndex = 38183;

class Class_2_665DC60C570878D1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Text* Field_2_10; // 0x18
	::UnityEngine::GameObject* Field_2_2; // 0x20
	::MonoGeneralLevelUpConfig* Field_2_0; // 0x28
	::UnityEngine::UI::Text* Field_2_8; // 0x30
	::UnityEngine::Animation* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_9; // 0x40
	::UnityEngine::UI::Extension::UIDynamicNumberLabel* Field_2_6; // 0x48
	::UnityEngine::RectTransform* Field_2_3; // 0x50
	::UnityEngine::RectTransform* Field_2_4; // 0x58
	::UnityEngine::UI::Text* Field_2_7; // 0x60
	::UnityEngine::RectTransform* Field_2_5; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_665DC60C570878D1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_665DC60C570878D1_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_665DC60C570878D1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
