#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3A8D4AF679CBDF1E.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/Enum_3_F4705266FB2007C7.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/MiniGame/TartarusHounds/Direction.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_60638234271CCDB8_6;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHoundGame3DModelController; }
namespace MoleMole { class UISoulHoundsIIIInLevelChildWindowController; }
namespace MoleMole::MiniGame { class HoundMiniGameWorld; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class HashSet_1; }

#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_DOINPUT_OFFSET UNITYSDK_OFFSET(0x914A6E0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET UNITYSDK_OFFSET(0x91491B0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x91491A0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEGAMEUI_OFFSET UNITYSDK_OFFSET(0x914A380)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEIMMEDIATELY_OFFSET UNITYSDK_OFFSET(0x914A490)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_LATEUPDATE_OFFSET UNITYSDK_OFFSET(0x91498B0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONBEFOREUPDATE_OFFSET UNITYSDK_OFFSET(0x9149510)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x91491C0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x914AAA0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET UNITYSDK_OFFSET(0x91499D0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONREVCWORLDINITSCNOTIFY_OFFSET UNITYSDK_OFFSET(0x914C670)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x914A290)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDSGAMEEND_OFFSET UNITYSDK_OFFSET(0x914A080)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDUNBLOCKINPUT_OFFSET UNITYSDK_OFFSET(0x914A190)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x914A500)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9149260)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9149390)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OPENGAMEUI_OFFSET UNITYSDK_OFFSET(0x9149C70)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETGAMETYPE_OFFSET UNITYSDK_OFFSET(0x914C5C0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETWWISEFOLLOWINGLISTENER_OFFSET UNITYSDK_OFFSET(0x9149A50)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_TRYINPUT_OFFSET UNITYSDK_OFFSET(0x9149720)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x914C6F0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x914C800)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x914C870)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x914C8A0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x914C8B0)
#define MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x914C8C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIHoundGamePageController_TypeDefinitionIndex = 68548;

	class UIHoundGamePageController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_60638234271CCDB8_6* _view; // 0x2F8
		::MoleMole::UIHoundGame3DModelController* houndGame3dCtrl; // 0x300
		::MoleMole::UISoulHoundsIIIInLevelChildWindowController* inLevelPageCtrl; // 0x308
		::MoleMole::MiniGame::HoundMiniGameWorld* miniGameWorld; // 0x310
		::System::Collections::Generic::HashSet_1<::MoleMole::MiniGame::TartarusHounds::Direction>* pressingDir; // 0x318
		::Il2CppArray<::System::Boolean>* dirPressed; // 0x320
		::Il2CppArray<::System::Boolean>* lastDirPressed; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Enum_3_F4705266FB2007C7 get_UICursorHideState()
		{
			return ((::Enum_3_F4705266FB2007C7(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_GET_UICURSORHIDESTATE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnBeforeUpdate(::System::Single obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONBEFOREUPDATE_OFFSET))(this, obj);
		}

		::System::Void LateUpdate()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_LATEUPDATE_OFFSET))(this);
		}

		::System::Void OnLogicInit(::MoleMole::MiniGame::HoundMiniGameWorld* mingGameWorld)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::HoundMiniGameWorld*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONLOGICINIT_OFFSET))(this, mingGameWorld);
		}

		::System::Void OpenGameUI(::System::Boolean fade)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_OPENGAMEUI_OFFSET))(this, fade);
		}

		::System::Void OnSoulHoundsGameEnd(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDSGAMEEND_OFFSET))(this, eventArgs);
		}

		::System::Void OnSoulHoundUnBlockInput(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDUNBLOCKINPUT_OFFSET))(this, eventArgs);
		}

		::System::Void OnSoulHoundBlockInput(::System::EventArgs* eventArgs)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONSOULHOUNDBLOCKINPUT_OFFSET))(this, eventArgs);
		}

		::System::Void HideGameUI(::System::Action* fadeCB)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEGAMEUI_OFFSET))(this, fadeCB);
		}

		::System::Void HideImmediately()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_HIDEIMMEDIATELY_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void TryInput(::MoleMole::MiniGame::TartarusHounds::Direction dir, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_TRYINPUT_OFFSET))(this, dir, isDown);
		}

		::System::Void DoInput(::MoleMole::MiniGame::TartarusHounds::Direction dir, ::System::Boolean isDown)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MiniGame::TartarusHounds::Direction, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_DOINPUT_OFFSET))(this, dir, isDown);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetGameType(::Enum_3_3A8D4AF679CBDF1E gameType)
		{
			return ((::System::Void(*)(::PVOID, ::Enum_3_3A8D4AF679CBDF1E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETGAMETYPE_OFFSET))(this, gameType);
		}

		::System::Void OnRevcWorldInitScNotify()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_ONREVCWORLDINITSCNOTIFY_OFFSET))(this);
		}

		::System::Void SetWwiseFollowingListener()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER_SETWWISEFOLLOWINGLISTENER_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHOUNDGAMEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
