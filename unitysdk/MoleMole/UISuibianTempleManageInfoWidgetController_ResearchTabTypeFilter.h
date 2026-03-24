#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_EDC2AF1268851C10.h"
#include "unitysdk/System/Object.h"

class Class_2_1E89A1A01EA84819;

#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER_PREDICATE_OFFSET UNITYSDK_OFFSET(0x951A650)
#define MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER__CTOR_OFFSET UNITYSDK_OFFSET(0x951A640)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleManageInfoWidgetController_ResearchTabTypeFilter_TypeDefinitionIndex = 40177;

	class UISuibianTempleManageInfoWidgetController_ResearchTabTypeFilter : public ::System::Object
	{
	public:
		::Enum_3_EDC2AF1268851C10 researchTabType; // 0x10

		::System::Void _ctor(::Enum_3_EDC2AF1268851C10 researchTabType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_EDC2AF1268851C10))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER__CTOR_OFFSET))(this, researchTabType);
		}

		::System::Boolean Predicate(::Class_2_1E89A1A01EA84819* product)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_1E89A1A01EA84819*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEMANAGEINFOWIDGETCONTROLLER_RESEARCHTABTYPEFILTER_PREDICATE_OFFSET))(this, product);
		}
	};
}
