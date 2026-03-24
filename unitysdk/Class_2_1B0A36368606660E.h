#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_1B0A36368606660E_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x891D4F0)
#define CLASS_2_1B0A36368606660E_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x891D710)
#define CLASS_2_1B0A36368606660E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x891D800)
#define CLASS_2_1B0A36368606660E__CTOR_OFFSET UNITYSDK_OFFSET(0x891D7F0)

inline static constexpr unsigned int Class_2_1B0A36368606660E_TypeDefinitionIndex = 39068;

class Class_2_1B0A36368606660E : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::RectTransform* Field_2_3; // 0x18
	::UnityEngine::RectTransform* Field_2_6; // 0x20
	::UnityEngine::RectTransform* Field_2_2; // 0x28
	::Class_2_60DDD9C206686F44* Field_2_4; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::Class_2_A8F5ABF31E066ED4* Field_2_0; // 0x48

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_1B0A36368606660E_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
