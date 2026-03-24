#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/InputActionEvent.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_1_1BC290F9827A1BD7;
class Class_1_BE6BF7909AD9D940;
class Class_1_C7AC4A09F839C0D1;
class Class_2_2F3C7D4EFC74D485;
class Class_2_B16DC8627FD2B932;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendSystemWidgetController; }
namespace System { class EventArgs; }
namespace System { class String; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONADDFRIENDGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xBF24FB0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF24C40)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONHIDE_OFFSET UNITYSDK_OFFSET(0xBF24B80)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xBF24DD0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET UNITYSDK_OFFSET(0xBF25E80)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTFIELDDESELECT_OFFSET UNITYSDK_OFFSET(0xBF25CD0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTFIELDSELECT_OFFSET UNITYSDK_OFFSET(0xBF25BE0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONRECEIVEADDFRIENDREQUESTLIST_OFFSET UNITYSDK_OFFSET(0xBF250C0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBF248B0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF24CE0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF23E80)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONUPDATEREQUESTLIST_OFFSET UNITYSDK_OFFSET(0xBF24F10)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_SETUPPARENTCONTROLLER_OFFSET UNITYSDK_OFFSET(0xBF24EA0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_UPDATEFRIENDLIST_OFFSET UNITYSDK_OFFSET(0xBF24A60)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xBF25F30)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xBF25F60)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET UNITYSDK_OFFSET(0xBF25FD0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_2_OFFSET UNITYSDK_OFFSET(0xBF260A0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_3_OFFSET UNITYSDK_OFFSET(0xBF26100)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_4_OFFSET UNITYSDK_OFFSET(0xBF26370)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_5_OFFSET UNITYSDK_OFFSET(0xBF263F0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_6_OFFSET UNITYSDK_OFFSET(0xBF26040)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__UPDATEFRIENDLIST_B__11_0_OFFSET UNITYSDK_OFFSET(0xBF26470)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xBF264D0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONHIDE_OFFSET UNITYSDK_OFFSET(0xBF26540)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET UNITYSDK_OFFSET(0xBF265A0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0xBF265D0)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xBF26640)
#define MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xBF266C0)

namespace MoleMole
{
	inline static constexpr unsigned int UIAddFriendWidgetController_TypeDefinitionIndex = 49844;

	class UIAddFriendWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_B16DC8627FD2B932* _view; // 0x2A0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2A8
		::Class_1_1BC290F9827A1BD7* handler; // 0x2B0
		::MoleMole::UIFriendSystemWidgetController* _parentController; // 0x2B8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONHIDE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Boolean OnInputAction(::MoleMole::InputActionEvent inputAction)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTACTION_OFFSET))(this, inputAction);
		}

		::System::Void SetupParentController(::MoleMole::UIFriendSystemWidgetController* controller)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendSystemWidgetController*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_SETUPPARENTCONTROLLER_OFFSET))(this, controller);
		}

		::System::Void OnUpdateRequestList(::System::Boolean hasRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONUPDATEREQUESTLIST_OFFSET))(this, hasRequest);
		}

		::System::Void OnAddFriendGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONADDFRIENDGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void UpdateFriendList()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_UPDATEFRIENDLIST_OFFSET))(this);
		}

		::System::Void OnReceiveAddFriendRequestList(::System::Collections::Generic::List_1<::Class_1_C7AC4A09F839C0D1*>* requestList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_C7AC4A09F839C0D1*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONRECEIVEADDFRIENDREQUESTLIST_OFFSET))(this, requestList);
		}

		::System::Void OnInputFieldSelect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTFIELDSELECT_OFFSET))(this);
		}

		::System::Void OnInputFieldDeselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTFIELDDESELECT_OFFSET))(this);
		}

		::System::Void OnInputChanged(::System::String* input)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER_ONINPUTCHANGED_OFFSET))(this, input);
		}

		::System::Void _OnUIInit_b__2_0(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__2_1(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_1_OFFSET))(this, args);
		}

		::System::Void _OnUIInit_b__2_6(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_6_OFFSET))(this, list);
		}

		::System::Void _OnUIInit_b__2_2(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_2_OFFSET))(this, list);
		}

		::System::Void _OnUIInit_b__2_3()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_3_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_4()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_4_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_5()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__ONUIINIT_B__2_5_OFFSET))(this);
		}

		::System::Void _UpdateFriendList_b__11_0(::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>* list)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::Class_1_BE6BF7909AD9D940*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER__UPDATEFRIENDLIST_B__11_0_OFFSET))(this, list);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnHide()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONHIDE_OFFSET))(this);
		}

		::System::Boolean __base_OnInputAction(::MoleMole::InputActionEvent P0)
		{
			return ((::System::Boolean(*)(::PVOID, ::MoleMole::InputActionEvent))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONINPUTACTION_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIADDFRIENDWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
