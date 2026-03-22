#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_7;
class Class_2_28659CDDAC432EF5;
class Class_2_5B67F5A4C7590353;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_GETCARDID_OFFSET UNITYSDK_OFFSET(0x80782F0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x8078620)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8077BC0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x8078910)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8077D40)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8077C60)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8077890)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8077E30)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_SHOWFLIPEDCARDREWARDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x80783A0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8078AE0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x8078AF0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x8078B30)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8078B40)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8078BB0)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8078C30)
#define MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8078CB0)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameNanGongRowWidgetController_TypeDefinitionIndex = 53966;

	class UIFlipCardGameNanGongRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* FilpCardAniName; // 0x0
		// static const ::System::Int32 TipIdHasNoCoin = 0x2DD107; // 0x0
		::System::Action_2<::System::Int32, ::System::Single>* FlipCardSuccessAction; // 0x2D0
		::System::Int32 _indexOfCardBoard; // 0x2D8
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall0; // 0x2E0
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall1; // 0x2E8
		::Class_2_5B67F5A4C7590353* _model; // 0x2F0
		::Class_2_28659CDDAC432EF5* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Boolean considerUnknown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, considerUnknown);
		}

		::System::Void ShowFlipedCardRewardPopWindow(::System::Int32 cardID, ::System::Boolean isFlipCard)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_SHOWFLIPEDCARDREWARDPOPWINDOW_OFFSET))(this, cardID, isFlipCard);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Boolean GetCardID(::System::Int32& cardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_GETCARDID_OFFSET))(this, cardID);
		}

		::System::Void OnRequestFlipCardSuccess(::Class_0_16E4307DCC419505_7* rcvmessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET))(this, rcvmessage);
		}

		::System::Void _OnRequestFlipCardSuccess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMENANGONGROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
