#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

#define MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTROLLER_GET_ACTIVE_OFFSET UNITYSDK_OFFSET(0x71E09A0)
#define MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTROLLER_GET_NEEDCACHE_OFFSET UNITYSDK_OFFSET(0x71E0990)
#define MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x71E09B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapRightTastListWidget02WidgetController_TypeDefinitionIndex = 43208;

	class UIUrbanMapRightTastListWidget02WidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::System::Boolean _Active_k__BackingField; // 0x2A0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_NeedCache()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTROLLER_GET_NEEDCACHE_OFFSET))(this);
		}

		::System::Boolean get_Active()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPRIGHTTASTLISTWIDGET02WIDGETCONTROLLER_GET_ACTIVE_OFFSET))(this);
		}
	};
}
