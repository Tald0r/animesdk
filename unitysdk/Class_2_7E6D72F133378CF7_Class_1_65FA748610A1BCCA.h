#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace MoleMole { class NotificationBadge; }
namespace UnityEngine::UI::Extension { class UILocalizationText; }

#define CLASS_2_7E6D72F133378CF7_CLASS_1_65FA748610A1BCCA__CTOR_OFFSET UNITYSDK_OFFSET(0x663AB80)

inline static constexpr unsigned int Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA_TypeDefinitionIndex = 45739;

class Class_2_7E6D72F133378CF7_Class_1_65FA748610A1BCCA : public ::System::Object
{
public:
	::MoleMole::NotificationBadge* Field_1_0; // 0x10
	::UnityEngine::UI::Extension::UILocalizationText* Field_1_1; // 0x18

	::System::Void _ctor()
	{
		return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + CLASS_2_7E6D72F133378CF7_CLASS_1_65FA748610A1BCCA__CTOR_OFFSET))(this);
	}
};
