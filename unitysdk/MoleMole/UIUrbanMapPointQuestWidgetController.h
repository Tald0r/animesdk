#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_B252F4194F58E5F8_1;
namespace MoleMole { class UIThreeDMapElement_QuestContext; }

#define MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95A7A90)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointQuestWidgetController_TypeDefinitionIndex = 77952;

	class UIUrbanMapPointQuestWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_B252F4194F58E5F8_1*, ::MoleMole::UIThreeDMapElement_QuestContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
