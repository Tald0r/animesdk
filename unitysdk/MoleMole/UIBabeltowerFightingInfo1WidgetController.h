#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIBabeltowerFightingInfoWidgetController.h"

#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER_CHECKNEWBIE_OFFSET UNITYSDK_OFFSET(0xC273780)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC2736A0)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC273820)
#define MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC273830)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerFightingInfo1WidgetController_TypeDefinitionIndex = 52852;

	class UIBabeltowerFightingInfo1WidgetController : public ::MoleMole::UIBabeltowerFightingInfoWidgetController
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnPostRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER_ONPOSTREFRESHVIEW_OFFSET))(this);
		}

		::System::Void CheckNewbie()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER_CHECKNEWBIE_OFFSET))(this);
		}

		::System::Void __base_OnPostRefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERFIGHTINGINFO1WIDGETCONTROLLER___BASE_ONPOSTREFRESHVIEW_OFFSET))(this);
		}
	};
}
