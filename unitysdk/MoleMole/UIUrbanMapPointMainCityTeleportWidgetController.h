#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_AD95A7FFAFA9A1EC;
namespace MoleMole { class UIThreeDMapElement_MainCityTeleportContext; }

#define MOLEMOLE_UIURBANMAPPOINTMAINCITYTELEPORTWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x73E7F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMainCityTeleportWidgetController_TypeDefinitionIndex = 65706;

	class UIUrbanMapPointMainCityTeleportWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_AD95A7FFAFA9A1EC*, ::MoleMole::UIThreeDMapElement_MainCityTeleportContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMAINCITYTELEPORTWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
