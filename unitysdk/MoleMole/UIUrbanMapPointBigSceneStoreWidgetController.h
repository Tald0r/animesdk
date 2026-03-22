#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B_3;
namespace MoleMole { class UIThreeDMapElement_BigSceneStoreContext; }

#define MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xEE4BA00)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointBigSceneStoreWidgetController_TypeDefinitionIndex = 44397;

	class UIUrbanMapPointBigSceneStoreWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B_3*, ::MoleMole::UIThreeDMapElement_BigSceneStoreContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTBIGSCENESTOREWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
