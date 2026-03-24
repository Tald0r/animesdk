#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/ScrollViewItemWidgetController.h"
#include "unitysdk/MoleMole/UILineupListRowWidgetController_InputState.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_7F8E72A37FA24C0F;
class Class_1_D4F8C41AAD377B89;
class Class_2_79AE422BA06F6D26_249;
class Class_2_79AE422BA06F6D26_249_Class_2_EF16346D79C18F15_15;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIDoubleTipsInfoWidgetController; }
namespace System { class Action; }
namespace System { class EventArgs; }
namespace System { class Object; }
namespace System { class String; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class RectTransform; }
namespace UnityEngine::EventSystems { class BaseEventData; }

#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_BINDEVENT_OFFSET UNITYSDK_OFFSET(0xB3E9F60)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYID_OFFSET UNITYSDK_OFFSET(0xB3EDEC0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_1_OFFSET UNITYSDK_OFFSET(0xB3EE010)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_OFFSET UNITYSDK_OFFSET(0xB3EDDD0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKDELITEM_OFFSET UNITYSDK_OFFSET(0xB3EABA0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKRESETBTN_OFFSET UNITYSDK_OFFSET(0xB3ED490)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB3EADD0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONEDITCLICK_OFFSET UNITYSDK_OFFSET(0xB3ED900)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONENDEDIT_OFFSET UNITYSDK_OFFSET(0xB3ED320)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGAMEPADMORECLICK_OFFSET UNITYSDK_OFFSET(0xB3EE410)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGETCAFEDATA_OFFSET UNITYSDK_OFFSET(0xB3EA2C0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB3EB160)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB3EAF50)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSUBMIT_OFFSET UNITYSDK_OFFSET(0xB3EE490)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB3EAE70)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB3E9EB0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLD_OFFSET UNITYSDK_OFFSET(0xB3EE330)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLT_OFFSET UNITYSDK_OFFSET(0xB3EE3A0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRD_OFFSET UNITYSDK_OFFSET(0xB3EE2C0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRT_OFFSET UNITYSDK_OFFSET(0xB3EE250)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHBASEVIEW_OFFSET UNITYSDK_OFFSET(0xB3EB1D0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET UNITYSDK_OFFSET(0xB3EA330)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARD_OFFSET UNITYSDK_OFFSET(0xB3EC200)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETDATA_OFFSET UNITYSDK_OFFSET(0xB3EB0D0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMOREBTNACTIVE_OFFSET UNITYSDK_OFFSET(0xB3ED290)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMORECLICK_OFFSET UNITYSDK_OFFSET(0xB3EDA70)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETREWARDICON_OFFSET UNITYSDK_OFFSET(0xB3EDB50)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xB3EE500)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__ONCLICKDELITEM_B__9_0_OFFSET UNITYSDK_OFFSET(0xB3EE510)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__REFRESHREWARD_G__SAFEGETITEMID_26_0_OFFSET UNITYSDK_OFFSET(0xB3EDAE0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xB3EE610)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET UNITYSDK_OFFSET(0xB3EE680)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET UNITYSDK_OFFSET(0xB3EE6F0)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xB3EE770)
#define MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xB3EE7F0)

namespace MoleMole
{
	inline static constexpr unsigned int UILineupListRowWidgetController_TypeDefinitionIndex = 75023;

	class UILineupListRowWidgetController : public ::MoleMole::ScrollViewItemWidgetController
	{
	public:
		::MoleMole::UILineupListRowWidgetController_InputState _inputState; // 0x2D0
		::Class_2_79AE422BA06F6D26_249* _view; // 0x2D8
		::System::Action_1<::System::Int32>* onClickCallAction; // 0x2E0
		::System::Int32 suiteId; // 0x2E8
		::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* rewardsItems; // 0x2F0
		::MoleMole::UIDoubleTipsInfoWidgetController* _doubleTipsInfoWidgetController; // 0x2F8
		::System::Action* _onGamepadMoreClick; // 0x300

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void BindEvent()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_BINDEVENT_OFFSET))(this);
		}

		::System::Void OnGetCafeData(::System::EventArgs* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGETCAFEDATA_OFFSET))(this, obj);
		}

		::System::Void OnClickDelItem()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKDELITEM_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnScrollItemUpdate(::System::Int32 index, ::System::Object* data, ::System::Boolean init)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSCROLLITEMUPDATE_OFFSET))(this, index, data, init);
		}

		::System::Void OnItemSelect(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONITEMSELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetData(::System::Int32 intemplateIndex, ::System::Action_1<::System::Int32>* onClickCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETDATA_OFFSET))(this, intemplateIndex, onClickCallback);
		}

		::System::Void RefreshBaseView(::System::Boolean needRefreshReward)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHBASEVIEW_OFFSET))(this, needRefreshReward);
		}

		::System::Void RefreshRewardBuffView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARDBUFFVIEW_OFFSET))(this);
		}

		::System::Void SetGamepadMoreBtnActive(::System::Boolean active)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMOREBTNACTIVE_OFFSET))(this, active);
		}

		::System::Void OnEndEdit(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONENDEDIT_OFFSET))(this, name);
		}

		::System::Void OnClickResetBtn(::System::Action* onResetConfirm)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONCLICKRESETBTN_OFFSET))(this, onResetConfirm);
		}

		::System::Void OnEditClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONEDITCLICK_OFFSET))(this);
		}

		::System::Void SetGamepadMoreClick(::System::Action* onGamepadMoreClick)
		{
			return ((::System::Void(*)(::PVOID, ::System::Action*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETGAMEPADMORECLICK_OFFSET))(this, onGamepadMoreClick);
		}

		::System::Void RefreshReward()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_REFRESHREWARD_OFFSET))(this);
		}

		::System::Int32 GetFirstRewardByIndex(::System::Int32 machineLevel, ::System::Collections::Generic::List_1<::Class_1_7F8E72A37FA24C0F*>* build, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Collections::Generic::List_1<::Class_1_7F8E72A37FA24C0F*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_OFFSET))(this, machineLevel, build, idx);
		}

		::System::Int32 GetFirstRewardByIndex_1(::System::Int32 machineLevel, ::Class_1_D4F8C41AAD377B89* build, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::Class_1_D4F8C41AAD377B89*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYINDEX_1_OFFSET))(this, machineLevel, build, idx);
		}

		::System::Int32 GetFirstRewardById(::System::Int32 machineLevel, ::System::Int32 monsterCard)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_GETFIRSTREWARDBYID_OFFSET))(this, machineLevel, monsterCard);
		}

		::System::Void SetRewardIcon(::Class_2_79AE422BA06F6D26_249_Class_2_EF16346D79C18F15_15* view, ::System::Int32 itemId)
		{
			return ((::System::Void(*)(::PVOID, ::Class_2_79AE422BA06F6D26_249_Class_2_EF16346D79C18F15_15*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_SETREWARDICON_OFFSET))(this, view, itemId);
		}

		::UnityEngine::RectTransform* PopUpRT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRT_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpRD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPRD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpLD()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLD_OFFSET))(this);
		}

		::UnityEngine::RectTransform* PopUpLT()
		{
			return ((::UnityEngine::RectTransform*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_POPUPLT_OFFSET))(this);
		}

		::System::Void OnGamepadMoreClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONGAMEPADMORECLICK_OFFSET))(this);
		}

		::System::Void OnSubmit(::UnityEngine::EventSystems::BaseEventData* eventData)
		{
			return ((::System::Void(*)(::PVOID, ::UnityEngine::EventSystems::BaseEventData*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER_ONSUBMIT_OFFSET))(this, eventData);
		}

		::System::Void _OnClickDelItem_b__9_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__ONCLICKDELITEM_B__9_0_OFFSET))(this);
		}

		static ::System::Int32 _RefreshReward_g__SafeGetItemId_26_0(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>* source, ::System::Int32 idx)
		{
			return ((::System::Int32(*)(::System::Collections::Generic::List_1<::Class_1_0D6706375CDAAE8C*>*, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER__REFRESHREWARD_G__SAFEGETITEMID_26_0_OFFSET))(source, idx);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnItemSelect(::System::Boolean P0)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONITEMSELECT_OFFSET))(this, P0);
		}

		::System::Void __base_OnScrollItemUpdate(::System::Int32 P0, ::System::Object* P1, ::System::Boolean P2)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONSCROLLITEMUPDATE_OFFSET))(this, P0, P1, P2);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UILINEUPLISTROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}
	};
}
