#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIUrbanMapPointWidgetController_2.h"

class Class_3_B252F4194F58E5F8;
namespace MoleMole { class UIThreeDMapElement_DiffSectionTrackContext; }

#define MOLEMOLE_UIURBANMAPPOINTDIFFSECTIONTRACKWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9EE9AE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapPointDiffSectionTrackWidgetController_TypeDefinitionIndex = 39780;

	class UIUrbanMapPointDiffSectionTrackWidgetController : public ::MoleMole::UIUrbanMapPointWidgetController_2<::Class_3_B252F4194F58E5F8*, ::MoleMole::UIThreeDMapElement_DiffSectionTrackContext*>
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPPOINTDIFFSECTIONTRACKWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}
	};
}
