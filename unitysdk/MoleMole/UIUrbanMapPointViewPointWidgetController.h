#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_8D37149384370F73;
namespace MoleMole { class UIThreeDMapElement_ViewPointContext; }

#define MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8887FA0)
#define MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8888070)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointViewPointWidgetController_TypeDefinitionIndex = 64944;

	class UIUrbanMapPointViewPointWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_8D37149384370F73*, ::MoleMole::UIThreeDMapElement_ViewPointContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTVIEWPOINTWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}
	};
}
