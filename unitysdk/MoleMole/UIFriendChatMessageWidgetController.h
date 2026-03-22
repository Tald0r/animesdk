#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/Struct_2_7FB1976AEB7689C7.h"
#include "unitysdk/Struct_2_C8629618711DF8B3.h"

class Class_1_9EDE5D0623B668B8;
class Class_1_B1CC8F53861C28C2;
class Class_2_2F3C7D4EFC74D485;
class Class_2_67824DA88C97AA78;
class Class_2_DF3786176D510571_1;
class Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358;
class Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358_1;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatCommonInfoUIWidgetController; }
namespace MoleMole { class UIFriendChatCommonTopUIWidgetController; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA359680)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA3593B0)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xA35A750)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA359540)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA359450)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA358E30)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET UNITYSDK_OFFSET(0xA35AC50)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_PROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0xA3591F0)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_RESETSPECIALUI_OFFSET UNITYSDK_OFFSET(0xA35ABA0)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_RESETUIVIEW_OFFSET UNITYSDK_OFFSET(0xA35AA90)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xA35AD00)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA35AD10)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET UNITYSDK_OFFSET(0xA35AD80)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xA35ADE0)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA35AE60)
#define MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA35AEE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatMessageWidgetController_TypeDefinitionIndex = 67861;

	class UIFriendChatMessageWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_DF3786176D510571_1* _view; // 0x2D0
		::Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358_1* _playerMsgView; // 0x2D8
		::Class_2_DF3786176D510571_1_Class_2_82300A0D1A49C358* _selfMsgView; // 0x2E0
		::MoleMole::UIFriendChatCommonInfoUIWidgetController* _commonInfoWidget; // 0x2E8
		::MoleMole::UIFriendChatCommonTopUIWidgetController* _commonTopWidget; // 0x2F0
		::Class_2_2F3C7D4EFC74D485* _model; // 0x2F8
		::System::UInt32 soundPendingId; // 0x300
		::Class_2_67824DA88C97AA78* _voiceContainer; // 0x308
		::Struct_2_7FB1976AEB7689C7 _audioAnimCtrl; // 0x310
		::Class_1_B1CC8F53861C28C2* _data; // 0x318
		::Class_1_9EDE5D0623B668B8* _item; // 0x320
		::System::Boolean _isSenderUser; // 0x328

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void PropertyChanged(::Struct_2_C8629618711DF8B3& e)
		{
			return ((::System::Void(*)(::PVOID, ::Struct_2_C8629618711DF8B3&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_PROPERTYCHANGED_OFFSET))(this, e);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Void ResetUIView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_RESETUIVIEW_OFFSET))(this);
		}

		::System::Void ResetSpecialUI()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_RESETSPECIALUI_OFFSET))(this);
		}

		::System::Void OnUpdateChatMessageRow(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER_ONUPDATECHATMESSAGEROW_OFFSET))(this, args);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemRecycle()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONSCROLLITEMRECYCLE_OFFSET))(this);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATMESSAGEWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
