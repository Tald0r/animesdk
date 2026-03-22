#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_AE0A010C3A5C4A59_METHOD_2_2D8360ADEC831C05_OFFSET UNITYSDK_OFFSET(0x6A7D5A0)
#define CLASS_2_AE0A010C3A5C4A59_METHOD_2_9DE87B16AD0A605E_OFFSET UNITYSDK_OFFSET(0x6A7D7B0)
#define CLASS_2_AE0A010C3A5C4A59_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6A7D8A0)
#define CLASS_2_AE0A010C3A5C4A59__CTOR_OFFSET UNITYSDK_OFFSET(0x6A7D890)

inline static constexpr unsigned int Class_2_AE0A010C3A5C4A59_TypeDefinitionIndex = 43679;

class Class_2_AE0A010C3A5C4A59 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::Class_2_A8F5ABF31E066ED4* Field_2_2; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_7; // 0x28
	::MoleMole::NotificationBadgeEx* Field_2_1; // 0x30
	::MoleMole::UIGeneralButtonController* Field_2_0; // 0x38
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_6; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_5; // 0x48
	::Class_2_A8F5ABF31E066ED4* Field_2_4; // 0x50

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE0A010C3A5C4A59__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_2D8360ADEC831C05(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AE0A010C3A5C4A59_METHOD_2_2D8360ADEC831C05_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_AE0A010C3A5C4A59_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_9DE87B16AD0A605E()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_AE0A010C3A5C4A59_METHOD_2_9DE87B16AD0A605E_OFFSET))(this);
	}
};
