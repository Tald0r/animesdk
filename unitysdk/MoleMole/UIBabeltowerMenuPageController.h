#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_08E43914789BE5F3;
class Class_2_E9543FE9A535C10F;
namespace MoleMole { class UIBabeltowerMenuBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xDF0C0D0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONBABELTOWERCLICK_OFFSET UNITYSDK_OFFSET(0xDF0D5B0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONBABELTOWERUPDATE_OFFSET UNITYSDK_OFFSET(0xDF0D3E0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDF0C1D0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xDF0D930)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDF0D9A0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDF0C360)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDF0C270)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_REFRESHNEW_OFFSET UNITYSDK_OFFSET(0xDF0C840)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_REFRESHREDPOINT_OFFSET UNITYSDK_OFFSET(0xDF0CE60)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xDF0C0E0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDF0DA30)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xDF0DA40)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xDF0DAB0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDF0DAC0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDF0DAD0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDF0DAE0)
#define MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xDF0DAF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIBabeltowerMenuPageController_TypeDefinitionIndex = 38363;

	class UIBabeltowerMenuPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_E9543FE9A535C10F* _view; // 0x308
		::MoleMole::UIBabeltowerMenuBtnWidgetController* activityWidget; // 0x310
		::Class_2_08E43914789BE5F3* towerModel; // 0x318
		::System::Int32 activityTowerID; // 0x320
		::MoleMole::UIGeneralNewHintWidgetController* normalNew; // 0x328
		::MoleMole::UIGeneralNewHintWidgetController* specialNew; // 0x330

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnBabelTowerUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONBABELTOWERUPDATE_OFFSET))(this, args);
		}

		::System::Void RefreshRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_REFRESHREDPOINT_OFFSET))(this);
		}

		::System::Void OnBabelTowerClick(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONBABELTOWERCLICK_OFFSET))(this, args);
		}

		::System::Void RefreshNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_REFRESHNEW_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBABELTOWERMENUPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
