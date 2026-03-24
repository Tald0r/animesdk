#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
class MonoWorldLevelUpConfig;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E9BF1A81C797C171_METHOD_2_7835DD7D7F7FF1B7_OFFSET UNITYSDK_OFFSET(0x93133E0)
#define CLASS_2_E9BF1A81C797C171_METHOD_2_8CE71901D76EEEA9_OFFSET UNITYSDK_OFFSET(0x93131B0)
#define CLASS_2_E9BF1A81C797C171_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x93134D0)
#define CLASS_2_E9BF1A81C797C171__CTOR_OFFSET UNITYSDK_OFFSET(0x93134C0)

inline static constexpr unsigned int Class_2_E9BF1A81C797C171_TypeDefinitionIndex = 79288;

class Class_2_E9BF1A81C797C171 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_8; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x40
	::MonoWorldLevelUpConfig* Field_2_9; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x58
	::UnityEngine::RectTransform* Field_2_7; // 0x60

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BF1A81C797C171__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_8CE71901D76EEEA9(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9BF1A81C797C171_METHOD_2_8CE71901D76EEEA9_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_7835DD7D7F7FF1B7()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E9BF1A81C797C171_METHOD_2_7835DD7D7F7FF1B7_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E9BF1A81C797C171_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
