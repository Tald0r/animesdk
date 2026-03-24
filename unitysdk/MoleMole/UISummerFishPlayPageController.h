#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_2_3CC769D284A54927_Enum_3_3C549D6CCF7A45F3.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/MoleMole/UISummerFishPlayPageController_ECloseReason.h"
#include "unitysdk/MoleMole/UISummerFishPlayPageController_EState.h"
#include "unitysdk/UnityEngine/Vector3.h"

class Class_0_16E4307DCC419505_134;
class Class_1_D6D1B35AE0BED5AD;
class Class_2_60638234271CCDB8;
class Class_3_BC65147800193919_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UISummerFishClickButtonWidgetController; }
namespace MoleMole { class UISummerFishPlayClickCircleWidgetController; }
namespace MoleMole { class UISummerFishPlayPressCircleWidgetController; }
namespace MoleMole { class UISummerFishRewardDialogPopWindowController; }
namespace MoleMole { class UISummerFishSkillButtonWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class IEnumerator_1; }
namespace UnityEngine { class Coroutine; }

#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOFISHQTE_OFFSET UNITYSDK_OFFSET(0x951FCD0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOSTARTFISH_OFFSET UNITYSDK_OFFSET(0x951FA90)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOWAITFISH_OFFSET UNITYSDK_OFFSET(0x951F3E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLEARALLSTATE_OFFSET UNITYSDK_OFFSET(0x951DA00)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLOSEUI_OFFSET UNITYSDK_OFFSET(0x951FFE0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x951BFF0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x951EEA0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x951C0F0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHBEGINWAITIDLEHANDLE_OFFSET UNITYSDK_OFFSET(0x951F940)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHENDWAITIDLEHANDLE_OFFSET UNITYSDK_OFFSET(0x951F9D0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBATTLEPROGRESSHANDLE_OFFSET UNITYSDK_OFFSET(0x9523200)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBOSSSHIELDUPDATE_OFFSET UNITYSDK_OFFSET(0x9523F70)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDCOUNTDOWNHANDLE_OFFSET UNITYSDK_OFFSET(0x9524720)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDTIMELINEHANDLE_OFFSET UNITYSDK_OFFSET(0x9521020)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGFAILPRESSHANDLE_OFFSET UNITYSDK_OFFSET(0x95239F0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGHPUPDATE_OFFSET UNITYSDK_OFFSET(0x9523E40)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHFINALTIMEHANDLE_OFFSET UNITYSDK_OFFSET(0x9524B10)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEOUTHANDLE_OFFSET UNITYSDK_OFFSET(0x9524980)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEUPDATEHANDLE_OFFSET UNITYSDK_OFFSET(0x9524890)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGPRESSPROGRESSUPDATE_OFFSET UNITYSDK_OFFSET(0x9524BD0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTERESULTHANDLE_OFFSET UNITYSDK_OFFSET(0x9522790)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTETIMERATEHANDLE_OFFSET UNITYSDK_OFFSET(0x95226B0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQUEUEENDHANDLE_OFFSET UNITYSDK_OFFSET(0x9524230)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSHIELDRECOVERHINT_OFFSET UNITYSDK_OFFSET(0x95241A0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSINGLEBATTLEENDHANDLE_OFFSET UNITYSDK_OFFSET(0x95234E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTBATTLELOOPHANDLE_OFFSET UNITYSDK_OFFSET(0x9522850)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTCOUNTDOWNHANDLE_OFFSET UNITYSDK_OFFSET(0x95244D0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSINGLEBATTLEHANDLE_OFFSET UNITYSDK_OFFSET(0x9521580)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSKILLHANDLE_OFFSET UNITYSDK_OFFSET(0x9524330)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTTIMELINEHANDLE_OFFSET UNITYSDK_OFFSET(0x9520FB0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSCLICKHANDLE_OFFSET UNITYSDK_OFFSET(0x9523290)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSPRESSHANDLE_OFFSET UNITYSDK_OFFSET(0x9523BF0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONGOINGTRIGGER_OFFSET UNITYSDK_OFFSET(0x9520F00)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x951E2A0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x951F0A0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x95202B0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x951C770)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x951C190)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x951C800)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_REGISTERCONTROLEVENTS_OFFSET UNITYSDK_OFFSET(0x951D6E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x951C000)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWBIGSCENETUTORIALDIALOG_OFFSET UNITYSDK_OFFSET(0x951E140)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWFOLLOWTIPS_OFFSET UNITYSDK_OFFSET(0x9520910)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWNEWTIPS_OFFSET UNITYSDK_OFFSET(0x9520A80)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEBAR_OFFSET UNITYSDK_OFFSET(0x9521460)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEFOLLOWTIPSPOS_OFFSET UNITYSDK_OFFSET(0x9520A20)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x9521090)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_WAITMESSAGECENTERFREE_OFFSET UNITYSDK_OFFSET(0x951FF40)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_0_OFFSET UNITYSDK_OFFSET(0x9525210)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_2_OFFSET UNITYSDK_OFFSET(0x95253E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9524CB0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONFISHINGSTARTCOUNTDOWNHANDLE_B__76_0_OFFSET UNITYSDK_OFFSET(0x9525680)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET UNITYSDK_OFFSET(0x9524CD0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_1_OFFSET UNITYSDK_OFFSET(0x9524E10)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_0_OFFSET UNITYSDK_OFFSET(0x9524F40)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_1_OFFSET UNITYSDK_OFFSET(0x9524FC0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95256C0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x9525730)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9525760)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x95257D0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95257E0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95257F0)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9525800)
#define MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x9525810)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerFishPlayPageController_TypeDefinitionIndex = 37407;

	class UISummerFishPlayPageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_60638234271CCDB8* _view; // 0x308
		::MoleMole::UISummerFishRewardDialogPopWindowController* _autoRewardWindowController; // 0x310
		::System::String* _currentTips; // 0x318
		::UnityEngine::Coroutine* _animCoroutine; // 0x320
		::MoleMole::UISummerFishClickButtonWidgetController* _leftButtonController; // 0x328
		::MoleMole::UISummerFishClickButtonWidgetController* _rightButtonController; // 0x330
		::MoleMole::UISummerFishPlayClickCircleWidgetController* _clickCircleWidgetController; // 0x338
		::MoleMole::UISummerFishPlayPressCircleWidgetController* _pressCircleWidgetController; // 0x340
		::MoleMole::UISummerFishSkillButtonWidgetController* _skillButtonWidgetController; // 0x348
		::Class_1_D6D1B35AE0BED5AD* _chatPlayer; // 0x350
		::UnityEngine::Vector3 _followTipsPos; // 0x358
		::Foundation::Coroutine::CoroutineHandle _waitMessageCenterHandle; // 0x364
		::System::Boolean _startFishDown; // 0x368
		::System::Boolean _startFishCurrentDown; // 0x369
		::System::String* _lastSoundState; // 0x370
		::MoleMole::UISummerFishPlayPageController_EState _state; // 0x378
		::Class_2_3CC769D284A54927_Enum_3_3C549D6CCF7A45F3 _mode; // 0x37C
		::System::Int32 _leftOrRight; // 0x380
		::System::Single _battleProgress; // 0x384
		::System::Boolean _waitAutoRestart; // 0x388
		::Foundation::Coroutine::CoroutineHandle _rowAnimationHandle; // 0x38C
		::UnityEngine::Coroutine* _pressLoopHandle; // 0x390
		::System::Boolean _oldDebugMode; // 0x398
		::System::Int32 _oldDebugFishId; // 0x39C
		::System::Int32 _oldLevelId; // 0x3A0
		::System::Int32 _oldDebugOverrideChallangeId; // 0x3A4
		::System::UInt32 _oldInteractId; // 0x3A8
		::System::Single _bossBarTargetValue; // 0x3AC
		::System::Single _bossBarFromValue; // 0x3B0
		::System::Single _bossBarAnimTimeLeft; // 0x3B4
		::System::Single _bossBarToZeroAnimTime; // 0x3B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUIOPEN_OFFSET))(this, showCtrlContext);
		}

		::System::Void ShowBigSceneTutorialDialog()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWBIGSCENETUTORIALDIALOG_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Collections::Generic::IEnumerator_1<::System::Single>* WaitMessageCenterFree(::System::Action* callback)
		{
			return ((::System::Collections::Generic::IEnumerator_1<::System::Single>*(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_WAITMESSAGECENTERFREE_OFFSET))(this, callback);
		}

		::System::Void CloseUI(::System::Int32 levelId, ::System::UInt32 fishUid, ::MoleMole::UISummerFishPlayPageController_ECloseReason reason, ::System::Single passTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::UInt32, ::MoleMole::UISummerFishPlayPageController_ECloseReason, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLOSEUI_OFFSET))(this, levelId, fishUid, reason, passTime);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void ShowFollowTips(::System::String* key, ::UnityEngine::Vector3 worldPos)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::UnityEngine::Vector3))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWFOLLOWTIPS_OFFSET))(this, key, worldPos);
		}

		::System::Void UpdateFollowTipsPos()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEFOLLOWTIPSPOS_OFFSET))(this);
		}

		::System::Void ShowNewTips(::System::String* key)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_SHOWNEWTIPS_OFFSET))(this, key);
		}

		::System::Void OnGoingTrigger(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONGOINGTRIGGER_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartTimelineHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTTIMELINEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingEndTimelineHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDTIMELINEHANDLE_OFFSET))(this, obj);
		}

		::System::Void RegisterControlEvents()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_REGISTERCONTROLEVENTS_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ChangeToWaitFish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOWAITFISH_OFFSET))(this, args);
		}

		::System::Void ChangeToStartFish(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOSTARTFISH_OFFSET))(this, args);
		}

		::System::Void ChangeToFishQTE(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CHANGETOFISHQTE_OFFSET))(this, args);
		}

		::System::Void OnFishingStartSingleBattleHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSINGLEBATTLEHANDLE_OFFSET))(this, obj);
		}

		::System::Void ClearAllState()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_CLEARALLSTATE_OFFSET))(this);
		}

		::System::Void OnFishingQTETimeRateHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTETIMERATEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingQTEResultHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQTERESULTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartBattleLoopHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTBATTLELOOPHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingBattleProgressHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBATTLEPROGRESSHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingSuccessClickHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSCLICKHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingSingleBattleEndHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSINGLEBATTLEENDHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingFailPressHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGFAILPRESSHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingSuccessPressHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSUCCESSPRESSHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingHpUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGHPUPDATE_OFFSET))(this, obj);
		}

		::System::Void OnFishingBossShieldUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGBOSSSHIELDUPDATE_OFFSET))(this, obj);
		}

		::System::Void UpdateBar()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_UPDATEBAR_OFFSET))(this);
		}

		::System::Void OnFishingShieldRecoverHint(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSHIELDRECOVERHINT_OFFSET))(this, obj);
		}

		::System::Void OnFishBeginWaitIdleHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHBEGINWAITIDLEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishEndWaitIdleHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHENDWAITIDLEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingQueueEndHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGQUEUEENDHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartSkillHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTSKILLHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingStartCountDownHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGSTARTCOUNTDOWNHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingEndCountDownHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGENDCOUNTDOWNHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingMatchTimeUpdateHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEUPDATEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingMatchTimeOutHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHTIMEOUTHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingMatchFinalTimeHandle(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGMATCHFINALTIMEHANDLE_OFFSET))(this, obj);
		}

		::System::Void OnFishingPressProgressUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER_ONFISHINGPRESSPROGRESSUPDATE_OFFSET))(this, obj);
		}

		::System::Void _OnUIInit_b__5_0(::System::EventArgs* var)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_0_OFFSET))(this, var);
		}

		::System::Void _OnUIInit_b__5_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIINIT_B__5_1_OFFSET))(this);
		}

		::Class_0_16E4307DCC419505_134* _OnUIOpen_b__7_0()
		{
			return ((::Class_0_16E4307DCC419505_134*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_0_OFFSET))(this);
		}

		::System::Void _OnUIOpen_b__7_1(::Class_3_BC65147800193919_1* rsp)
		{
			return ((::System::Void(*)(::PVOID, ::Class_3_BC65147800193919_1*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONUIOPEN_B__7_1_OFFSET))(this, rsp);
		}

		::System::Void _ChangeToWaitFish_b__51_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_0_OFFSET))(this);
		}

		::System::Void _ChangeToWaitFish_b__51_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__CHANGETOWAITFISH_B__51_2_OFFSET))(this);
		}

		::System::Void _OnFishingStartCountDownHandle_b__76_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER__ONFISHINGSTARTCOUNTDOWNHANDLE_B__76_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMERFISHPLAYPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
