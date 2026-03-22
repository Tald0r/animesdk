#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_3E1A0459A6647B99_7_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x8D2FE70)
#define CLASS_2_3E1A0459A6647B99_7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8D2FF20)
#define CLASS_2_3E1A0459A6647B99_7_METHOD_2_D25F539834051480_OFFSET UNITYSDK_OFFSET(0x8D2FC70)
#define CLASS_2_3E1A0459A6647B99_7__CTOR_OFFSET UNITYSDK_OFFSET(0x8D2FF10)

inline static constexpr unsigned int Class_2_3E1A0459A6647B99_7_TypeDefinitionIndex = 63332;

class Class_2_3E1A0459A6647B99_7 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_2; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::UnityEngine::RectTransform* Field_2_4; // 0x30
	::UnityEngine::RectTransform* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x40
	::UnityEngine::RectTransform* Field_2_3; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_D25F539834051480(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_7_METHOD_2_D25F539834051480_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_3E1A0459A6647B99_7_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
