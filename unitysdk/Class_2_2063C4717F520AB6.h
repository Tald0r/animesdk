#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_2063C4717F520AB6_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x67499C0)
#define CLASS_2_2063C4717F520AB6_METHOD_2_E9A21D244C9D6B36_OFFSET UNITYSDK_OFFSET(0x6749860)
#define CLASS_2_2063C4717F520AB6__CTOR_OFFSET UNITYSDK_OFFSET(0x67499B0)

inline static constexpr unsigned int Class_2_2063C4717F520AB6_TypeDefinitionIndex = 77934;

class Class_2_2063C4717F520AB6 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_5; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::MonoUITableScrollV2* Field_2_1; // 0x38
	::MoleMole::UIGeneralButtonController* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_2063C4717F520AB6__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_E9A21D244C9D6B36(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2063C4717F520AB6_METHOD_2_E9A21D244C9D6B36_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_2063C4717F520AB6_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
