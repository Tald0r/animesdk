#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_5EA2B17DF83E32C8_3.h"
#include "unitysdk/Enum_3_B90C1A15EA6E3C2B.h"
#include "unitysdk/Enum_3_E95ECAE95EB28BDC.h"
#include "unitysdk/MoleMole/UIAbyssS2RewardDialogPageController_TabType.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_208CC9941471731A_751;
class Class_2_79F6D62CE30E3F8E_71;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class ScrollViewItemWidgetController; }
namespace MoleMole { class UIAbyssS2RewardDialogMissionRewardItemWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CANGETALLREWARD_OFFSET UNITYSDK_OFFSET(0xD1BD460)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CANGETREWARDCOUNT_OFFSET UNITYSDK_OFFSET(0xD1BCE60)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CANGETREWARD_OFFSET UNITYSDK_OFFSET(0xD1BCFF0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CREATETABITEMWIDGET_OFFSET UNITYSDK_OFFSET(0xD1BC070)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_GETFINISHEDCNT_OFFSET UNITYSDK_OFFSET(0xD1BD120)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_GETITEMCTRL_OFFSET UNITYSDK_OFFSET(0xD1BEE40)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_GETTABICONPATH_OFFSET UNITYSDK_OFFSET(0xD1BE3A0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_INITMISSIONCONFIG_OFFSET UNITYSDK_OFFSET(0xD1BC150)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ISREWARDTAKEN_OFFSET UNITYSDK_OFFSET(0xD1BD330)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1BBFD0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONGETALLBTNCLICK_OFFSET UNITYSDK_OFFSET(0xD1BDC70)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONGETNEWSREWARD_OFFSET UNITYSDK_OFFSET(0xD1BCC90)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONSELECTTABBTN_OFFSET UNITYSDK_OFFSET(0xD1BED30)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONTAKEREWARDHANDLE_OFFSET UNITYSDK_OFFSET(0xD1BDE00)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD1BF000)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1BF300)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1BBB20)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1BBF20)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_READTABNEW_OFFSET UNITYSDK_OFFSET(0xD1BCC10)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHAVATARVIEW_OFFSET UNITYSDK_OFFSET(0xD1BE500)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHGETALLBTNSTATE_OFFSET UNITYSDK_OFFSET(0xD1BCD20)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHTABBTNVIEW_OFFSET UNITYSDK_OFFSET(0xD1BE0D0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHTABITEMVIEW_OFFSET UNITYSDK_OFFSET(0xD1BEAA0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xD1BEA30)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_SETTABTYPE_OFFSET UNITYSDK_OFFSET(0xD1BC6C0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_UPDATETABREDPOINT_OFFSET UNITYSDK_OFFSET(0xD1BD660)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xD1BF3E0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER__INITMISSIONCONFIG_B__6_1_OFFSET UNITYSDK_OFFSET(0xD1BF5E0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xD1BF7D0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xD1BF840)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xD1BF850)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xD1BF8D0)
#define MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xD1BF930)

namespace MoleMole
{
	inline static constexpr unsigned int UIAbyssS2MissionWidgetController_TypeDefinitionIndex = 43361;

	class UIAbyssS2MissionWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_71* _view; // 0x2A0
		::MoleMole::UIAbyssS2RewardDialogPageController_TabType CurrenTabType; // 0x2A8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>* _allOnceDutyData; // 0x2B0
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>* _allOnceDutyDataFront; // 0x2B8
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>* _allOnceDutyDataBackend; // 0x2C0
		::Enum_3_5EA2B17DF83E32C8_3 _tabType; // 0x2C8
		::Enum_3_E95ECAE95EB28BDC _entranceType; // 0x2CC
		::System::Int32 _currSelectTabID; // 0x2D0
		::Class_2_208CC9941471731A_751* _currSelectTab; // 0x2D8
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x2E0
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>* _tabs; // 0x2E8
		::System::Collections::Generic::List_1<::System::Int32>* _reqList; // 0x2F0
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _missionDir; // 0x2F8
		::System::Boolean _showBackendTab; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::MoleMole::ScrollViewItemWidgetController* CreateTabItemWidget(::Enum_3_B90C1A15EA6E3C2B arg1, ::System::Func_1<::MoleMole::UIControlReference*>* arg2)
		{
			return ((::MoleMole::ScrollViewItemWidgetController*(*)(::PVOID, ::Enum_3_B90C1A15EA6E3C2B, ::System::Func_1<::MoleMole::UIControlReference*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CREATETABITEMWIDGET_OFFSET))(this, arg1, arg2);
		}

		::System::Void InitMissionConfig(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>* tabs, ::System::Boolean showBackendTab, ::MoleMole::UIAbyssS2RewardDialogPageController_TabType initTab)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>*, ::System::Boolean, ::MoleMole::UIAbyssS2RewardDialogPageController_TabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_INITMISSIONCONFIG_OFFSET))(this, tabs, showBackendTab, initTab);
		}

		::System::Void SetTabType(::MoleMole::UIAbyssS2RewardDialogPageController_TabType tabType, ::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIAbyssS2RewardDialogPageController_TabType, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_SETTABTYPE_OFFSET))(this, tabType, isInit);
		}

		::System::Void OnGetNewsReward(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONGETNEWSREWARD_OFFSET))(this, args);
		}

		::System::Int32 CanGetRewardCount()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CANGETREWARDCOUNT_OFFSET))(this);
		}

		::System::Int32 GetFinishedCnt(::System::Int32 tabID)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_GETFINISHEDCNT_OFFSET))(this, tabID);
		}

		::System::Boolean CanGetReward(::System::Int32 questID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CANGETREWARD_OFFSET))(this, questID);
		}

		::System::Boolean IsRewardTaken(::System::Int32 questID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ISREWARDTAKEN_OFFSET))(this, questID);
		}

		::System::Boolean CanGetAllReward()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_CANGETALLREWARD_OFFSET))(this);
		}

		::System::Void RefreshGetAllBtnState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHGETALLBTNSTATE_OFFSET))(this);
		}

		::System::Void OnGetAllBtnClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONGETALLBTNCLICK_OFFSET))(this);
		}

		::System::Void UpdateTabRedPoint(::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>* tabs, ::System::Boolean isFront)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_751*>*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_UPDATETABREDPOINT_OFFSET))(this, tabs, isFront);
		}

		::System::Void OnTakeRewardHandle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONTAKEREWARDHANDLE_OFFSET))(this);
		}

		::System::Void RefreshTabBtnView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHTABBTNVIEW_OFFSET))(this);
		}

		::System::String* GetTabIconPath(::Class_2_208CC9941471731A_751* tab)
		{
			return ((::System::String*(*)(::PVOID, ::Class_2_208CC9941471731A_751*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_GETTABICONPATH_OFFSET))(this, tab);
		}

		::System::Void RefreshAvatarView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHAVATARVIEW_OFFSET))(this);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void RefreshTabItemView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_REFRESHTABITEMVIEW_OFFSET))(this);
		}

		::System::Void ReadTabNew(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_READTABNEW_OFFSET))(this, tabID);
		}

		::System::Void OnSelectTabBtn(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONSELECTTABBTN_OFFSET))(this, index);
		}

		::MoleMole::UIAbyssS2RewardDialogMissionRewardItemWidgetController* GetItemCtrl(::System::Int32 index)
		{
			return ((::MoleMole::UIAbyssS2RewardDialogMissionRewardItemWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_GETITEMCTRL_OFFSET))(this, index);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Int32 _InitMissionConfig_b__6_1(::Class_2_208CC9941471731A_751* a, ::Class_2_208CC9941471731A_751* b)
		{
			return ((::System::Int32(*)(::PVOID, ::Class_2_208CC9941471731A_751*, ::Class_2_208CC9941471731A_751*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER__INITMISSIONCONFIG_B__6_1_OFFSET))(this, a, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIABYSSS2MISSIONWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
