#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_7;
class Class_2_8265DBA59E61D93F;
class Class_2_D330081BF2BADC34;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIItemIconBtnSmallWidgetController; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T1, typename T2> class Action_2; }

#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_GETCARDID_OFFSET UNITYSDK_OFFSET(0x8BF9C00)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x8BF9E60)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BF9500)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET UNITYSDK_OFFSET(0x8BFA0E0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8BF9680)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BF95A0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BF91D0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x8BF9770)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_SHOWFLIPEDCARDREWARDPOPWINDOW_OFFSET UNITYSDK_OFFSET(0x8BF9CB0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x8BFA290)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET UNITYSDK_OFFSET(0x8BFA2A0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x8BFA2E0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x8BFA2F0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x8BFA360)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x8BFA3E0)
#define MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x8BFA460)

namespace MoleMole
{
	inline static constexpr unsigned int UIFlipCardGameZhaoRowWidgetController_TypeDefinitionIndex = 74144;

	class UIFlipCardGameZhaoRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		// static const ::System::String* FilpCardAniName; // 0x0
		// static const ::System::Int32 TipIdHasNoCoin = 0x2DD025; // 0x0
		::System::Action_2<::System::Int32, ::System::Single>* FlipCardSuccessAction; // 0x2D0
		::System::Int32 _indexOfCardBoard; // 0x2D8
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall0; // 0x2E0
		::MoleMole::UIItemIconBtnSmallWidgetController* _itemIconBtnSmall1; // 0x2E8
		::Class_2_8265DBA59E61D93F* _model; // 0x2F0
		::Class_2_D330081BF2BADC34* _view; // 0x2F8

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void RefreshView(::System::Boolean considerUnknown)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, considerUnknown);
		}

		::System::Void ShowFlipedCardRewardPopWindow(::System::Int32 cardID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_SHOWFLIPEDCARDREWARDPOPWINDOW_OFFSET))(this, cardID);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::System::Boolean GetCardID(::System::Int32& cardID)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32&))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_GETCARDID_OFFSET))(this, cardID);
		}

		::System::Void OnRequestFlipCardSuccess(::Class_0_16E4307DCC419505_7* rcvmessage)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_7*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER_ONREQUESTFLIPCARDSUCCESS_OFFSET))(this, rcvmessage);
		}

		::System::Void _OnRequestFlipCardSuccess_b__16_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER__ONREQUESTFLIPCARDSUCCESS_B__16_0_OFFSET))(this);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIFLIPCARDGAMEZHAOROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
