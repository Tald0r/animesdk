#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_8E90989A26BC6232.h"
#include "unitysdk/MoleMole/UIHollowCardItemCollectPageController_TabType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Share/ENotificationBadgeType.h"

class Class_2_208CC9941471731A_220;
class Class_2_208CC9941471731A_440;
class Class_2_79AE422BA06F6D26_110;
class Class_2_DA8BF519212BAE65;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIBackendRelicCollectWidgetController; }
namespace MoleMole { class UIBaseController; }
namespace MoleMole { class UIBranchRelciCollectWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowAbyssS2ItemWidgetController; }
namespace MoleMole { class UIHollowCardCollectWidgetController; }
namespace MoleMole { class UIHollowCardCollectWidgetControllerContext; }
namespace MoleMole { class UIHollowClueCollectWidgetController; }
namespace MoleMole { class UIHollowErosionWidgetController; }
namespace MoleMole { class UIHollowResearchProgressWidgetController; }
namespace MoleMole { class UIHollowSpecialAreaWidgetController; }
namespace MoleMole { class UIHollowTeamPreviewWidgetController; }
namespace MoleMole { class UIHollowWeaponCollectWidgetController; }
namespace MoleMole { class UITabBtn03RowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_CREATEWIDGET_OFFSET UNITYSDK_OFFSET(0xAA1D6C0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCARDWIDGETCONTEXT_OFFSET UNITYSDK_OFFSET(0xAA1CD00)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCTRL_OFFSET UNITYSDK_OFFSET(0xAA1E1D0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCURRENTREWARDBADGETYPE_OFFSET UNITYSDK_OFFSET(0xAA1A930)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETRESEARCHPROGRESSCONFIGLIST_OFFSET UNITYSDK_OFFSET(0xAA1EAB0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET UNITYSDK_OFFSET(0xAA199B0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAA199C0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GOTOMAINCITY_OFFSET UNITYSDK_OFFSET(0xAA1E300)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITTOPTABS_OFFSET UNITYSDK_OFFSET(0xAA1A350)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITWIDGET_OFFSET UNITYSDK_OFFSET(0xAA1A260)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONABYSSTABSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0xAA1A7D0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLICKVIDEOBTN_OFFSET UNITYSDK_OFFSET(0xAA1EEA0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLOSEREFRESHHALLDATA_OFFSET UNITYSDK_OFFSET(0xAA1CBB0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA199D0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONDATEUPDATE_OFFSET UNITYSDK_OFFSET(0xAA1BF80)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xAA1BBD0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGOTOREWARDBTN_OFFSET UNITYSDK_OFFSET(0xAA1BEB0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xAA1F160)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAA1C0B0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET UNITYSDK_OFFSET(0xAA1E450)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAA1CA50)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA1F280)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA19A70)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA1C260)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHORIGINALBADGETYPELIST_OFFSET UNITYSDK_OFFSET(0xAA1D220)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTAKENPROGRESS_OFFSET UNITYSDK_OFFSET(0xAA1B310)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTEX_OFFSET UNITYSDK_OFFSET(0xAA1B9C0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHSYSTEMREDPOINT_OFFSET UNITYSDK_OFFSET(0xAA1BD60)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTABREDPOINT_OFFSET UNITYSDK_OFFSET(0xAA1B6E0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTAB_OFFSET UNITYSDK_OFFSET(0xAA1A9C0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xAA1C000)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SORTCFGS_OFFSET UNITYSDK_OFFSET(0xAA19FF0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYCANCELSELECT_OFFSET UNITYSDK_OFFSET(0xAA1EBE0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYPOPTIPSANDCLEARUNLOCKNEWGENREWINDOW_OFFSET UNITYSDK_OFFSET(0xAA1C430)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYSELECTCTRL_OFFSET UNITYSDK_OFFSET(0xAA1E700)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAA1F4C0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_0_OFFSET UNITYSDK_OFFSET(0xAA1F4D0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_1_OFFSET UNITYSDK_OFFSET(0xAA1F500)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONCLICKVIDEOBTN_B__40_0_OFFSET UNITYSDK_OFFSET(0xAA1F570)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONTABSELECTHANDLE_B__36_0_OFFSET UNITYSDK_OFFSET(0xAA1F530)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAA1F5A0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xAA1F610)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xAA1F680)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xAA1F6E0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAA1F6F0)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAA1F700)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAA1F710)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAA1F720)
#define MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0xAA1F790)

namespace MoleMole
{
	inline static constexpr unsigned int UIHollowCardItemCollectPageController_TypeDefinitionIndex = 74791;

	class UIHollowCardItemCollectPageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_79AE422BA06F6D26_110* _view; // 0x2F8
		::System::Int32 _curAbyssGroupId; // 0x300
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::MoleMole::UIBaseController*>* _ctrlDic; // 0x308
		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_440*>* m_sortedTabList; // 0x310
		::MoleMole::UIHollowCardItemCollectPageController_TabType m_tabType; // 0x318
		::MoleMole::UIHollowCardItemCollectPageController_TabType m_lastTabType; // 0x31C
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn03RowWidgetController*>* m_tabList; // 0x320
		::System::Collections::Generic::List_1<::System::Int32>* m_tabIdList; // 0x328
		::System::Boolean m_tabInited; // 0x330
		::MoleMole::UIHollowCardCollectWidgetController* _cardWidgetCtrl; // 0x338
		::MoleMole::UIHollowErosionWidgetController* _erosionWidgetCtrl; // 0x340
		::MoleMole::UIHollowResearchProgressWidgetController* _progWidgetCtrl; // 0x348
		::MoleMole::UIHollowSpecialAreaWidgetController* _specialAreaWidgetCtrl; // 0x350
		::MoleMole::UIHollowClueCollectWidgetController* _clueCollectWidgetCtrl; // 0x358
		::MoleMole::UIHollowCardCollectWidgetController* _s2CardWidgetCtrl; // 0x360
		::MoleMole::UIHollowTeamPreviewWidgetController* _s2TeamCollectWidgetCtrl; // 0x368
		::MoleMole::UIHollowWeaponCollectWidgetController* _s2WeaponCollectWidgetCtrl; // 0x370
		::MoleMole::UIBranchRelciCollectWidgetController* _s2BranchRelicCollectWidgetCtrl; // 0x378
		::MoleMole::UIHollowAbyssS2ItemWidgetController* _s2ItemCollectWidgetCtrl; // 0x380
		::MoleMole::UIBackendRelicCollectWidgetController* _s2BackendRelicCollectWidgetCtrl; // 0x388
		::Class_2_DA8BF519212BAE65* _abyssModel; // 0x390

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_8E90989A26BC6232 get_HotSwitchRootLayerState()
		{
			return ((::Enum_3_8E90989A26BC6232(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_HOTSWITCHROOTLAYERSTATE_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void InitTopTabs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITTOPTABS_OFFSET))(this);
		}

		::System::Void OnAbyssTabSelectHandle(::System::Int32 abyssGroup)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONABYSSTABSELECTHANDLE_OFFSET))(this, abyssGroup);
		}

		::Share::ENotificationBadgeType GetCurrentRewardBadgeType()
		{
			return ((::Share::ENotificationBadgeType(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCURRENTREWARDBADGETYPE_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void RefreshSystemRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHSYSTEMREDPOINT_OFFSET))(this);
		}

		::System::Void OnGotoRewardBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONGOTOREWARDBTN_OFFSET))(this);
		}

		::System::Void OnDateUpdate(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONDATEUPDATE_OFFSET))(this, args);
		}

		::System::Void RefreshRewardTakenProgress()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTAKENPROGRESS_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCloseRefreshHallData()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLOSEREFRESHHALLDATA_OFFSET))(this);
		}

		::System::Void TryPopTipsAndClearUnlockNewGenreWindow()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYPOPTIPSANDCLEARUNLOCKNEWGENREWINDOW_OFFSET))(this);
		}

		::MoleMole::UIHollowCardCollectWidgetControllerContext* GetCardWidgetContext(::System::Int32 abyssGroupId)
		{
			return ((::MoleMole::UIHollowCardCollectWidgetControllerContext*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCARDWIDGETCONTEXT_OFFSET))(this, abyssGroupId);
		}

		::System::Collections::Generic::List_1<::System::Int32>* RefreshOriginalBadgeTypeList(::System::Int32 abyssGroupId)
		{
			return ((::System::Collections::Generic::List_1<::System::Int32>*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHORIGINALBADGETYPELIST_OFFSET))(this, abyssGroupId);
		}

		::System::Void RefreshRewardTex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHREWARDTEX_OFFSET))(this);
		}

		::System::Void SortCfgs()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_SORTCFGS_OFFSET))(this);
		}

		::System::Void InitWidget()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_INITWIDGET_OFFSET))(this);
		}

		::MoleMole::UIBaseController* CreateWidget(::System::Int32 tabID)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_CREATEWIDGET_OFFSET))(this, tabID);
		}

		::MoleMole::UIBaseController* GetCtrl(::System::Int32 tabID)
		{
			return ((::MoleMole::UIBaseController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETCTRL_OFFSET))(this, tabID);
		}

		::System::Void GoToMainCity()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GOTOMAINCITY_OFFSET))(this);
		}

		::System::Void OnTabSelectHandle(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONTABSELECTHANDLE_OFFSET))(this, tabID);
		}

		::System::Void TrySelectCtrl(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYSELECTCTRL_OFFSET))(this, tabID);
		}

		::System::Void TryCancelSelect(::System::Int32 tabID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_TRYCANCELSELECT_OFFSET))(this, tabID);
		}

		::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_220*>* GetResearchProgressConfigList(::MoleMole::UIHollowCardItemCollectPageController_TabType type)
		{
			return ((::System::Collections::Generic::List_1<::Class_2_208CC9941471731A_220*>*(*)(::PVOID, ::MoleMole::UIHollowCardItemCollectPageController_TabType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_GETRESEARCHPROGRESSCONFIGLIST_OFFSET))(this, type);
		}

		::System::Void OnClickVideoBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONCLICKVIDEOBTN_OFFSET))(this);
		}

		::System::Void RefreshTab(::System::Int32 abyssGroupId)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTAB_OFFSET))(this, abyssGroupId);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void RefreshTabRedPoint()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_REFRESHTABREDPOINT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _InitTopTabs_b__8_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_0_OFFSET))(this);
		}

		::System::Void _InitTopTabs_b__8_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__INITTOPTABS_B__8_1_OFFSET))(this);
		}

		::System::Boolean _OnTabSelectHandle_b__36_0(::Class_2_208CC9941471731A_440* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_440*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONTABSELECTHANDLE_B__36_0_OFFSET))(this, x);
		}

		::System::Boolean _OnClickVideoBtn_b__40_0(::Class_2_208CC9941471731A_440* x)
		{
			return ((::System::Boolean(*)(::PVOID, ::Class_2_208CC9941471731A_440*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER__ONCLICKVIDEOBTN_B__40_0_OFFSET))(this, x);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOLLOWCARDITEMCOLLECTPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
