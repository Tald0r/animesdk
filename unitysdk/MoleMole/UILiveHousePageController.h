#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIMainCityStorePageController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"

class Class_1_D43702405C026A47;
class Class_2_0BAC3E9BB588E1E6;
class Class_2_941A638742843CB5;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UILiveHousePageController_Context; }

#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ADDCONSOLEINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x8F18370)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ADDMOBILEINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x8F180F0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ADDPCINPUTACTIONS_OFFSET UNITYSDK_OFFSET(0x8F181A0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0x8F17D40)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_GET__GAMEPLAYMANGER_OFFSET UNITYSDK_OFFSET(0x8F17DC0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_GET__VIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8F17D50)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET UNITYSDK_OFFSET(0x8F199C0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONAPPLICATIONPAUSE_OFFSET UNITYSDK_OFFSET(0x8F198A0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8F17E30)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8F19270)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8F18EE0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8F19340)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8F18E30)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8F18F80)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8F17EF0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8F187B0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_UPDATE_OFFSET UNITYSDK_OFFSET(0x8F19A30)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8F19BA0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET UNITYSDK_OFFSET(0x8F19BB0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONDESTROY_OFFSET UNITYSDK_OFFSET(0x8F19C20)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0x8F19C30)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0x8F19C90)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x8F19CC0)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x8F19D30)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8F19D40)
#define MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x8F19D50)

namespace MoleMole
{
	inline static constexpr unsigned int UILiveHousePageController_TypeDefinitionIndex = 50597;

	class UILiveHousePageController : public ::MoleMole::UIMainCityStorePageController
	{
	public:
		::Class_2_941A638742843CB5* _model; // 0x308
		::MoleMole::UILiveHousePageController_Context* _context; // 0x310

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::Class_2_0BAC3E9BB588E1E6* get__viewModel()
		{
			return ((::Class_2_0BAC3E9BB588E1E6*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_GET__VIEWMODEL_OFFSET))(this);
		}

		::Class_1_D43702405C026A47* get__gamePlayManger()
		{
			return ((::Class_1_D43702405C026A47*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_GET__GAMEPLAYMANGER_OFFSET))(this);
		}

		::System::Void OnCreateViewModel(::Struct_2_575273D27F02957E& binderInfo, ::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONCREATEVIEWMODEL_OFFSET))(this, binderInfo, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void OnApplicationPause(::System::Boolean pauseStatus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONAPPLICATIONPAUSE_OFFSET))(this, pauseStatus);
		}

		::System::Void OnApplicationFocus(::System::Boolean focus)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ONAPPLICATIONFOCUS_OFFSET))(this, focus);
		}

		::System::Void Update()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_UPDATE_OFFSET))(this);
		}

		::System::Void AddMobileInputActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ADDMOBILEINPUTACTIONS_OFFSET))(this);
		}

		::System::Void AddConsoleInputActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ADDCONSOLEINPUTACTIONS_OFFSET))(this);
		}

		::System::Void AddPCInputActions()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER_ADDPCINPUTACTIONS_OFFSET))(this);
		}

		::System::Void __base_OnCreateViewModel(::Struct_2_575273D27F02957E& P0, ::MoleMole::UIControlReference* P1)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_575273D27F02957E&, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONCREATEVIEWMODEL_OFFSET))(this, P0, P1);
		}

		::System::Void __base_OnDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILIVEHOUSEPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
