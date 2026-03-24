#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ActivityGuideUIBaseWidgetController.h"

class Class_1_D375C91CCE5D3999;
class Class_2_CD6523BC6729FD35;
namespace MoleMole { class UIActgivityMasterCoffeeItemWidgetController; }
namespace MoleMole { class UIActgivityMasterHollowItemWidgetController; }
namespace MoleMole { class UIActgivityMasterRamenItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }

#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD2388C0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONGUDIEWIDGETACTIVITYEND_OFFSET UNITYSDK_OFFSET(0xD238CE0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD238BE0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD238A20)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD238B50)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD238580)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD238620)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_OPENDETAIL_OFFSET UNITYSDK_OFFSET(0xD238D50)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xD238C50)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET UNITYSDK_OFFSET(0xD238AE0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHTITLE_OFFSET UNITYSDK_OFFSET(0xD2387B0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD238DD0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD238E00)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xD238E70)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD238E80)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD238E90)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD238EA0)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD238F00)
#define MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET UNITYSDK_OFFSET(0xD238F10)

namespace MoleMole
{
	inline static constexpr unsigned int UIActivityMasterMakeWidgetController_TypeDefinitionIndex = 74682;

	class UIActivityMasterMakeWidgetController : public ::MoleMole::ActivityGuideUIBaseWidgetController
	{
	public:
		::Class_2_CD6523BC6729FD35* _view; // 0x2C8
		::MoleMole::UIActgivityMasterHollowItemWidgetController* hollowcardItemController; // 0x2D0
		::MoleMole::UIActgivityMasterRamenItemWidgetController* ramenItemController; // 0x2D8
		::MoleMole::UIActgivityMasterCoffeeItemWidgetController* coffeeItemController; // 0x2E0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void PlayFadeOut(::System::Action* callback, ::System::Single animSpeed)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_PLAYFADEOUT_OFFSET))(this, callback, animSpeed);
		}

		::System::Void RefreshRemainTimerText(::Class_1_D375C91CCE5D3999* data)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D375C91CCE5D3999*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHREMAINTIMERTEXT_OFFSET))(this, data);
		}

		::System::Void OnGudieWidgetActivityEnd()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_ONGUDIEWIDGETACTIVITYEND_OFFSET))(this);
		}

		::System::Void RefreshTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_REFRESHTITLE_OFFSET))(this);
		}

		::System::Void OpenDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER_OPENDETAIL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_PlayFadeOut(::System::Action* P0, ::System::Single P1)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIACTIVITYMASTERMAKEWIDGETCONTROLLER___BASE_PLAYFADEOUT_OFFSET))(this, P0, P1);
		}
	};
}
