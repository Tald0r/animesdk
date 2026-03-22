#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_69F4FF10F8BDC832;
namespace MoleMole { class UIActivityDemoTrialPreviewBtnWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONCLICKPREVIEWBTN_OFFSET UNITYSDK_OFFSET(0xB5E6B60)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB5E6850)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB5E68F0)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB5E6680)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB5E6720)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_SETWEAPONORBANGBOOID_OFFSET UNITYSDK_OFFSET(0xB5E69D0)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB5E6BD0)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB5E6C00)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB5E6C70)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB5E6CF0)
#define MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xB5E6D50)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityWeaponBangbooBGWidgetController_TypeDefinitionIndex = 53877;

	class UIActivityWeaponBangbooBGWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_69F4FF10F8BDC832* _view; // 0x2A0
		::MoleMole::UIActivityDemoTrialPreviewBtnWidgetController* roleNameplate; // 0x2A8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetWeaponOrBangbooID(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_SETWEAPONORBANGBOOID_OFFSET))(this, itemID);
		}

		::System::Void OnClickPreviewBtn(::System::Int32 itemID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER_ONCLICKPREVIEWBTN_OFFSET))(this, itemID);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYWEAPONBANGBOOBGWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
