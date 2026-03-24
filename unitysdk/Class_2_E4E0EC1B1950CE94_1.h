#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }

#define CLASS_2_E4E0EC1B1950CE94_1_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0x7AC1890)
#define CLASS_2_E4E0EC1B1950CE94_1_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7AC1950)
#define CLASS_2_E4E0EC1B1950CE94_1__CTOR_OFFSET UNITYSDK_OFFSET(0x7AC1940)

inline static constexpr unsigned int Class_2_E4E0EC1B1950CE94_1_TypeDefinitionIndex = 80427;

class Class_2_E4E0EC1B1950CE94_1 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::CanvasGroup* Field_2_1; // 0x18
	::UnityEngine::RectTransform* Field_2_0; // 0x20

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E4E0EC1B1950CE94_1__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E4E0EC1B1950CE94_1_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E4E0EC1B1950CE94_1_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
