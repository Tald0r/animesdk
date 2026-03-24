#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A45E918E5024074.h"
#include "unitysdk/Enum_3_A472E51DCF07A558.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_25479A17D745887B;
class Class_1_4784321C3B7F2731;
class Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1;
class Class_1_7AD164144758E750_1;
class Class_1_ABFA099FFDF04A09;
class Class_1_D1808C3C3F9B2DFA;
class Class_1_D6D1B35AE0BED5AD;
class Class_1_F50B5EAC0B6702FB;
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralChapterFinishWidgetController_Context; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController; }
namespace MoleMole { class UIGeneralLevelUp02WidgetController_Context; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UIGeneralNewsBubbleWidgetController; }
namespace MoleMole { class UIInLevelTimerWidgetController_Context; }
namespace MoleMole { class UIMessageChildWindowController; }
namespace MoleMole { class UIMissionTipsContainerWidgetController; }
namespace MoleMole { class UIRewardTipsWidgetController; }
namespace MoleMole { class UIWorldLevelUpWidgetController_Context; }
namespace System { class EventArgs; }
namespace System { template <typename T> class Func_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }

#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET UNITYSDK_OFFSET(0xDDC3210)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET UNITYSDK_OFFSET(0xDDC3780)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET UNITYSDK_OFFSET(0xDDC3090)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET UNITYSDK_OFFSET(0xDDC3720)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET UNITYSDK_OFFSET(0xDDC3150)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET UNITYSDK_OFFSET(0xDDC30F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET UNITYSDK_OFFSET(0xDDC2DE0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET UNITYSDK_OFFSET(0xDDC2E50)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0xDDC22C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0xDDC21D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xDDC2190)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0xDDC2240)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0xDDC2220)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xDDC22A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0xDDC2260)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0xDDC2280)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0xDDC21B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0xDDC21E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0xDDC2200)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET UNITYSDK_OFFSET(0xDDC2250)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET UNITYSDK_OFFSET(0xDDC2C90)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET UNITYSDK_OFFSET(0xDDC29E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET UNITYSDK_OFFSET(0xDDC2EB0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0xDDC3640)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0xDDC35D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET UNITYSDK_OFFSET(0xDDC25A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET UNITYSDK_OFFSET(0xDDC2520)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xDDC2F20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET UNITYSDK_OFFSET(0xDDC2A40)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xDDC2610)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDC2820)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDC22E0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDDC23A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET UNITYSDK_OFFSET(0xDDC31B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET UNITYSDK_OFFSET(0xDDC2D00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET UNITYSDK_OFFSET(0xDDC3560)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0xDDC2D70)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET UNITYSDK_OFFSET(0xDDC22D0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET UNITYSDK_OFFSET(0xDDC21A0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET UNITYSDK_OFFSET(0xDDC2230)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET UNITYSDK_OFFSET(0xDDC22B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET UNITYSDK_OFFSET(0xDDC2270)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET UNITYSDK_OFFSET(0xDDC2290)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET UNITYSDK_OFFSET(0xDDC21C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET UNITYSDK_OFFSET(0xDDC21F0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET UNITYSDK_OFFSET(0xDDC2210)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET UNITYSDK_OFFSET(0xDDC2C20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET UNITYSDK_OFFSET(0xDDC2B40)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0xDDC2AD0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET UNITYSDK_OFFSET(0xDDC2BB0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET UNITYSDK_OFFSET(0xDDC36B0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xDDC3970)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET UNITYSDK_OFFSET(0xDDC2980)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET UNITYSDK_OFFSET(0xDDC39C0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET UNITYSDK_OFFSET(0xDDC3A30)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xDDC3AA0)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xDDC3B00)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xDDC3B10)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xDDC3B20)
#define MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xDDC3B30)

namespace MoleMole
{
	inline static constexpr unsigned int UIBaseScenePageController_TypeDefinitionIndex = 41427;

	class UIBaseScenePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_1_D1808C3C3F9B2DFA* _CommonEventHandler_k__BackingField; // 0x2F8
		::MoleMole::UIGeneralLevelUp02WidgetController* LevelUpController; // 0x300
		::Class_1_D6D1B35AE0BED5AD* _OngoingChatPlayer_k__BackingField; // 0x308
		::Class_1_F50B5EAC0B6702FB* _ScriptableAnimationPlayer_k__BackingField; // 0x310
		::Class_1_ABFA099FFDF04A09* _UnitManager_k__BackingField; // 0x318
		::Class_1_4784321C3B7F2731* _HudLogicManager_k__BackingField; // 0x320
		::MoleMole::UIMissionTipsContainerWidgetController* _missionTipsContainer; // 0x328
		::System::Boolean _consoleActive; // 0x330
		::System::Boolean _IsBeforePageFadeOuting_k__BackingField; // 0x331
		::System::Boolean _IsInOpenOtherPageTransition_k__BackingField; // 0x332
		::Class_1_25479A17D745887B* _InputActionHandler_k__BackingField; // 0x338
		::Class_1_7AD164144758E750_1* _BaseScenePageLogic_k__BackingField; // 0x340

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_1_D1808C3C3F9B2DFA* get_CommonEventHandler()
		{
			return ((::Class_1_D1808C3C3F9B2DFA*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_COMMONEVENTHANDLER_OFFSET))(this);
		}

		::System::Void set_CommonEventHandler(::Class_1_D1808C3C3F9B2DFA* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D1808C3C3F9B2DFA*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_COMMONEVENTHANDLER_OFFSET))(this, value);
		}

		::Class_1_D6D1B35AE0BED5AD* get_OngoingChatPlayer()
		{
			return ((::Class_1_D6D1B35AE0BED5AD*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ONGOINGCHATPLAYER_OFFSET))(this);
		}

		::System::Void set_OngoingChatPlayer(::Class_1_D6D1B35AE0BED5AD* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_D6D1B35AE0BED5AD*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ONGOINGCHATPLAYER_OFFSET))(this, value);
		}

		::System::Boolean get_CanPlayOngoingChatImmediately()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CANPLAYONGOINGCHATIMMEDIATELY_OFFSET))(this);
		}

		::Class_1_F50B5EAC0B6702FB* get_ScriptableAnimationPlayer()
		{
			return ((::Class_1_F50B5EAC0B6702FB*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this);
		}

		::System::Void set_ScriptableAnimationPlayer(::Class_1_F50B5EAC0B6702FB* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_F50B5EAC0B6702FB*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_SCRIPTABLEANIMATIONPLAYER_OFFSET))(this, value);
		}

		::Class_1_ABFA099FFDF04A09* get_UnitManager()
		{
			return ((::Class_1_ABFA099FFDF04A09*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_UNITMANAGER_OFFSET))(this);
		}

		::System::Void set_UnitManager(::Class_1_ABFA099FFDF04A09* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_ABFA099FFDF04A09*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_UNITMANAGER_OFFSET))(this, value);
		}

		::Class_1_4784321C3B7F2731* get_HudLogicManager()
		{
			return ((::Class_1_4784321C3B7F2731*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_HUDLOGICMANAGER_OFFSET))(this);
		}

		::System::Void set_HudLogicManager(::Class_1_4784321C3B7F2731* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_4784321C3B7F2731*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_HUDLOGICMANAGER_OFFSET))(this, value);
		}

		::System::Boolean get_ConsoleActive()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_CONSOLEACTIVE_OFFSET))(this);
		}

		::System::Boolean get_WheelShortcutPop()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_WHEELSHORTCUTPOP_OFFSET))(this);
		}

		::System::Boolean get_IsBeforePageFadeOuting()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISBEFOREPAGEFADEOUTING_OFFSET))(this);
		}

		::System::Void set_IsBeforePageFadeOuting(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISBEFOREPAGEFADEOUTING_OFFSET))(this, value);
		}

		::System::Boolean get_IsInOpenOtherPageTransition()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_ISINOPENOTHERPAGETRANSITION_OFFSET))(this);
		}

		::System::Void set_IsInOpenOtherPageTransition(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_ISINOPENOTHERPAGETRANSITION_OFFSET))(this, value);
		}

		::Class_1_25479A17D745887B* get_InputActionHandler()
		{
			return ((::Class_1_25479A17D745887B*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_INPUTACTIONHANDLER_OFFSET))(this);
		}

		::System::Void set_InputActionHandler(::Class_1_25479A17D745887B* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_25479A17D745887B*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_INPUTACTIONHANDLER_OFFSET))(this, value);
		}

		::Class_1_7AD164144758E750_1* get_BaseScenePageLogic()
		{
			return ((::Class_1_7AD164144758E750_1*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GET_BASESCENEPAGELOGIC_OFFSET))(this);
		}

		::System::Void set_BaseScenePageLogic(::Class_1_7AD164144758E750_1* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7AD164144758E750_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SET_BASESCENEPAGELOGIC_OFFSET))(this, value);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnFadeTransitionChange(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_OFFSET))(this, args);
		}

		::System::Void OnFadeTransitionChange_1(::System::Boolean isStart)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONFADETRANSITIONCHANGE_1_OFFSET))(this, isStart);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _WarmUpWidgets_OnOpen()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER__WARMUPWIDGETS_ONOPEN_OFFSET))(this);
		}

		::System::Void InitSlot()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_INITSLOT_OFFSET))(this);
		}

		::System::Void OnTimelineForceStopOngoingChat(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONTIMELINEFORCESTOPONGOINGCHAT_OFFSET))(this, args);
		}

		::System::Void ShowLevelUpEffect(::MoleMole::UIGeneralLevelUp02WidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralLevelUp02WidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWLEVELUPEFFECT_OFFSET))(this, context);
		}

		::System::Void ShowInLevelTimerEffect(::MoleMole::UIInLevelTimerWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIInLevelTimerWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWINLEVELTIMEREFFECT_OFFSET))(this, context);
		}

		::System::Void ShowWorldLevelUpEffect(::MoleMole::UIWorldLevelUpWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIWorldLevelUpWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWWORLDLEVELUPEFFECT_OFFSET))(this, context);
		}

		::System::Void ShowChapterFinishEffect(::MoleMole::UIGeneralChapterFinishWidgetController_Context* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralChapterFinishWidgetController_Context*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SHOWCHAPTERFINISHEFFECT_OFFSET))(this, context);
		}

		::System::Boolean HasAnyBubbleTipExcludeCtrl(::MoleMole::UIGeneralNewsBubbleRowWidgetController* excludeCtrl)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_HASANYBUBBLETIPEXCLUDECTRL_OFFSET))(this, excludeCtrl);
		}

		::MoleMole::UIMessageChildWindowController* OpenMessageTip(::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>* userList)
		{
			return ((::MoleMole::UIMessageChildWindowController*(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_794BA983EDDBCFDE_Class_1_40F0860CEB67D2B1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENMESSAGETIP_OFFSET))(this, userList);
		}

		::System::Void SetConsoleActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active);
		}

		::MoleMole::UIMissionTipsContainerWidgetController* GetMissionTips()
		{
			return ((::MoleMole::UIMissionTipsContainerWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETMISSIONTIPS_OFFSET))(this);
		}

		::MoleMole::UIRewardTipsWidgetController* GetRewardTips()
		{
			return ((::MoleMole::UIRewardTipsWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETREWARDTIPS_OFFSET))(this);
		}

		::System::Boolean MuteMenuBtnClick(::System::Boolean showLog)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_MUTEMENUBTNCLICK_OFFSET))(this, showLog);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::UnityEngine::Transform* GetBottomTipsRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPSROOT_OFFSET))(this);
		}

		::UnityEngine::Transform* GetLevelUpRoot()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETLEVELUPROOT_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleWidgetController* GetBubbleWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBUBBLEWIDGET_OFFSET))(this);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenBubbleRow()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_OPENBUBBLEROW_OFFSET))(this);
		}

		::System::Void BindTweenSlot(::UnityEngine::Transform* transform, ::System::Func_1<::System::Int32>* getSlotLeftCount)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::Transform*, ::System::Func_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_BINDTWEENSLOT_OFFSET))(this, transform, getSlotLeftCount);
		}

		::System::Void PlayBlockFairyFadeout(::System::Boolean isNewbie)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_PLAYBLOCKFAIRYFADEOUT_OFFSET))(this, isNewbie);
		}

		::System::Void OnBeforePageFadeOut(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEOUT_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Void OnBeforePageFadeIn(::System::Boolean currentPageNeedsFadeAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_ONBEFOREPAGEFADEIN_OFFSET))(this, currentPageNeedsFadeAnim);
		}

		::System::Boolean TryBlockFairy(::System::Boolean isNewbie)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_TRYBLOCKFAIRY_OFFSET))(this, isNewbie);
		}

		::UnityEngine::Transform* GetBottomTips()
		{
			return ((::UnityEngine::Transform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_GETBOTTOMTIPS_OFFSET))(this);
		}

		::System::Void DispatchToChild(::Enum_3_3A45E918E5024074 eventNotifyType, ::Enum_3_A472E51DCF07A558 slotEvent)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_3A45E918E5024074, ::Enum_3_A472E51DCF07A558))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER_DISPATCHTOCHILD_OFFSET))(this, eventNotifyType, slotEvent);
		}

		::System::Void __base_OnBeforePageFadeIn(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEIN_OFFSET))(this, P0);
		}

		::System::Void __base_OnBeforePageFadeOut(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONBEFOREPAGEFADEOUT_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIBASESCENEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
