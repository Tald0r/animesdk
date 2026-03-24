#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_EEA0111A28582B57.h"

class Class_2_777A5D016ADC7368;
class Class_2_A8F5ABF31E066ED4;
namespace MoleMole { class NotificationBadge; }
namespace MoleMole { class NotificationBadgeEx; }
namespace MoleMole { class UIControlCollection; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }
namespace UnityEngine::UI::Extension { class UIToggleButton; }

#define CLASS_2_BA6B385B5E3FB764_METHOD_2_1B167429A8B82AD3_OFFSET UNITYSDK_OFFSET(0x6A8F0A0)
#define CLASS_2_BA6B385B5E3FB764_METHOD_2_5A4C962718782000_OFFSET UNITYSDK_OFFSET(0x6A8EE10)
#define CLASS_2_BA6B385B5E3FB764_METHOD_2_C8903A36ECBA4078_OFFSET UNITYSDK_OFFSET(0x6A8F150)
#define CLASS_2_BA6B385B5E3FB764__CTOR_OFFSET UNITYSDK_OFFSET(0x6A8F140)

inline static constexpr unsigned int Class_2_BA6B385B5E3FB764_TypeDefinitionIndex = 37750;

class Class_2_BA6B385B5E3FB764 : public ::Class_1_EEA0111A28582B57
{
public:
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_3; // 0x18
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_4; // 0x20
	::MoleMole::NotificationBadgeEx* Field_2_7; // 0x28
	::Class_2_A8F5ABF31E066ED4* Field_2_5; // 0x30
	::UnityEngine::RectTransform* Field_2_8; // 0x38
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_1; // 0x40
	::UnityEngine::UI::Extension::UIToggleButton* Field_2_6; // 0x48
	::UnityEngine::GameObject* Field_2_2; // 0x50
	::UnityEngine::RectTransform* Field_2_9; // 0x58
	::MoleMole::NotificationBadge* Field_2_0; // 0x60
	::UnityEngine::UI::Extension::UILocalizationText* Field_2_10; // 0x68

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA6B385B5E3FB764__CTOR_OFFSET))(this);
	}

	::System::Void Method_2_5A4C962718782000(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA6B385B5E3FB764_METHOD_2_5A4C962718782000_OFFSET))(this, a1, a2);
	}

	::System::Void Method_2_1B167429A8B82AD3()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_BA6B385B5E3FB764_METHOD_2_1B167429A8B82AD3_OFFSET))(this);
	}

	::System::Void Method_2_C8903A36ECBA4078(::Class_2_777A5D016ADC7368* a1, ::MoleMole::UIControlCollection* a2)
	{
		return ((::System::Void(*)(::PVOID, ::Class_2_777A5D016ADC7368*, ::MoleMole::UIControlCollection*))((::PBYTE)hIl2Cpp + CLASS_2_BA6B385B5E3FB764_METHOD_2_C8903A36ECBA4078_OFFSET))(this, a1, a2);
	}
};
