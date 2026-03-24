#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"

class Class_0_16E4307DCC419505_265;
class Class_1_0D6706375CDAAE8C;
class Class_2_8C04CD821B036ED5;
namespace MoleMole { class MonoGamepadSelectable; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }

#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_CLICKITEM_OFFSET UNITYSDK_OFFSET(0x745DCC0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_DISPLAYGOTICON_OFFSET UNITYSDK_OFFSET(0x745E4A0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET UNITYSDK_OFFSET(0x745DEB0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GET_ITEMID_OFFSET UNITYSDK_OFFSET(0x745E890)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x745DBF0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x745D1B0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x745D4E0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x745E7F0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x745D370)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x745D250)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET UNITYSDK_OFFSET(0x745DF20)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0x745D840)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETCUSTOMCOUNTTEXT_OFFSET UNITYSDK_OFFSET(0x745EB40)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETEMPTY_OFFSET UNITYSDK_OFFSET(0x745D610)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGET_OFFSET UNITYSDK_OFFSET(0x745E9D0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGOTCOLOR_OFFSET UNITYSDK_OFFSET(0x745E530)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET UNITYSDK_OFFSET(0x745DB80)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMGRAY_OFFSET UNITYSDK_OFFSET(0x745E760)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET UNITYSDK_OFFSET(0x745E8A0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SHOWBG_OFFSET UNITYSDK_OFFSET(0x745E6D0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SHOWDATAINFO_OFFSET UNITYSDK_OFFSET(0x745EAB0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x745EBE0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET UNITYSDK_OFFSET(0x745EBF0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x745EC00)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0x745EC70)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET UNITYSDK_OFFSET(0x745ECF0)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x745ED60)
#define MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x745EDE0)

namespace MoleMole
{
	inline static constexpr unsigned int UIItemIconBtnSmallWidgetController_TypeDefinitionIndex = 42014;

	class UIItemIconBtnSmallWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::Class_2_8C04CD821B036ED5* _view; // 0x2D0
		::Class_0_16E4307DCC419505_265* _itemViewData; // 0x2D8
		::Class_1_0D6706375CDAAE8C* _itemData; // 0x2E0
		::System::Action_1<::System::Int32>* _itemClickedAct; // 0x2E8
		::System::Boolean _emptyShowBg; // 0x2F0
		::System::Boolean _enableJump; // 0x2F1
		::System::Int32 m_itemID; // 0x2F4

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void SetItemClickedAct(::System::Action_1<::System::Int32>* itemClickedAct)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMCLICKEDACT_OFFSET))(this, itemClickedAct);
		}

		::System::Void OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONCLICKITEM_OFFSET))(this);
		}

		::MoleMole::MonoGamepadSelectable* GetGamepadSelectable()
		{
			return ((::MoleMole::MonoGamepadSelectable*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GETGAMEPADSELECTABLE_OFFSET))(this);
		}

		::System::Void ClickItem(::System::Int32 templateID)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_CLICKITEM_OFFSET))(this, templateID);
		}

		::System::Void RefreshView(::Class_0_16E4307DCC419505_265* itemViewData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_265*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, itemViewData);
		}

		::System::Void OnSetData(::System::Object* data)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_ONSETDATA_OFFSET))(this, data);
		}

		::System::Void RefreshView_1(::System::Int32 templateID, ::System::Int32 count, ::System::Int32 targetCount, ::System::Boolean isLoadSprite)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_REFRESHVIEW_1_OFFSET))(this, templateID, count, targetCount, isLoadSprite);
		}

		::System::Int32 get_ItemID()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_GET_ITEMID_OFFSET))(this);
		}

		::System::Void SetItemIDShowState(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMIDSHOWSTATE_OFFSET))(this, isShow);
		}

		::System::Void SetEmpty(::System::Boolean isEmpty)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETEMPTY_OFFSET))(this, isEmpty);
		}

		::System::Void DisplayGotIcon(::System::Boolean display)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_DISPLAYGOTICON_OFFSET))(this, display);
		}

		::System::Void SetGotColor(::System::Boolean set)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGOTCOLOR_OFFSET))(this, set);
		}

		::System::Void SetGet(::System::Boolean get)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETGET_OFFSET))(this, get);
		}

		::System::Void SetItemGray(::System::Boolean isGray)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETITEMGRAY_OFFSET))(this, isGray);
		}

		::System::Void ShowBg(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SHOWBG_OFFSET))(this, isShow);
		}

		::System::Void ShowDataInfo(::System::Boolean isShow)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SHOWDATAINFO_OFFSET))(this, isShow);
		}

		::System::Void SetCustomCountText(::System::String* countText)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER_SETCUSTOMCOUNTTEXT_OFFSET))(this, countText);
		}

		::System::Void __base_OnClickItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCLICKITEM_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnSetData(::System::Object* P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONSETDATA_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIITEMICONBTNSMALLWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
