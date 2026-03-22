#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class Animation; }
namespace UnityEngine { class CanvasGroup; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_E5A1C01D15FD772B_METHOD_2_572E53F76E315839_OFFSET UNITYSDK_OFFSET(0x88FFFF0)
#define CLASS_2_E5A1C01D15FD772B_METHOD_2_63BBC99244640EE0_OFFSET UNITYSDK_OFFSET(0x88FFDD0)
#define CLASS_2_E5A1C01D15FD772B_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x8900130)
#define CLASS_2_E5A1C01D15FD772B__CTOR_OFFSET UNITYSDK_OFFSET(0x8900120)

inline static constexpr unsigned int Class_2_E5A1C01D15FD772B_TypeDefinitionIndex = 76978;

class Class_2_E5A1C01D15FD772B : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x20
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x28
	::UnityEngine::Animation* Field_2_6; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_1; // 0x40
	::UnityEngine::CanvasGroup* Field_2_7; // 0x48
	::UnityEngine::CanvasGroup* Field_2_3; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5A1C01D15FD772B__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_63BBC99244640EE0(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E5A1C01D15FD772B_METHOD_2_63BBC99244640EE0_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_E5A1C01D15FD772B_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_572E53F76E315839()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_E5A1C01D15FD772B_METHOD_2_572E53F76E315839_OFFSET))(this);
	}
};
