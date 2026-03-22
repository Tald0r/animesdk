#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Foundation/Coroutine/CoroutineHandle.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_1_7ECB9691B142D586;
class Class_2_79F6D62CE30E3F8E_126;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Action; }
namespace System { class String; }
namespace UnityEngine { class Animation; }
namespace UnityEngine::UI { class RawImage; }
namespace UnityEngine::UI::Extension { class UIButtonEx; }

#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ENDGAMELOGO_OFFSET UNITYSDK_OFFSET(0x8A64F50)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GAMESTART_OFFSET UNITYSDK_OFFSET(0x8A64340)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GETLAUNCHVIDEOPATH_OFFSET UNITYSDK_OFFSET(0x8A646C0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8A63CE0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A64100)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8A641A0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8A63D70)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A65E80)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A65310)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYGAMELOGO_OFFSET UNITYSDK_OFFSET(0x8A64790)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYKOREAAGELIMIT_OFFSET UNITYSDK_OFFSET(0x8A65B30)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYMHYLOGO_OFFSET UNITYSDK_OFFSET(0x8A64590)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYWARNINGLOGO_OFFSET UNITYSDK_OFFSET(0x8A651B0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_SETSKIP_OFFSET UNITYSDK_OFFSET(0x8A64CC0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x8A63CF0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER_STATE_PLAYTITLE_OFFSET UNITYSDK_OFFSET(0x8A63DF0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8A65EF0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__PLAYWARNINGLOGO_B__15_0_OFFSET UNITYSDK_OFFSET(0x8A66070)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_0_OFFSET UNITYSDK_OFFSET(0x8A65F40)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_1_OFFSET UNITYSDK_OFFSET(0x8A65FE0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8A66080)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8A660F0)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8A66120)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8A66130)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8A66140)
#define MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET UNITYSDK_OFFSET(0x8A66150)

namespace MoleMole
{
	inline static constexpr unsigned int UILaunchPageController_TypeDefinitionIndex = 71986;

	class UILaunchPageController : public ::MoleMole::UIWindowController
	{
	public:
		::System::Single waitSkipTime; // 0x2F8
		::System::Boolean isGameStart; // 0x2FC
		::UnityEngine::UI::Extension::UIButtonEx* skipButton; // 0x300
		::Class_2_79F6D62CE30E3F8E_126* _view; // 0x308
		::UnityEngine::Animation* mhyLogoPlay; // 0x310
		::UnityEngine::Animation* gameLogoPlay; // 0x318
		::UnityEngine::Animation* warningLogoPlay; // 0x320
		::System::Single _animationTime; // 0x328
		::Class_1_7ECB9691B142D586* playerHelper; // 0x330
		::UnityEngine::UI::RawImage* _screen; // 0x338
		::System::Single _videoFadeOutTime; // 0x340
		::Foundation::Coroutine::CoroutineHandle videoDelayFadeHand; // 0x344
		::UnityEngine::Animation* videoMaskAni; // 0x348
		::System::String* koraLimitVideoUrl; // 0x350

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_SETUIWINDOWSETTING_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void State_PlayTitle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_STATE_PLAYTITLE_OFFSET))(this);
		}

		::System::Void PlayMHYLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYMHYLOGO_OFFSET))(this);
		}

		::System::String* GetLaunchVideoPath()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GETLAUNCHVIDEOPATH_OFFSET))(this);
		}

		::System::Void PlayGameLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYGAMELOGO_OFFSET))(this);
		}

		::System::Void SetSkip()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_SETSKIP_OFFSET))(this);
		}

		::System::Void EndGameLogo(::Class_1_7ECB9691B142D586* helper)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_7ECB9691B142D586*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ENDGAMELOGO_OFFSET))(this, helper);
		}

		::System::Void PlayWarningLogo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYWARNINGLOGO_OFFSET))(this);
		}

		::System::Void GameStart()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_GAMESTART_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void PlayKoreaAgeLimit(::System::Action* next)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_PLAYKOREAAGELIMIT_OFFSET))(this, next);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void _SetSkip_b__13_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_0_OFFSET))(this);
		}

		::System::Void _SetSkip_b__13_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__SETSKIP_B__13_1_OFFSET))(this);
		}

		::System::Void _PlayWarningLogo_b__15_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER__PLAYWARNINGLOGO_B__15_0_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_SetUIWindowSetting()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILAUNCHPAGECONTROLLER___BASE_SETUIWINDOWSETTING_OFFSET))(this);
		}
	};
}
