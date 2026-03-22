#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_9E3E3CDA608A4F58;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class MonoUIColorCollection; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_063C846A0B9F182E_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x87D7550)
#define CLASS_2_063C846A0B9F182E_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x87D7320)
#define CLASS_2_063C846A0B9F182E_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x87D7600)
#define CLASS_2_063C846A0B9F182E__CTOR_OFFSET UNITYSDK_OFFSET(0x87D75F0)

inline static constexpr unsigned int Class_2_063C846A0B9F182E_TypeDefinitionIndex = 73058;

class Class_2_063C846A0B9F182E : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_7; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x20
	::MoleMole::MonoUIColorCollection* Field_2_3; // 0x28
	::MoleMole::MonoUIColorCollection* Field_2_5; // 0x30
	::Class_2_9E3E3CDA608A4F58* Field_2_6; // 0x38
	::MoleMole::MonoUIColorCollection* Field_2_4; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x48
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_0; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_063C846A0B9F182E_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}
};
