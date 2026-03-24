#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_9E5C60401935EF42_1_METHOD_2_9A4D8B3D924EA81A_OFFSET UNITYSDK_OFFSET(0xB80BAC0)
#define CLASS_2_9E5C60401935EF42_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xB80BC00)
#define CLASS_2_9E5C60401935EF42_1__CTOR_OFFSET UNITYSDK_OFFSET(0xB80BBF0)

inline static constexpr unsigned int Class_2_9E5C60401935EF42_1_TypeDefinitionIndex = 39552;

class Class_2_9E5C60401935EF42_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_0; // 0x18
	::Class_2_9E3E3CDA608A4F58* Field_2_1; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9E5C60401935EF42_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_9A4D8B3D924EA81A(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E5C60401935EF42_1_METHOD_2_9A4D8B3D924EA81A_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9E5C60401935EF42_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
