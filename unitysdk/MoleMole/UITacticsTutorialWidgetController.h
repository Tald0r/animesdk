#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWorkBenchInterKnotNoteTutorialWidgetController.h"

class Class_2_7706C62CD327A449;
class Class_2_79AE422BA06F6D26_190;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }

#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_FAKEUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C480A0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7C47E30)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7C47FD0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x7C47DC0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7C47F30)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7C47BE0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C47D40)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x7C48140)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_FAKEUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C481E0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x7C481F0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7C48200)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x7C48230)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x7C482B0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7C482C0)
#define MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x7C482D0)

namespace MoleMole
{
	inline static constexpr unsigned int UITacticsTutorialWidgetController_TypeDefinitionIndex = 66817;

	class UITacticsTutorialWidgetController : public ::MoleMole::UIWorkBenchInterKnotNoteTutorialWidgetController
	{
	public:
		::Class_2_79AE422BA06F6D26_190* _view; // 0x2B0
		::Class_2_7706C62CD327A449* _logicDelegate; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void FakeUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER_FAKEUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void __base_FakeUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_FAKEUIOPEN_OFFSET))(this, P0);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UITACTICSTUTORIALWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
