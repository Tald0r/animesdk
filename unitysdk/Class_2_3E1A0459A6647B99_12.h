#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3E1A0459A6647B99_12_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x6BD5DB0)
#define CLASS_2_3E1A0459A6647B99_12_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6BD5E60)
#define CLASS_2_3E1A0459A6647B99_12_METHOD_2_CBC0149B5D954D19_OFFSET UNITYSDK_OFFSET(0x6BD5BE0)
#define CLASS_2_3E1A0459A6647B99_12__CTOR_OFFSET UNITYSDK_OFFSET(0x6BD5E50)

inline static constexpr unsigned int Class_2_3E1A0459A6647B99_12_TypeDefinitionIndex = 77665;

class Class_2_3E1A0459A6647B99_12 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x18
	::UnityEngine::RectTransform* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x30
	::UnityEngine::RectTransform* Field_2_2; // 0x38
	::UnityEngine::RectTransform* Field_2_4; // 0x40

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_12__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_CBC0149B5D954D19(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_12_METHOD_2_CBC0149B5D954D19_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_12_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_12_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
