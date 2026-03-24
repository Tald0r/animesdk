#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_6DC05D80C637642A;
namespace MoleMole { class UIThreeDMapElement_PartnerDateContext; }

#define MOLEMOLE_UIURBANMAPPOINTPARTNERDATEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9913000)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointPartnerDateWidgetController_TypeDefinitionIndex = 39771;

	class UIUrbanMapPointPartnerDateWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_6DC05D80C637642A*, ::MoleMole::UIThreeDMapElement_PartnerDateContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTPARTNERDATEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
