#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabData.h"
#include "unitysdk/MoleMole/UIAutoBattleRuleDialogPopWindowController_TabType.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_F0E4E2848B1D52CE;
class Class_2_E18273998F3C44B7;
namespace MoleMole { class UIABInLevelArcadetInfoWidgetController; }
namespace MoleMole { class UIABInLevelGoldInfoWidgetController; }
namespace MoleMole { class UIABInLevelHPInfoWidgetController; }
namespace MoleMole { class UIABInLevelRankInfoWidgetController; }
namespace MoleMole { class UIABInfoContext; }
namespace MoleMole { class UIAutoBattleCollectionTabBtnRowWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIWidgetController; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_CREATETABCONTROLLER_OFFSET UNITYSDK_OFFSET(0xA4CE1C0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA4CD900)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_INITPLATFORMSETTING_OFFSET UNITYSDK_OFFSET(0xA4CDA90)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4CEDE0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONTABSELECTED_OFFSET UNITYSDK_OFFSET(0xA4CE2E0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4CEE80)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4CD910)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4CEB20)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_SETUPTABS_OFFSET UNITYSDK_OFFSET(0xA4CDCE0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA4CEF10)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__ONUIOPEN_B__19_0_OFFSET UNITYSDK_OFFSET(0xA4CEFF0)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA4CF000)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA4CF070)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA4CF080)
#define MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA4CF090)

namespace MoleMole
{
	inline static constexpr unsigned int UIAutoBattleRuleDialogPopWindowController_TypeDefinitionIndex = 55347;

	class UIAutoBattleRuleDialogPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_E18273998F3C44B7* _view; // 0x2F8
		::Class_1_F0E4E2848B1D52CE* _viewModel; // 0x300
		::System::Collections::Generic::List_1<::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData>* _typeTabs; // 0x308
		::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType _currentTabType; // 0x310
		::MoleMole::UIABInLevelGoldInfoWidgetController* goldWidget; // 0x318
		::MoleMole::UIABInLevelRankInfoWidgetController* randWidget; // 0x320
		::MoleMole::UIABInLevelHPInfoWidgetController* hpWidget; // 0x328
		::MoleMole::UIABInLevelArcadetInfoWidgetController* arcadeWidget; // 0x330
		::System::Collections::Generic::Dictionary_2<::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType, ::MoleMole::UIWidgetController*>* widgetDict; // 0x338
		::MoleMole::UIABInfoContext* context; // 0x340
		::System::Boolean _allowShowPlatform; // 0x348

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitPlatformSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_INITPLATFORMSETTING_OFFSET))(this);
		}

		::System::Void SetupTabs(::System::Int32 tabIndex)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_SETUPTABS_OFFSET))(this, tabIndex);
		}

		::System::Void OnTabSelected(::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONTABSELECTED_OFFSET))(this, type);
		}

		::MoleMole::UIAutoBattleCollectionTabBtnRowWidgetController* CreateTabController(::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData data)
		{
			return ((::MoleMole::UIAutoBattleCollectionTabBtnRowWidgetController*(*)(::PVOID, ::MoleMole::UIAutoBattleRuleDialogPopWindowController_TabData))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_CREATETABCONTROLLER_OFFSET))(this, data);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__19_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER__ONUIOPEN_B__19_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIAUTOBATTLERULEDIALOGPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
