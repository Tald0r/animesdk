#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_8BD0FC90A1FA7CD9_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x16EB0240)
#define CLASS_2_8BD0FC90A1FA7CD9_METHOD_2_9FA85F81BF5EE3CA_OFFSET UNITYSDK_OFFSET(0x16EB0450)
#define CLASS_2_8BD0FC90A1FA7CD9_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x16EB0520)
#define CLASS_2_8BD0FC90A1FA7CD9__CTOR_OFFSET UNITYSDK_OFFSET(0x16EB0510)

inline static constexpr unsigned int Class_2_8BD0FC90A1FA7CD9_TypeDefinitionIndex = 76902;

class Class_2_8BD0FC90A1FA7CD9 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x20
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x28
	::UnityEngine::CanvasGroup* Field_2_6; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x38
	::UnityEngine::RectTransform* Field_2_2; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BD0FC90A1FA7CD9__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8BD0FC90A1FA7CD9_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9FA85F81BF5EE3CA()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_8BD0FC90A1FA7CD9_METHOD_2_9FA85F81BF5EE3CA_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_8BD0FC90A1FA7CD9_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
