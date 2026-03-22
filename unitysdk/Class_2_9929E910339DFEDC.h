#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_60DDD9C206686F44;
class Class_2_777A5D016ADC7368;
class MonoUITableScrollV2;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define CLASS_2_9929E910339DFEDC_METHOD_2_7879E8D5956B4E2C_OFFSET UNITYSDK_OFFSET(0x7BE1DE0)
#define CLASS_2_9929E910339DFEDC_METHOD_2_AAD864A9DF964170_OFFSET UNITYSDK_OFFSET(0x7BE2090)
#define CLASS_2_9929E910339DFEDC_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x7BE21F0)
#define CLASS_2_9929E910339DFEDC__CTOR_OFFSET UNITYSDK_OFFSET(0x7BE21E0)

inline static constexpr unsigned int Class_2_9929E910339DFEDC_TypeDefinitionIndex = 64936;

class Class_2_9929E910339DFEDC : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_9; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_8; // 0x20
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x28
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_11; // 0x30
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x38
	::Class_2_60DDD9C206686F44* Field_2_12; // 0x40
	::MoleMole::NotificationBadge* Field_2_13; // 0x48
	::Class_2_60DDD9C206686F44* Field_2_0; // 0x50
	::MoleMole::NotificationBadge* Field_2_6; // 0x58
	::Class_2_60DDD9C206686F44* Field_2_2; // 0x60
	::UnityEngine::RectTransform* Field_2_5; // 0x68
	::MonoUITableScrollV2* Field_2_3; // 0x70
	::UnityEngine::RectTransform* Field_2_4; // 0x78
	::UnityEngine::UI::Extension::UITimeWidget* Field_2_7; // 0x80

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_7879E8D5956B4E2C(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC_METHOD_2_7879E8D5956B4E2C_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_AAD864A9DF964170()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC_METHOD_2_AAD864A9DF964170_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_9929E910339DFEDC_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
