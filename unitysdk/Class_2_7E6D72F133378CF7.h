#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1;
class Class_2_A8F5ABF31E066ED4;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace MoleMole { class UIGeneralButtonController; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_7E6D72F133378CF7_METHOD_2_78C5AA85812E15F5_OFFSET UNITYSDK_OFFSET(0x701F6C0)
#define CLASS_2_7E6D72F133378CF7_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x701FB80)
#define CLASS_2_7E6D72F133378CF7_METHOD_2_AB67BFD8CD826D9C_OFFSET UNITYSDK_OFFSET(0x701F960)
#define CLASS_2_7E6D72F133378CF7_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x701FCE0)
#define CLASS_2_7E6D72F133378CF7__CTOR_OFFSET UNITYSDK_OFFSET(0x701FCD0)

inline static constexpr unsigned int Class_2_7E6D72F133378CF7_TypeDefinitionIndex = 53170;

class Class_2_7E6D72F133378CF7 : public ::Class_1_EEA0111A28582B57
{
public:
	::Class_2_A8F5ABF31E066ED4* Field_2_6; // 0x18
	::System::Collections::Generic::List_1<::Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1*>* Field_2_7; // 0x20
	::UnityEngine::Animation* Field_2_10; // 0x28
	::MoleMole::NotificationBadge* Field_2_9; // 0x30
	::Class_2_60DDD9C206686F44* Field_2_8; // 0x38
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x40
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x48
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_3; // 0x50
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_2; // 0x58
	::MonoUITableScrollV2* Field_2_0; // 0x60
	::UnityEngine::UI::Extension::UITabButtonGroup* Field_2_1; // 0x68
	::MoleMole::UIGeneralButtonController* Field_2_11; // 0x70

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_78C5AA85812E15F5(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_78C5AA85812E15F5_OFFSET))(this, a1, a2);
	}

	::System::Collections::Generic::List_1<::Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1*>* Method_2_AB67BFD8CD826D9C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Collections::Generic::List_1<::Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_1*>*(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_AB67BFD8CD826D9C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
