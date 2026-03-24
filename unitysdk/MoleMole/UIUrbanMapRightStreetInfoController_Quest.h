#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapRightTastListWidget02WidgetController_2.h"

class Class_3_B9390801E77EB038;
namespace MoleMole { class UIUrbanMapRightStreetInfoContext_Quest; }

#define MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_QUEST__CTOR_OFFSET UNITYSDK_OFFSET(0xAA73040)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightStreetInfoController_Quest_TypeDefinitionIndex = 65969;

	class UIUrbanMapRightStreetInfoController_Quest : public ::MoleMole::UIUrbanMapRightTastListWidget02WidgetController_2<::Class_3_B9390801E77EB038*, ::MoleMole::UIUrbanMapRightStreetInfoContext_Quest*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTSTREETINFOCONTROLLER_QUEST__CTOR_OFFSET))(this);
		}
	};
}
