#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_2_CA5AE22C0A4482A2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class EventArgs; }

#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7538B50)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7538CB0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7539490)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7538DC0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7538BC0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONURBANMAPENABLEUPDATE_OFFSET UNITYSDK_OFFSET(0x7539100)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_RELEASEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x7539430)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET UNITYSDK_OFFSET(0x75391D0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_TRIGGERMAPBTNCLICK_OFFSET UNITYSDK_OFFSET(0x75392A0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x7539360)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x75397C0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x75397F0)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x7539860)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x7539890)
#define MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x7539900)

namespace MoleMole
{
	inline static constexpr unsigned int UIUrbanMapTipsWidgetController_TypeDefinitionIndex = 78916;

	class UIUrbanMapTipsWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Struct_2_575273D27F02957E _binderInfo; // 0x2A0
		::MoleMole::UIControlReference* _controlReference; // 0x2B0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::Class_2_CA5AE22C0A4482A2* get__viewModel()
		{
			return ((::Class_2_CA5AE22C0A4482A2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUrbanMapEnableUpdate(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONURBANMAPENABLEUPDATE_OFFSET))(this, obj);
		}

		::System::Void SetConsoleActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_SETCONSOLEACTIVE_OFFSET))(this, active);
		}

		::System::Boolean TriggerMapBtnClick()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_TRIGGERMAPBTNCLICK_OFFSET))(this);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void ReleaseViewModel()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_RELEASEVIEWMODEL_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIURBANMAPTIPSWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
