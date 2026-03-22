#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/UnityEngine/Color.h"

class Class_2_2F3C7D4EFC74D485;
class Class_2_79F6D62CE30E3F8E_139;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIFriendChatItemContext; }
namespace System { class EventArgs; }
namespace System { class Object; }

#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_GET__MODEL_OFFSET UNITYSDK_OFFSET(0x95EEEA0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95EF1B0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x95EF300)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x95EF250)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x95EF550)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONSWITCHCIRCLEMUTEMSGBTN_OFFSET UNITYSDK_OFFSET(0x95EEF70)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONSWITCHFRIENDMUTEMSGBTN_OFFSET UNITYSDK_OFFSET(0x95EED10)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95EF470)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95EEA20)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWCIRCLEUIELEMENT_OFFSET UNITYSDK_OFFSET(0x95F0A80)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWCIRCLEUI_OFFSET UNITYSDK_OFFSET(0x95EFF50)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWEMPTY_OFFSET UNITYSDK_OFFSET(0x95EF790)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWFRIENDUIELEMENT_OFFSET UNITYSDK_OFFSET(0x95F0BD0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWFRIENDUI_OFFSET UNITYSDK_OFFSET(0x95EF8F0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWUSERDATA_OFFSET UNITYSDK_OFFSET(0x95EF840)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x95F0CA0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x95F0CB0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET UNITYSDK_OFFSET(0x95F0D20)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0x95F0D80)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x95F0DF0)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x95F0E70)
#define MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x95F0EF0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFriendChatItemWidgetController_TypeDefinitionIndex = 55781;

	class UIFriendChatItemWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_79F6D62CE30E3F8E_139* _view; // 0x2D0
		::UnityEngine::Color _defaultOfflineColor; // 0x2D8
		::System::Boolean hasUnreadMsg; // 0x2E8
		::MoleMole::UIFriendChatItemContext* _context; // 0x2F0

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnSwitchFriendMuteMsgBtn(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONSWITCHFRIENDMUTEMSGBTN_OFFSET))(this, args);
		}

		::System::Void OnSwitchCircleMuteMsgBtn(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONSWITCHCIRCLEMUTEMSGBTN_OFFSET))(this, args);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void ShowEmpty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWEMPTY_OFFSET))(this);
		}

		::System::Void ShowUserData(::MoleMole::UIFriendChatItemContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatItemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWUSERDATA_OFFSET))(this, context);
		}

		::System::Void ShowFriendUI(::MoleMole::UIFriendChatItemContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatItemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWFRIENDUI_OFFSET))(this, context);
		}

		::System::Void ShowFriendUIElement(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWFRIENDUIELEMENT_OFFSET))(this, isShow);
		}

		::System::Void ShowCircleUIElement(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWCIRCLEUIELEMENT_OFFSET))(this, isShow);
		}

		::System::Void ShowCircleUI(::MoleMole::UIFriendChatItemContext* context)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIFriendChatItemContext*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_SHOWCIRCLEUI_OFFSET))(this, context);
		}

		::Class_2_2F3C7D4EFC74D485* get__model()
		{
			return ((::Class_2_2F3C7D4EFC74D485*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER_GET__MODEL_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemReselect()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONITEMRESELECT_OFFSET))(this);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFRIENDCHATITEMWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
