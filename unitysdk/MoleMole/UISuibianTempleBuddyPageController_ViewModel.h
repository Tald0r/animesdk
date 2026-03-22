#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xAE26770)
#define MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xAE267D0)

namespace MoleMole
{
	inline static constexpr unsigned int UISuibianTempleBuddyPageController_ViewModel_TypeDefinitionIndex = 37802;

	class UISuibianTempleBuddyPageController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUIBIANTEMPLEBUDDYPAGECONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}
	};
}
