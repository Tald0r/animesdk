#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_008F7018E697FA4B_2;
namespace MoleMole { class UIThreeDMapElement_MonsterContext; }

#define MOLEMOLE_UIURBANMAPPOINTMONSTERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7BDE900)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointMonsterWidgetController_TypeDefinitionIndex = 44761;

	class UIUrbanMapPointMonsterWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_008F7018E697FA4B_2*, ::MoleMole::UIThreeDMapElement_MonsterContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTMONSTERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
