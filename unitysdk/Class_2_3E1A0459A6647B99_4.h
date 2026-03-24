#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3E1A0459A6647B99_4_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x656B850)
#define CLASS_2_3E1A0459A6647B99_4_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x656B900)
#define CLASS_2_3E1A0459A6647B99_4_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x656B680)
#define CLASS_2_3E1A0459A6647B99_4__CTOR_OFFSET UNITYSDK_OFFSET(0x656B8F0)

inline static constexpr unsigned int Class_2_3E1A0459A6647B99_4_TypeDefinitionIndex = 44443;

class Class_2_3E1A0459A6647B99_4 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_0; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::RectTransform* Field_2_3; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_4__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_4_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_4_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_4_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
