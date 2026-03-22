#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/MoleMole/UIMainStoryPersonalRowWidgetController_State.h"
#include "unitysdk/MoleMole/UIWidgetController.h"

class Class_2_33EA27A25F076E07;
class Class_2_60638234271CCDB8_35;
class Class_2_60638234271CCDB8_35_Class_2_E6639369F71E31AF;
class MonoUITableScrollV2;
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIMainStoryPageController_PersonalLineRowData; }
namespace MoleMole { class UIMainStoryPersonalRowWidgetController_SelectImage; }
namespace MoleMole { class UIMainStorySubitemRowChildWindowControllerV2; }
namespace System { template <typename T1, typename T2> class Action_2; }
namespace System { template <typename T> class Action_1; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class GameObject; }
namespace UnityEngine { class Material; }

#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CLEARSUBWIDGETS_OFFSET UNITYSDK_OFFSET(0xC134520)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGETS_OFFSET UNITYSDK_OFFSET(0xC134140)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET UNITYSDK_OFFSET(0xC134840)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_DOALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0xC135800)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GETSUBGOBYSUBID_OFFSET UNITYSDK_OFFSET(0xC1358E0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_HASSUBITEM_OFFSET UNITYSDK_OFFSET(0xC135D10)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_ROWDATA_OFFSET UNITYSDK_OFFSET(0xC134110)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_SELFSCROLLVIEW_OFFSET UNITYSDK_OFFSET(0xC134120)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_INVOKESUBITEM_OFFSET UNITYSDK_OFFSET(0xC134040)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_OK_OFFSET UNITYSDK_OFFSET(0xC133020)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC131EA0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONSELECT_OFFSET UNITYSDK_OFFSET(0xC134DB0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC131F40)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC131830)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC131DF0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUNSELECT_OFFSET UNITYSDK_OFFSET(0xC134AD0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_READNEW_OFFSET UNITYSDK_OFFSET(0xC133C60)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET UNITYSDK_OFFSET(0xC134A30)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET UNITYSDK_OFFSET(0xC1324E0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xC132120)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECT_OFFSET UNITYSDK_OFFSET(0xC135430)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETALPHAOFFSET_OFFSET UNITYSDK_OFFSET(0xC135720)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETROOTSELECTED_OFFSET UNITYSDK_OFFSET(0xC134C30)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSTAR_OFFSET UNITYSDK_OFFSET(0xC1346C0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSUBITEM_OFFSET UNITYSDK_OFFSET(0xC132CB0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SHOWINFO_OFFSET UNITYSDK_OFFSET(0xC135B00)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET UNITYSDK_OFFSET(0xC133A90)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERSELECT_OFFSET UNITYSDK_OFFSET(0xC133DF0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CREATESUBWIDGETS_B__20_0_OFFSET UNITYSDK_OFFSET(0xC136240)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0xC135D20)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_0_OFFSET UNITYSDK_OFFSET(0xC135FA0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_1_OFFSET UNITYSDK_OFFSET(0xC1360F0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_2_OFFSET UNITYSDK_OFFSET(0xC135E50)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET UNITYSDK_OFFSET(0xC135E40)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_B__22_0_OFFSET UNITYSDK_OFFSET(0xC1363D0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__HIDESUBITEMS_22_2_OFFSET UNITYSDK_OFFSET(0xC136400)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__SHOWINFO_22_1_OFFSET UNITYSDK_OFFSET(0xC134BC0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xC136460)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xC1364D0)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xC136550)
#define MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xC1365B0)

namespace MoleMole
{
	inline static constexpr unsigned int UIMainStoryPersonalRowWidgetController_TypeDefinitionIndex = 70887;

	class UIMainStoryPersonalRowWidgetController : public ::MoleMole::UIWidgetController
	{
	public:
		::Class_2_60638234271CCDB8_35* _view; // 0x2A0
		::MonoUITableScrollV2* parentScrollView; // 0x2A8
		::System::Int32 _curSubID; // 0x2B0
		::MoleMole::UIMainStoryPersonalRowWidgetController_SelectImage* lastSelectItem; // 0x2B8
		::Class_2_33EA27A25F076E07* _mainStoryModel; // 0x2C0
		::MoleMole::UIMainStoryPersonalRowWidgetController_State _state; // 0x2C8
		::Class_2_60638234271CCDB8_35_Class_2_E6639369F71E31AF* _extendInfoWidgetView; // 0x2D0
		::MoleMole::UIMainStoryPageController_PersonalLineRowData* _rowData; // 0x2D8
		::System::Boolean _hasSubItems; // 0x2E0
		::System::Boolean _showSubItems; // 0x2E1
		::System::Action_1<::System::Boolean>* _onClick; // 0x2E8
		::System::Action_1<::System::Int32>* _onClickSubItem; // 0x2F0
		::System::Collections::Generic::List_1<::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* _subItems; // 0x2F8
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Int32>* _subIDToArchiveFileID; // 0x300
		::UnityEngine::Material* _selectMaterial; // 0x308

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CTOR_OFFSET))(this);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void RefreshView(::MoleMole::UIMainStoryPageController_PersonalLineRowData* rowData, ::System::Action_1<::System::Boolean>* onClick, ::System::Action_1<::System::Int32>* onClickSubItem)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryPageController_PersonalLineRowData*, ::System::Action_1<::System::Boolean>*, ::System::Action_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHVIEW_OFFSET))(this, rowData, onClick, onClickSubItem);
		}

		::System::Void Ok()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_OK_OFFSET))(this);
		}

		::System::Void TriggerButtonClick()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERBUTTONCLICK_OFFSET))(this);
		}

		::System::Void ReadNew()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_READNEW_OFFSET))(this);
		}

		::System::Void TriggerSelect(::System::Boolean isInit)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_TRIGGERSELECT_OFFSET))(this, isInit);
		}

		::MoleMole::UIMainStoryPageController_PersonalLineRowData* get_RowData()
		{
			return ((::MoleMole::UIMainStoryPageController_PersonalLineRowData*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_ROWDATA_OFFSET))(this);
		}

		::MonoUITableScrollV2* get_selfScrollView()
		{
			return ((::MonoUITableScrollV2*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_SELFSCROLLVIEW_OFFSET))(this);
		}

		::System::Void RefreshState(::MoleMole::UIMainStoryPersonalRowWidgetController_State state)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIMainStoryPersonalRowWidgetController_State))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSTATE_OFFSET))(this, state);
		}

		::System::Void SetStar(::System::Int32 star)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSTAR_OFFSET))(this, star);
		}

		::System::Void InvokeSubItem(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_INVOKESUBITEM_OFFSET))(this, index);
		}

		::System::Void ClearSubWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CLEARSUBWIDGETS_OFFSET))(this);
		}

		::System::Void CreateSubWidgets()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGETS_OFFSET))(this);
		}

		::System::Void CreateSubWidget(::System::Int32 index, ::System::Int32 subID, ::System::Action_2<::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>* subBtnCallback)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Action_2<::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_CREATESUBWIDGET_OFFSET))(this, index, subID, subBtnCallback);
		}

		::System::Void SetSubItem(::System::Boolean showSubItems, ::System::Boolean immediateUnselect, ::System::Boolean delayPlayFadeIn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETSUBITEM_OFFSET))(this, showSubItems, immediateUnselect, delayPlayFadeIn);
		}

		::System::Void RefreshScrollViewContentActive()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_REFRESHSCROLLVIEWCONTENTACTIVE_OFFSET))(this);
		}

		::System::Void SetRootSelected(::System::Boolean selected)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETROOTSELECTED_OFFSET))(this, selected);
		}

		::System::Void OnSelect(::System::Boolean anim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONSELECT_OFFSET))(this, anim);
		}

		::System::Void OnUnselect(::System::Boolean playAnim)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_ONUNSELECT_OFFSET))(this, playAnim);
		}

		::System::Void Select(::System::Boolean isSelect)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SELECT_OFFSET))(this, isSelect);
		}

		::System::Void SetAlphaOffset(::System::Single alphaTiling)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SETALPHAOFFSET_OFFSET))(this, alphaTiling);
		}

		::System::Void DOAlphaOffset(::System::Single alphaTiling, ::System::Single duration)
		{
			return ((::System::Void(*)(::PVOID, ::System::Single, ::System::Single))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_DOALPHAOFFSET_OFFSET))(this, alphaTiling, duration);
		}

		::UnityEngine::GameObject* GetSubGoBySubID(::System::Int32 subid)
		{
			return ((::UnityEngine::GameObject*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GETSUBGOBYSUBID_OFFSET))(this, subid);
		}

		::System::Void ShowInfo()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_SHOWINFO_OFFSET))(this);
		}

		::System::Boolean get_HasSubItem()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER_GET_HASSUBITEM_OFFSET))(this);
		}

		::System::Void _OnUIInit_b__2_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__ONUIINIT_B__2_0_OFFSET))(this);
		}

		::System::Void _Ok_b__7_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_2_OFFSET))(this);
		}

		::System::Void _Ok_b__7_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_0_OFFSET))(this);
		}

		::System::Void _Ok_b__7_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__OK_B__7_1_OFFSET))(this);
		}

		::System::Void _CreateSubWidgets_b__20_0(::System::Int32 subID, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2* selectImg)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::MoleMole::UIMainStorySubitemRowChildWindowControllerV2*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__CREATESUBWIDGETS_B__20_0_OFFSET))(this, subID, selectImg);
		}

		::System::Void _SetSubItem_b__22_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_B__22_0_OFFSET))(this);
		}

		::System::Void _SetSubItem_g__ShowInfo_22_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__SHOWINFO_22_1_OFFSET))(this);
		}

		::System::Void _SetSubItem_g__HideSubItems_22_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER__SETSUBITEM_G__HIDESUBITEMS_22_2_OFFSET))(this);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIMAINSTORYPERSONALROWWIDGETCONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
