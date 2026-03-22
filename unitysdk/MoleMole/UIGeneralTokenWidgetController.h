#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_86B416CCBC8EBB8D_1;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIGeneralTokenRowWidgetController; }
namespace MoleMole { class UITokenShowConfig; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_FORCESETCONSOLENAVIGATIONLOSTFOCUS_OFFSET UNITYSDK_OFFSET(0xBFB33D0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GETTOKEN_OFFSET UNITYSDK_OFFSET(0xBFB34D0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GET_ISFOCUSED_OFFSET UNITYSDK_OFFSET(0xBFB2050)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xBFB2350)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFB2900)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xBFB2CE0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xBFB35F0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xBFB2A80)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONPACKAGEITEMCHANGED_OFFSET UNITYSDK_OFFSET(0xBFB3580)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFB29A0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFB21C0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFB2420)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHCONSOLENAVIGATIONFUNCTION_OFFSET UNITYSDK_OFFSET(0xBFB2B30)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xBFB2640)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONBACKMODULE_OFFSET UNITYSDK_OFFSET(0xBFB3330)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONENABLED_OFFSET UNITYSDK_OFFSET(0xBFB32C0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETTOKENITEMID_OFFSET UNITYSDK_OFFSET(0xBFB3020)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_TRYDIRECTTRIGGERTOKENBTN_OFFSET UNITYSDK_OFFSET(0xBFB2D90)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_UPDATEONCHANGED_OFFSET UNITYSDK_OFFSET(0xBFB3660)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBFB3740)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBFB3770)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xBFB37E0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET UNITYSDK_OFFSET(0xBFB3810)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBFB3870)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBFB38F0)
#define MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xBFB3950)

namespace MoleMole
{
	inline static constexpr unsigned int UIGeneralTokenWidgetController_TypeDefinitionIndex = 54897;

	class UIGeneralTokenWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_86B416CCBC8EBB8D_1* _view; // 0x2A0
		::System::Action* _tokenExternalClickHandle; // 0x2A8
		::System::Collections::Generic::List_1<::MoleMole::UITokenShowConfig*>* _tokenShowConfigs; // 0x2B0
		::System::Collections::Generic::List_1<::MoleMole::UIGeneralTokenRowWidgetController*>* _tokenRowList; // 0x2B8
		::System::Boolean _isEnableConsoleNavigation; // 0x2C0
		::System::Boolean _isConsoleDirectTriggerButton; // 0x2C1

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Boolean get_IsFocused()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GET_ISFOCUSED_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetTokenItemID(::System::Collections::Generic::List_1<::System::Int32>* tTokenItemID, ::System::Collections::Generic::List_1<::System::Boolean>* hideAddIcon)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*, ::System::Collections::Generic::List_1<::System::Boolean>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETTOKENITEMID_OFFSET))(this, tTokenItemID, hideAddIcon);
		}

		::System::Void SetConsoleNavigationEnabled(::System::Boolean isEnable)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONENABLED_OFFSET))(this, isEnable);
		}

		::System::Void SetConsoleNavigationBackModule(::MoleMole::MonoGamepadModule* targetModule, ::System::String* targetModuleName)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_SETCONSOLENAVIGATIONBACKMODULE_OFFSET))(this, targetModule, targetModuleName);
		}

		::System::Void ForceSetConsoleNavigationLostFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_FORCESETCONSOLENAVIGATIONLOSTFOCUS_OFFSET))(this);
		}

		::MoleMole::UIGeneralTokenRowWidgetController* GetToken(::System::Int32 index)
		{
			return ((::MoleMole::UIGeneralTokenRowWidgetController*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_GETTOKEN_OFFSET))(this, index);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void OnPackageItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONPACKAGEITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void OnItemChanged(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_ONITEMCHANGED_OFFSET))(this, args);
		}

		::System::Void RefreshView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this);
		}

		::System::Void UpdateOnChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_UPDATEONCHANGED_OFFSET))(this);
		}

		::System::Void RefreshConsoleNavigationFunction()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_REFRESHCONSOLENAVIGATIONFUNCTION_OFFSET))(this);
		}

		::System::Boolean TryDirectTriggerTokenBtn()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER_TRYDIRECTTRIGGERTOKENBTN_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnLayoutPlatformChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONLAYOUTPLATFORMCHANGED_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIGENERALTOKENWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
