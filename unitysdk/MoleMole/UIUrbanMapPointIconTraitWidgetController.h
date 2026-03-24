#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B_6;
namespace MoleMole { class UIThreeDMapElement_IconTraitContext; }

#define MOLEMOLE_UIURBANMAPPOINTICONTRAITWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9912F80)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointIconTraitWidgetController_TypeDefinitionIndex = 73154;

	class UIUrbanMapPointIconTraitWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B_6*, ::MoleMole::UIThreeDMapElement_IconTraitContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTICONTRAITWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
