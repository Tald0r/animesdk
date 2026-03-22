#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B_2;
namespace MoleMole { class UIThreeDMapElement_TreasureContext; }

#define MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xCA83B60)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointTreasureWidgetController_TypeDefinitionIndex = 44270;

	class UIUrbanMapPointTreasureWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B_2*, ::MoleMole::UIThreeDMapElement_TreasureContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTTREASUREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
