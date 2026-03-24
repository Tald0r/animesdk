#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_340DE32BA097F66C.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_6F5EF14512C56DB5.h"
#include "unitysdk/Enum_3_A019F766F8C74696.h"
#include "unitysdk/Enum_3_F4705266FB2007C7.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UISummerEventMainPageController.h"
#include "unitysdk/UnityEngine/Vector2.h"

class Class_1_50957C778109E4D2;
class Class_1_B3309433BD404061;
class Class_2_60638234271CCDB8_45;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIGeneralNewsBubbleRowWidgetController; }
namespace MoleMole { class UISummerMissionTipsWidgetController; }
namespace MoleMole { class UISummerSurfLeftBarChildWindowController; }
namespace MoleMole { class UISummerSurfRightBarChildWindowController; }
namespace MoleMole { class UISurfEquipSkillChildWindowController; }
namespace MoleMole { class UISurfSlowDownChildWindowController; }
namespace MoleMole { class UISurfSpeedUpChildWindowController; }
namespace MoleMole { class UISurfTurnLeftChildWindowController; }
namespace MoleMole { class UISurfTurnRightChildWindowController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }

#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CLOSECOUNTUPTIMER_OFFSET UNITYSDK_OFFSET(0xAAF3C60)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CREATENAVMAPCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAAF2A40)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GETMETALPATH_OFFSET UNITYSDK_OFFSET(0xAAF1990)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_CAMERADELTA_OFFSET UNITYSDK_OFFSET(0xAAF1300)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_DRIFT_OFFSET UNITYSDK_OFFSET(0xAAF10A0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_MOVE_OFFSET UNITYSDK_OFFSET(0xAAF1250)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_ONGOINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAAF0FF0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SLOWDOWN_OFFSET UNITYSDK_OFFSET(0xAAF1090)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SPEEDUP_OFFSET UNITYSDK_OFFSET(0xAAF1010)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0xAAF0FE0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAAF0FD0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAF2220)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONEXITGAME_OFFSET UNITYSDK_OFFSET(0xAAF38B0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAAF32E0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONLOGICINLEVELCAMERAMOVE_OFFSET UNITYSDK_OFFSET(0xAAF3550)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONOPERATECOUNTTIMERSTATE_OFFSET UNITYSDK_OFFSET(0xAAF3A10)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONPERFORMNOTIFY_OFFSET UNITYSDK_OFFSET(0xAAF2D40)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONRESTARTGAME_OFFSET UNITYSDK_OFFSET(0xAAF3960)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAF2F20)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAF22C0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_OPENCOUNTUPTIMERWIDGET_OFFSET UNITYSDK_OFFSET(0xAAF3CF0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PAUSEGAME_OFFSET UNITYSDK_OFFSET(0xAAF3820)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYEQUIPEFFECT_OFFSET UNITYSDK_OFFSET(0xAAF1160)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYFINISHTIP_OFFSET UNITYSDK_OFFSET(0xAAF1420)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYSTARTTIP_OFFSET UNITYSDK_OFFSET(0xAAF1310)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ENABLESKILL_OFFSET UNITYSDK_OFFSET(0xAAF11D0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ONGOINGCONTROLLER_OFFSET UNITYSDK_OFFSET(0xAAF1000)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_SKILLRATIO_OFFSET UNITYSDK_OFFSET(0xAAF10D0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSIONTIPIFREFRESHMINIMALTIMECOST_OFFSET UNITYSDK_OFFSET(0xAAF1CA0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSION_OFFSET UNITYSDK_OFFSET(0xAAF1520)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATESPEED_OFFSET UNITYSDK_OFFSET(0xAAF31C0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0xAAF2FE0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAAF3F50)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__PLAYSTARTTIP_G__STARTGAME_42_0_OFFSET UNITYSDK_OFFSET(0xAAF3FB0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAAF4070)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAAF40E0)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAAF4110)
#define MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAAF4120)

namespace MoleMole
{
	inline static constexpr unsigned int UISummerEventSurfMainPageController_TypeDefinitionIndex = 43697;

	class UISummerEventSurfMainPageController : public ::MoleMole::UISummerEventMainPageController
	{
	public:
		::Class_2_60638234271CCDB8_45* _view; // 0x308
		::MoleMole::UISurfSpeedUpChildWindowController* _speedUp; // 0x310
		::MoleMole::UISurfSlowDownChildWindowController* _slowDown; // 0x318
		::MoleMole::UISurfEquipSkillChildWindowController* _equipSkill; // 0x320
		::MoleMole::UISurfTurnLeftChildWindowController* _turnLeft; // 0x328
		::MoleMole::UISurfTurnRightChildWindowController* _turnRight; // 0x330
		::MoleMole::UIGeneralNewsBubbleRowWidgetController* _countUpTimer; // 0x338
		::Class_1_50957C778109E4D2* _navMap; // 0x340
		::MoleMole::UISummerSurfLeftBarChildWindowController* _leftBar; // 0x348
		::MoleMole::UISummerSurfRightBarChildWindowController* _rightBar; // 0x350
		::Enum_3_F4705266FB2007C7 _cursorHideState; // 0x358
		::MoleMole::UISummerMissionTipsWidgetController* _missionTips; // 0x360
		::Foundation::Coroutine::CoroutineHandle _missionCoroutine; // 0x368
		::UnityEngine::Vector2 _curFrameAxisValue; // 0x36C
		::UnityEngine::Vector2 _curFromMoveAxisValue; // 0x374
		::UnityEngine::Vector2 _curFrameRawAxisValue; // 0x37C
		::Enum_3_A019F766F8C74696 _lastInputDevice; // 0x384
		::Class_1_B3309433BD404061* _OngoingController_k__BackingField; // 0x388
		::System::Boolean _isRotating; // 0x390
		::System::Boolean _gameStart; // 0x391

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_F4705266FB2007C7 get_UICursorHideState()
		{
			return ((::Enum_3_F4705266FB2007C7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::Class_1_B3309433BD404061* get_OngoingController()
		{
			return ((::Class_1_B3309433BD404061*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_ONGOINGCONTROLLER_OFFSET))(this);
		}

		::System::Void set_OngoingController(::Class_1_B3309433BD404061* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_B3309433BD404061*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ONGOINGCONTROLLER_OFFSET))(this, value);
		}

		::System::Boolean get_SpeedUp()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SPEEDUP_OFFSET))(this);
		}

		::System::Boolean get_SlowDown()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_SLOWDOWN_OFFSET))(this);
		}

		::System::Boolean get_Drift()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_DRIFT_OFFSET))(this);
		}

		::System::Void set_SkillRatio(::System::Single value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_SKILLRATIO_OFFSET))(this, value);
		}

		::System::Void PlayEquipEffect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYEQUIPEFFECT_OFFSET))(this);
		}

		::System::Void set_EnableSkill(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SET_ENABLESKILL_OFFSET))(this, value);
		}

		::System::Single get_Move()
		{
			return ((::System::Single(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_MOVE_OFFSET))(this);
		}

		::UnityEngine::Vector2 get_CameraDelta()
		{
			return ((::UnityEngine::Vector2(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GET_CAMERADELTA_OFFSET))(this);
		}

		::System::Void PlayStartTip(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYSTARTTIP_OFFSET))(this, callback);
		}

		::System::Void PlayFinishTip(::System::Action* callback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PLAYFINISHTIP_OFFSET))(this, callback);
		}

		::System::Void ShowMission(::System::Int32 value, ::Enum_3_6F5EF14512C56DB5 rank)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::Enum_3_6F5EF14512C56DB5))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSION_OFFSET))(this, value, rank);
		}

		::System::Void ShowMissionTipIfRefreshMinimalTimeCost(::System::Single totalTime)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_SHOWMISSIONTIPIFREFRESHMINIMALTIMECOST_OFFSET))(this, totalTime);
		}

		static ::System::String* GetMetalPath(::Enum_3_6F5EF14512C56DB5 rank)
		{
			return ((::System::String*(*)(::Enum_3_6F5EF14512C56DB5))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_GETMETALPATH_OFFSET))(rank);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnPerformNotify(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONPERFORMNOTIFY_OFFSET))(this, args);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::Class_1_50957C778109E4D2* CreateNavMapController()
		{
			return ((::Class_1_50957C778109E4D2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CREATENAVMAPCONTROLLER_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void UpdateSpeed()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_UPDATESPEED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Boolean OnLogicInLevelCameraMove(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONLOGICINLEVELCAMERAMOVE_OFFSET))(this, inputAction);
		}

		::System::Void PauseGame(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_PAUSEGAME_OFFSET))(this, value);
		}

		::System::Void OnExitGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONEXITGAME_OFFSET))(this);
		}

		::System::Void OnRestartGame()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONRESTARTGAME_OFFSET))(this);
		}

		::System::Void OnOperateCountTimerState(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_ONOPERATECOUNTTIMERSTATE_OFFSET))(this, args);
		}

		::MoleMole::UIGeneralNewsBubbleRowWidgetController* OpenCountUpTimerWidget()
		{
			return ((::MoleMole::UIGeneralNewsBubbleRowWidgetController*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_OPENCOUNTUPTIMERWIDGET_OFFSET))(this);
		}

		::System::Void CloseCountUpTimer(::MoleMole::UIGeneralNewsBubbleRowWidgetController*& countUpTimer)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIGeneralNewsBubbleRowWidgetController*&))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER_CLOSECOUNTUPTIMER_OFFSET))(this, countUpTimer);
		}

		::System::Void _PlayStartTip_g__StartGame_42_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER__PLAYSTARTTIP_G__STARTGAME_42_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UISUMMEREVENTSURFMAINPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
