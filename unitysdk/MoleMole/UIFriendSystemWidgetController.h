#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_AA67334306B34AB0.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_2F3C7D4EFC74D485;
class Class_2_D447FDF2E5305D85;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIAddFriendWidgetController; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIFriendInfoWidgetController; }
namespace MoleMole { class UIRecentPlayerWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T> class List_1; }

#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ADD_ONUPDATEADDFRIENDTABTRIGGER_OFFSET UNITYSDK_OFFSET(0x95F4D20)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0x95F3960)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_CLEARADDFRIENDTABNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x95F4920)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_FOCUSINNERWIDGETGAMEPADMODULE_OFFSET UNITYSDK_OFFSET(0x95F4D90)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_GETDISPLAYTAB_OFFSET UNITYSDK_OFFSET(0x95F4F60)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0x95F4060)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONCLICKACCEPTALL_OFFSET UNITYSDK_OFFSET(0x95F5560)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONCLICKREJECTALL_OFFSET UNITYSDK_OFFSET(0x95F5640)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95F4650)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0x95F4A80)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95F46F0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95F3790)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_RECORDUPDATEOFADDFRIENDNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x95F4BA0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_REFRESHTOPTABNOTIFICATION_OFFSET UNITYSDK_OFFSET(0x95F49F0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_REMOVE_ONUPDATEADDFRIENDTABTRIGGER_OFFSET UNITYSDK_OFFSET(0x95F4CB0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_SELECTTAB_OFFSET UNITYSDK_OFFSET(0x95F4FD0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_SHOWRECOMMENDMOREBTN_OFFSET UNITYSDK_OFFSET(0x95F58E0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_UPDATEREQUESTUIELEMENT_OFFSET UNITYSDK_OFFSET(0x95F5720)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__BINDEVENT_B__10_2_OFFSET UNITYSDK_OFFSET(0x95F5AF0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__BINDEVENT_B__10_3_OFFSET UNITYSDK_OFFSET(0x95F5B10)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95F5A50)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__ONCLICKACCEPTALL_B__15_0_OFFSET UNITYSDK_OFFSET(0x95F5B60)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__ONCLICKREJECTALL_B__16_0_OFFSET UNITYSDK_OFFSET(0x95F5BD0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95F5C40)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x95F5CB0)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95F5D20)
#define MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95F5DA0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendSystemWidgetController_TypeDefinitionIndex = 37826;

	class UIFriendSystemWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_D447FDF2E5305D85* _view; // 0x2A0
		::MoleMole::UIFriendInfoWidgetController* _friendInfoController; // 0x2A8
		::MoleMole::UIAddFriendWidgetController* _addFriendController; // 0x2B0
		::MoleMole::UIRecentPlayerWidgetController* _findFriendController; // 0x2B8
		::Class_2_2F3C7D4EFC74D485* _uiFriendModel; // 0x2C0
		::System::Collections::Generic::List_1<::MoleMole::UIWidgetController*>* _contentAreaWidgetControllers; // 0x2C8
		::System::Int32 addFriendTabIdx; // 0x2D0
		::System::Boolean _needShowNewNotificationOnAddFriendTab; // 0x2D4
		::System::Boolean _needClearAddFriendTabNotification; // 0x2D5
		::System::Action* OnUpdateAddFriendTabTrigger; // 0x2D8
		::System::Collections::Generic::List_1<::Enum_3_AA67334306B34AB0>* displayTabList; // 0x2E0
		::MoleMole::UIWidgetController* _showController; // 0x2E8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void RecordUpdateOfAddFriendNotification(::System::Action* onUpdateTabTrigger)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_RECORDUPDATEOFADDFRIENDNOTIFICATION_OFFSET))(this, onUpdateTabTrigger);
		}

		::System::Void FocusInnerWidgetGamepadModule(::MoleMole::MonoGamepadModule* module)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_FOCUSINNERWIDGETGAMEPADMODULE_OFFSET))(this, module);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::Enum_3_AA67334306B34AB0>* GetDisplayTab()
		{
			return ((::System::Collections::Generic::List_1<::Enum_3_AA67334306B34AB0>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_GETDISPLAYTAB_OFFSET))(this);
		}

		::System::Void SelectTab(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_SELECTTAB_OFFSET))(this, index);
		}

		::System::Void ClearAddFriendTabNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_CLEARADDFRIENDTABNOTIFICATION_OFFSET))(this);
		}

		::System::Void OnClickAcceptAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONCLICKACCEPTALL_OFFSET))(this);
		}

		::System::Void OnClickRejectAll()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ONCLICKREJECTALL_OFFSET))(this);
		}

		::System::Void UpdateRequestUIElement(::System::Boolean hasRequest)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_UPDATEREQUESTUIELEMENT_OFFSET))(this, hasRequest);
		}

		::System::Void ShowRecommendMoreBtn(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_SHOWRECOMMENDMOREBTN_OFFSET))(this, isShow);
		}

		::System::Void RefreshTopTabNotification()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_REFRESHTOPTABNOTIFICATION_OFFSET))(this);
		}

		::System::Void add_OnUpdateAddFriendTabTrigger(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_ADD_ONUPDATEADDFRIENDTABTRIGGER_OFFSET))(this, value);
		}

		::System::Void remove_OnUpdateAddFriendTabTrigger(::System::Action* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER_REMOVE_ONUPDATEADDFRIENDTABTRIGGER_OFFSET))(this, value);
		}

		::System::Void _BindEvent_b__10_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__BINDEVENT_B__10_2_OFFSET))(this);
		}

		::System::Void _BindEvent_b__10_3(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__BINDEVENT_B__10_3_OFFSET))(this, args);
		}

		::System::Void _OnClickAcceptAll_b__15_0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__ONCLICKACCEPTALL_B__15_0_OFFSET))(this, b);
		}

		::System::Void _OnClickRejectAll_b__16_0(::System::Boolean b)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER__ONCLICKREJECTALL_B__16_0_OFFSET))(this, b);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDSYSTEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
