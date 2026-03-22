#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWindowController.h"

class Class_2_3B5926E5F38A0FB7;
namespace MoleMole { class UIAllroundGeneralTutorialPopWindowController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIHollowMiniGameDiscretePlayerMoveChildWindowController; }
namespace MoleMole { class UIHollowPushBoxGame3DModelController; }
namespace MoleMole { class UIPushBoxPlayBtnAChildWindowController; }
namespace System { class Action; }
namespace System { class String; }

#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xAB83A40)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCLICKINFO_OFFSET UNITYSDK_OFFSET(0xAB850C0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAB84A10)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAB84B40)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAB845A0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAB84AB0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAB83A50)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAB83C80)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_PLAYCONGRATSANIM_OFFSET UNITYSDK_OFFSET(0xAB85390)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_TRIGGEREXIT_OFFSET UNITYSDK_OFFSET(0xAB84BC0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xAB85550)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xAB85560)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xAB855D0)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xAB85600)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xAB85610)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xAB85620)
#define MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xAB85630)

namespace MoleMole
{
	inline static constexpr unsigned int UIPushBoxPlayWidgetController_TypeDefinitionIndex = 58103;

	class UIPushBoxPlayWidgetController : public ::MoleMole::UIWindowController
	{
	public:
		::Class_2_3B5926E5F38A0FB7* _view; // 0x2F8
		::System::String* _lastGameState; // 0x300
		::MoleMole::UIHollowPushBoxGame3DModelController* _pushBox3DCtrl; // 0x308
		::MoleMole::UIHollowMiniGameDiscretePlayerMoveChildWindowController* _playerMoveCtrl; // 0x310
		::MoleMole::UIPushBoxPlayBtnAChildWindowController* _playBtnACtrl; // 0x318
		::MoleMole::UIAllroundGeneralTutorialPopWindowController* _popInfo; // 0x320

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void TriggerExit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_TRIGGEREXIT_OFFSET))(this);
		}

		::System::Void OnClickInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_ONCLICKINFO_OFFSET))(this);
		}

		::System::Void PlayCongratsAnim(::System::Action* onAnimEnd)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER_PLAYCONGRATSANIM_OFFSET))(this, onAnimEnd);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIPUSHBOXPLAYWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
