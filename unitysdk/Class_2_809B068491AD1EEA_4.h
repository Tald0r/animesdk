#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_809B068491AD1EEA_4_METHOD_2_445108444CB6DC1F_OFFSET UNITYSDK_OFFSET(0xACA8060)
#define CLASS_2_809B068491AD1EEA_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0xACA8130)
#define CLASS_2_809B068491AD1EEA_4__CTOR_OFFSET UNITYSDK_OFFSET(0xACA8120)

inline static constexpr unsigned int Class_2_809B068491AD1EEA_4_TypeDefinitionIndex = 62936;

class Class_2_809B068491AD1EEA_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::RectTransform* Field_2_1; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_809B068491AD1EEA_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_445108444CB6DC1F(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_809B068491AD1EEA_4_METHOD_2_445108444CB6DC1F_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_809B068491AD1EEA_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
