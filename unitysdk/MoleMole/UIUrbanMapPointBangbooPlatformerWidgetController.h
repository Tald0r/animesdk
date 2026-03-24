#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B_4;
namespace MoleMole { class UIThreeDMapElement_BangbooPlatformerContext; }

#define MOLEMOLE_UIURBANMAPPOINTBANGBOOPLATFORMERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE9A60)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBangbooPlatformerWidgetController_TypeDefinitionIndex = 48236;

	class UIUrbanMapPointBangbooPlatformerWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B_4*, ::MoleMole::UIThreeDMapElement_BangbooPlatformerContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBANGBOOPLATFORMERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
