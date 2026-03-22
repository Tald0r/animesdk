#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_5F36F39B4E91B4F4;
namespace MoleMole { class UIThreeDMapElement_LocalPlayerContext; }

#define MOLEMOLE_UIURBANMAPPOINTPLAYERWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x71DFFF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointPlayerWidgetController_TypeDefinitionIndex = 62640;

	class UIUrbanMapPointPlayerWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_5F36F39B4E91B4F4*, ::MoleMole::UIThreeDMapElement_LocalPlayerContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTPLAYERWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
