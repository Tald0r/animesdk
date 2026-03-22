#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"

class Class_2_48B050DF10EF36DD;
class Class_2_C7387D40D4120A48_15;
class Class_3_F92F6A6188E34427;
namespace MoleMole { class UIActivityCompRewardBtnGroupWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGoldMiningDayCollectionBtnWidgetController; }
namespace MoleMole { class UIGoldMiningDayContext; }
namespace MoleMole { class UIGoldMiningDayStateRewardEffectItemWidgetController; }
namespace MoleMole { class UIGoldMiningDayTodoListBtnWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine::UI::Extension { class UITimeWidget; }

#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DEALFRIENDINVITEMSG_OFFSET UNITYSDK_OFFSET(0x8C11690)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DNAUTOOPEN_OFFSET UNITYSDK_OFFSET(0x8C11E00)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8C106B0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWJUMPTOINVITETEAMROOM_OFFSET UNITYSDK_OFFSET(0x8C140D0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET UNITYSDK_OFFSET(0x8C13FB0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKMARCELADVENTURE_OFFSET UNITYSDK_OFFSET(0x8C13570)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKREWARDPANEL_OFFSET UNITYSDK_OFFSET(0x8C13410)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKRIDUBOO_OFFSET UNITYSDK_OFFSET(0x8C13870)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C106C0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONGOLDMININGDAYACTIVITYSYNC_OFFSET UNITYSDK_OFFSET(0x8C11390)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8C13B20)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8C11140)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C13D90)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C10760)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C11D30)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SETTIME_OFFSET UNITYSDK_OFFSET(0x8C13150)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWALLPROGRESSBTN_OFFSET UNITYSDK_OFFSET(0x8C12D20)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWCOLLECTIONBTN_OFFSET UNITYSDK_OFFSET(0x8C11F70)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWINVITE_OFFSET UNITYSDK_OFFSET(0x8C14130)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWMARCELADVENTUREBTN_OFFSET UNITYSDK_OFFSET(0x8C11FE0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWRIDUBOOBTN_OFFSET UNITYSDK_OFFSET(0x8C12700)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWTODOLISTBTN_OFFSET UNITYSDK_OFFSET(0x8C11F00)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_TRYJOINMARCELADVENTURE_OFFSET UNITYSDK_OFFSET(0x8C14250)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8C14B00)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ISALLOWSHOWINVITE_B__22_0_OFFSET UNITYSDK_OFFSET(0x8C14C50)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ONUIINIT_B__10_1_OFFSET UNITYSDK_OFFSET(0x8C14B10)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__SETTIME_B__14_0_OFFSET UNITYSDK_OFFSET(0x8C14C10)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8C14C60)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8C14CD0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8C14D30)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8C14DA0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8C14DB0)
#define MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8C14DC0)

namespace MoleMole
{
	inline static constexpr unsigned int UIGoldMiningDayMainPageController_TypeDefinitionIndex = 51851;

	class UIGoldMiningDayMainPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_C7387D40D4120A48_15* _view; // 0x308
		::Class_2_48B050DF10EF36DD* _model; // 0x310
		::MoleMole::UIGoldMiningDayTodoListBtnWidgetController* _todoListBtnWidgetController; // 0x318
		::MoleMole::UIGoldMiningDayCollectionBtnWidgetController* _collectionBtnWidgetController; // 0x320
		::MoleMole::UIActivityCompRewardBtnGroupWidgetController* _activityGroupController; // 0x328
		::MoleMole::UIGoldMiningDayContext* _context; // 0x330
		::System::Collections::Generic::List_1<::MoleMole::UIGoldMiningDayStateRewardEffectItemWidgetController*>* _effectItemWidgetControllers; // 0x338
		::System::Boolean _isShowingInvite; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnGoldMiningDayActivitySync(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONGOLDMININGDAYACTIVITYSYNC_OFFSET))(this, eventArgs);
		}

		::System::Void SetTime()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SETTIME_OFFSET))(this);
		}

		::System::Void DnAutoOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DNAUTOOPEN_OFFSET))(this);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void ShowTodoListBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWTODOLISTBTN_OFFSET))(this);
		}

		::System::Void ShowCollectionBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWCOLLECTIONBTN_OFFSET))(this);
		}

		::System::Void ShowMarcelAdventureBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWMARCELADVENTUREBTN_OFFSET))(this);
		}

		::System::Void DealFriendInviteMsg(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_DEALFRIENDINVITEMSG_OFFSET))(this, showCtrlContext);
		}

		::System::Boolean IsAllowShowInvite(::System::Action*& onAcceptShowAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Action*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWSHOWINVITE_OFFSET))(this, onAcceptShowAction);
		}

		::System::Boolean IsAllowJumpToInviteTeamRoom()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ISALLOWJUMPTOINVITETEAMROOM_OFFSET))(this);
		}

		::System::Void ShowInvite(::Class_3_F92F6A6188E34427* nextInvite, ::System::Action* onAcceptShowAction, ::System::Action* recursiveShowInvite)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_F92F6A6188E34427*, ::System::Action*, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWINVITE_OFFSET))(this, nextInvite, onAcceptShowAction, recursiveShowInvite);
		}

		::System::Boolean TryJoinMarcelAdventure()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_TRYJOINMARCELADVENTURE_OFFSET))(this);
		}

		::System::Void ShowRiduBooBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWRIDUBOOBTN_OFFSET))(this);
		}

		::System::Void ShowAllProgressBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_SHOWALLPROGRESSBTN_OFFSET))(this);
		}

		::System::Void OnClickRewardPanel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKREWARDPANEL_OFFSET))(this);
		}

		::System::Void OnClickMarcelAdventure()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKMARCELADVENTURE_OFFSET))(this);
		}

		::System::Void OnClickRiduBoo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER_ONCLICKRIDUBOO_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__10_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ONUIINIT_B__10_1_OFFSET))(this, args);
		}

		::System::Void _SetTime_b__14_0(::UnityEngine::UI::Extension::UITimeWidget* _)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::UI::Extension::UITimeWidget*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__SETTIME_B__14_0_OFFSET))(this, _);
		}

		::System::Void _IsAllowShowInvite_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER__ISALLOWSHOWINVITE_B__22_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGOLDMININGDAYMAINPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
