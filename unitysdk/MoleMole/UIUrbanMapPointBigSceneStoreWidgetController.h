#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }

#define MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA72760)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBigSceneStoreWidgetController_TypeDefinitionIndex = 62671;

	class UIUrbanMapPointBigSceneStoreWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B*, ::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
