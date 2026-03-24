#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B_1;
namespace MoleMole { class UIThreeDMapElement_TreasureContext; }

#define MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x790A320)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointTreasureWidgetController_TypeDefinitionIndex = 41562;

	class UIUrbanMapPointTreasureWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B_1*, ::MoleMole::UIThreeDMapElement_TreasureContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
