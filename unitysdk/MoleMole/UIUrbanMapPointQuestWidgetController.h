#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_B252F4194F58E5F8;
namespace MoleMole { class UIThreeDMapElement_QuestContext; }

#define MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAA7C50)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointQuestWidgetController_TypeDefinitionIndex = 66431;

	class UIUrbanMapPointQuestWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_B252F4194F58E5F8*, ::MoleMole::UIThreeDMapElement_QuestContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTQUESTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
