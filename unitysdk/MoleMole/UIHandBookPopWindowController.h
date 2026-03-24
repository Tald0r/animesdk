#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_5A585DEB704A07E2;
class Class_2_C7387D40D4120A48;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDailyQuestHandBookWidgetController; }
namespace MoleMole { class UIGeneralNewHintWidgetController; }
namespace MoleMole { class UIGeneralPopUpHintWidgetController; }
namespace MoleMole { class UIHandBookManualWidgetController; }
namespace MoleMole { class UIHandBookPrimerWidgetController; }
namespace MoleMole { class UIHandBookTacticsWidgetController; }
namespace MoleMole { class UIWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_CLEAN_OFFSET UNITYSDK_OFFSET(0xD58F780)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETTACTICS_OFFSET UNITYSDK_OFFSET(0xD58EC40)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xD58BF30)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xD58BF40)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_INITTACTICSNODE_OFFSET UNITYSDK_OFFSET(0xD58D540)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD58E6D0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONREQUIRECLOSEHANDBOOK_OFFSET UNITYSDK_OFFSET(0xD58ECB0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD58D9E0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONTACTICSNODE_OFFSET UNITYSDK_OFFSET(0xD58FA00)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD58E770)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD58BF50)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD58DB60)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_OPENREWARDTAB_OFFSET UNITYSDK_OFFSET(0xD58E1C0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHLOCK_OFFSET UNITYSDK_OFFSET(0xD58D010)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETREWARDINPUTKEYHINT_OFFSET UNITYSDK_OFFSET(0xD58EB00)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xD58EBD0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SHOWTAB_OFFSET UNITYSDK_OFFSET(0xD58F110)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD58FE60)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_0_OFFSET UNITYSDK_OFFSET(0xD58FF80)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_1_OFFSET UNITYSDK_OFFSET(0xD58FF90)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_2_OFFSET UNITYSDK_OFFSET(0xD58FFA0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_3_OFFSET UNITYSDK_OFFSET(0xD58FFB0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_4_OFFSET UNITYSDK_OFFSET(0xD58FFC0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD58FFD0)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xD590040)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD590050)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD590060)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD590070)
#define MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xD5900E0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookPopWindowController_TypeDefinitionIndex = 65010;

	class UIHandBookPopWindowController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::Int32 HB_NORMAL_NEWBIE_ID = 0x41; // 0x0
		// static const ::System::Int32 HB_NORMAL_NEWBIE_CONSOLE_ID = 0x429; // 0x0
		// static const ::System::Int32 HB_NORMAL_NEWBIE_PC_ID = 0x811; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_ID = 0x91; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_CONSOLE_ID = 0x479; // 0x0
		// static const ::System::Int32 HB_Proxy_NEWBIE_PC_ID = 0x861; // 0x0
		// static const ::System::Int32 HB_HARD_NEWBIE_ID = 0x92; // 0x0
		// static const ::System::Int32 HB_HARD_NEWBIE_CONSOLE_ID = 0x47A; // 0x0
		// static const ::System::Int32 HB_HARD_NEWBIE_PC_ID = 0x862; // 0x0
		// static const ::System::Int32 HB_DAILYBOSS_NEWBIE_ID = 0x97; // 0x0
		// static const ::System::Int32 HB_DAILYBOSS_NEWBIE_CONSOLE_ID = 0x47F; // 0x0
		// static const ::System::Int32 HB_DAILYBOSS_NEWBIE_PC_ID = 0x867; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_ID = 0xE0; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_CONSOLE_ID = 0x4C8; // 0x0
		// static const ::System::Int32 HB_TEMPLE_NEWBIE_PC_ID = 0x8B0; // 0x0
		// static const ::System::Int32 AntiqueNewbieId = 0x11C; // 0x0
		// static const ::System::Int32 AntiqueNewbieConsoleId = 0x504; // 0x0
		// static const ::System::Int32 AntiqueNewbiePcId = 0x8EC; // 0x0
		::Class_2_C7387D40D4120A48* _view; // 0x2F8
		::System::Collections::Generic::HashSet_1<::System::Int32>* _viewedTabs; // 0x300
		::Class_1_5A585DEB704A07E2* _tacticsNode; // 0x308
		::MoleMole::UIGeneralPopUpHintWidgetController* popCtrl; // 0x310
		::MoleMole::UIGeneralNewHintWidgetController* hintCtrl; // 0x318
		::MoleMole::UIHandBookManualWidgetController* _normalWidget; // 0x320
		::MoleMole::UIHandBookManualWidgetController* _hardWidget; // 0x328
		::MoleMole::UIDailyQuestHandBookWidgetController* _dailyWidget; // 0x330
		::MoleMole::UIHandBookTacticsWidgetController* _tacticsWidget; // 0x338
		::MoleMole::UIHandBookPrimerWidgetController* _primerWidget; // 0x340
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _tabs; // 0x348
		::System::Int32 prevIdx; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void SetRewardInputKeyHint(::System::Boolean isHint)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETREWARDINPUTKEYHINT_OFFSET))(this, isHint);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::MoleMole::UIHandBookTacticsWidgetController* GetTactics()
		{
			return ((::MoleMole::UIHandBookTacticsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_GETTACTICS_OFFSET))(this);
		}

		::System::Void InitTacticsNode()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_INITTACTICSNODE_OFFSET))(this);
		}

		::System::Void OnRequireCloseHandBook(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONREQUIRECLOSEHANDBOOK_OFFSET))(this, eventArgs);
		}

		::System::Void ShowTab(::System::Int32 idx)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_SHOWTAB_OFFSET))(this, idx);
		}

		::System::Void Clean()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_CLEAN_OFFSET))(this);
		}

		::System::Void OpenRewardTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_OPENREWARDTAB_OFFSET))(this);
		}

		::System::Void RefreshLock(::System::EventArgs* _)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_REFRESHLOCK_OFFSET))(this, _);
		}

		::System::Void OnTacticsNode(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER_ONTACTICSNODE_OFFSET))(this, value);
		}

		::System::Void _OnUIInit_b__26_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_0_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_1_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_2_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__26_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER__ONUIINIT_B__26_4_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKPOPWINDOWCONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
