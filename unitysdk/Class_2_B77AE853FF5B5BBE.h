#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI { class HorizontalLayoutGroup; }
namespace UnityEngine::UI { class Text; }

#define CLASS_2_B77AE853FF5B5BBE_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x88A54A0)
#define CLASS_2_B77AE853FF5B5BBE_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x88A53A0)
#define CLASS_2_B77AE853FF5B5BBE__CTOR_OFFSET UNITYSDK_OFFSET(0x88A5490)

inline static constexpr unsigned int Class_2_B77AE853FF5B5BBE_TypeDefinitionIndex = 48047;

class Class_2_B77AE853FF5B5BBE : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_1; // 0x18
	::UnityEngine::UI::Text* Field_2_0; // 0x20
	::UnityEngine::UI::HorizontalLayoutGroup* Field_2_2; // 0x28

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_B77AE853FF5B5BBE__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B77AE853FF5B5BBE_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_B77AE853FF5B5BBE_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
