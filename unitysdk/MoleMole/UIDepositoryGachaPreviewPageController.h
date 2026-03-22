#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Enum_3_3EDF246633A325B0.h"
#include "unitysdk/MoleMole/UIDepositoryGachaPreviewPageController_ERefreshType.h"
#include "unitysdk/MoleMole/UIWindowController.h"
#include "unitysdk/Struct_2_575273D27F02957E.h"
#include "unitysdk/Struct_2_6AB58C5477BF48DC.h"
#include "unitysdk/System/ValueTuple_2.h"

class Class_1_0D6706375CDAAE8C;
class Class_1_1685EC66FBD28897;
class Class_2_79AE422BA06F6D26_201;
class MonoUITableScrollV2;
namespace MoleMole { class MonoGamepadModule; }
namespace MoleMole { class UIControlReference; }
namespace MoleMole { class UIControllerContextBase; }
namespace MoleMole { class UIDepositoryGachaPreviewPageContext; }
namespace MoleMole { class UIItemIconBtnWidgetController; }
namespace MoleMole { class UITabBtn01RowWidgetController; }
namespace System { class EventArgs; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace UnityEngine { class Transform; }
namespace UnityEngine::UI::Extension { class UITabButtonGroup; }
template <typename T> class Class_1_C8F9732D07C3EF21;
template <typename T> class Class_2_7AE1A22930C1CD01;

#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_CREATEFILTERANDSORTDATA_OFFSET UNITYSDK_OFFSET(0xA5328F0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_CREATEITEM_OFFSET UNITYSDK_OFFSET(0xA531C80)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_CURITEMHASJUMPITEMS_OFFSET UNITYSDK_OFFSET(0xA5319A0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET UNITYSDK_OFFSET(0xA52F6F0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_GOTODETAIL_OFFSET UNITYSDK_OFFSET(0xA533970)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_INITVIEW_OFFSET UNITYSDK_OFFSET(0xA52F9B0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0xA52F700)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0xA531300)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONONSYNCBGPOS_OFFSET UNITYSDK_OFFSET(0xA531E80)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONSHOW_OFFSET UNITYSDK_OFFSET(0xA530A40)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONSORTORFILTERCHANGED_OFFSET UNITYSDK_OFFSET(0xA531C00)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONTABBTNCLICKED_OFFSET UNITYSDK_OFFSET(0xA5338E0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0xA5308E0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0xA531270)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUIINIT_OFFSET UNITYSDK_OFFSET(0xA52F7A0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0xA530210)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHCURTABITEMSDATA_OFFSET UNITYSDK_OFFSET(0xA531F80)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHFETCHBTN_OFFSET UNITYSDK_OFFSET(0xA5313C0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHPREVIEWBYITEMDATA_OFFSET UNITYSDK_OFFSET(0xA5316C0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHVIEW_OFFSET UNITYSDK_OFFSET(0xA530E30)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_RESETFOCUS_OFFSET UNITYSDK_OFFSET(0xA531150)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SELECTITEMBYINDEXONITEMUIDCHANGE_OFFSET UNITYSDK_OFFSET(0xA5314E0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SELECTITEMBYINDEX_OFFSET UNITYSDK_OFFSET(0xA531550)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SETCURRENTTABINDEX_OFFSET UNITYSDK_OFFSET(0xA530B00)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SETSCROLLSELECTBYINDEX_OFFSET UNITYSDK_OFFSET(0xA531800)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SETUPTAB_OFFSET UNITYSDK_OFFSET(0xA530460)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__CTOR_OFFSET UNITYSDK_OFFSET(0x9D5EA00)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__INITVIEW_B__32_0_OFFSET UNITYSDK_OFFSET(0x9D5EA10)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__INITVIEW_B__32_1_OFFSET UNITYSDK_OFFSET(0x9D5EA20)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__INITVIEW_B__32_2_OFFSET UNITYSDK_OFFSET(0x9D5EA30)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__REFRESHCURTABITEMSDATA_G__ADDITEMTOICONLIST_38_0_OFFSET UNITYSDK_OFFSET(0x9D5EB30)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET UNITYSDK_OFFSET(0x9D5EC50)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET UNITYSDK_OFFSET(0x9D5ECC0)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONSHOW_OFFSET UNITYSDK_OFFSET(0x9D5ED30)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUICLOSE_OFFSET UNITYSDK_OFFSET(0x9D5ED40)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET UNITYSDK_OFFSET(0x9D5ED50)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUIINIT_OFFSET UNITYSDK_OFFSET(0x9D5ED60)
#define MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET UNITYSDK_OFFSET(0x9D5ED70)

namespace MoleMole
{
	inline static constexpr unsigned int UIDepositoryGachaPreviewPageController_TypeDefinitionIndex = 63188;

	class UIDepositoryGachaPreviewPageController : public ::MoleMole::UIWindowController
	{
	public:
		// static const ::System::UInt64 INVALID_ITEM_UID = 0xFFFFFFFFFFFFFFFF; // 0x0
		// static const ::System::Int32 WEAPON_TAB_INDEX = 0x0; // 0x0
		::Class_2_79AE422BA06F6D26_201* _view; // 0x2F8
		::MoleMole::UIDepositoryGachaPreviewPageContext* _context; // 0x300
		::Class_2_7AE1A22930C1CD01<::Class_1_1685EC66FBD28897*>* _sorter; // 0x308
		::UnityEngine::UI::Extension::UITabButtonGroup* _tabButtonGroup; // 0x310
		::UnityEngine::Transform* _tabContentRoot; // 0x318
		::MonoUITableScrollV2* _scrollRectEx; // 0x320
		::System::Collections::Generic::List_1<::MoleMole::UITabBtn01RowWidgetController*>* _tabsList; // 0x328
		::System::Collections::Generic::Dictionary_2<::System::Int32, ::System::Collections::Generic::List_1<::System::Int32>*>* _tabClassTypeDict; // 0x330
		::System::Int32 _tabItemsNum; // 0x338
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _tabItems; // 0x340
		::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* _filteredTabItems; // 0x348
		::System::Int32 m_curItemID; // 0x350
		::System::Int32 m_curSelectIndex; // 0x354

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__CTOR_OFFSET))(this);
		}

		::Enum_3_3EDF246633A325B0 get_windowType()
		{
			return ((::Enum_3_3EDF246633A325B0(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_GET_WINDOWTYPE_OFFSET))(this);
		}

		::System::Void OnCreateView(::MoleMole::UIControlReference* controlReference)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONCREATEVIEW_OFFSET))(this, controlReference);
		}

		::System::Void OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUIINIT_OFFSET))(this);
		}

		::System::Void OnUIOpen(::MoleMole::UIControllerContextBase* openCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUIOPEN_OFFSET))(this, openCtrlContext);
		}

		::System::Void OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUICLOSE_OFFSET))(this);
		}

		::System::Void OnShow(::MoleMole::UIControllerContextBase* showCtrlContext)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONSHOW_OFFSET))(this, showCtrlContext);
		}

		::System::Void OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* gamepadModule)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONGAMEPADMODULEFOCUS_OFFSET))(this, gamepadModule);
		}

		::System::Void SelectItemByIndexOnItemUIDChange(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SELECTITEMBYINDEXONITEMUIDCHANGE_OFFSET))(this, index);
		}

		::System::Void SelectItemByIndex(::System::Int32 index, ::System::Boolean forceRefresh)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SELECTITEMBYINDEX_OFFSET))(this, index, forceRefresh);
		}

		::System::Void RefreshPreviewByItemData(::Class_1_0D6706375CDAAE8C* itemData)
		{
			return ((::System::Void(*)(::PVOID, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHPREVIEWBYITEMDATA_OFFSET))(this, itemData);
		}

		::System::Void RefreshFetchBtn()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHFETCHBTN_OFFSET))(this);
		}

		::System::Boolean CurItemHasJumpItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_CURITEMHASJUMPITEMS_OFFSET))(this);
		}

		::System::Void SetScrollSelectByIndex()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SETSCROLLSELECTBYINDEX_OFFSET))(this);
		}

		::System::Void ResetFocus()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_RESETFOCUS_OFFSET))(this);
		}

		::System::Void InitView()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_INITVIEW_OFFSET))(this);
		}

		::System::Boolean SetCurrentTabIndex(::System::Int32 index)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SETCURRENTTABINDEX_OFFSET))(this, index);
		}

		::System::Void OnSortOrFilterChanged()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONSORTORFILTERCHANGED_OFFSET))(this);
		}

		::MoleMole::UIItemIconBtnWidgetController* CreateItem(::Struct_2_575273D27F02957E binderInfo)
		{
			return ((::MoleMole::UIItemIconBtnWidgetController*(*)(::PVOID, ::Struct_2_575273D27F02957E))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_CREATEITEM_OFFSET))(this, binderInfo);
		}

		::System::Void OnOnSyncBgPos(::System::EventArgs* args)
		{
			return ((::System::Void(*)(::PVOID, ::System::EventArgs*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONONSYNCBGPOS_OFFSET))(this, args);
		}

		::System::Void RefreshView(::MoleMole::UIDepositoryGachaPreviewPageController_ERefreshType type, ::System::Boolean focusToFirstItem, ::System::UInt64 selectItem, ::System::Boolean playAnimation)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDepositoryGachaPreviewPageController_ERefreshType, ::System::Boolean, ::System::UInt64, ::System::Boolean))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHVIEW_OFFSET))(this, type, focusToFirstItem, selectItem, playAnimation);
		}

		::System::Void RefreshCurTabItemsData(::MoleMole::UIDepositoryGachaPreviewPageController_ERefreshType type)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIDepositoryGachaPreviewPageController_ERefreshType))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_REFRESHCURTABITEMSDATA_OFFSET))(this, type);
		}

		::System::Void SetupTab()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_SETUPTAB_OFFSET))(this);
		}

		::System::Void OnTabBtnClicked(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_ONTABBTNCLICKED_OFFSET))(this, index);
		}

		::System::ValueTuple_2<::Class_1_C8F9732D07C3EF21<::Class_1_1685EC66FBD28897*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*> CreateFilterAndSortData(::System::Collections::Generic::List_1<::System::Int32>* classTypes)
		{
			return ((::System::ValueTuple_2<::Class_1_C8F9732D07C3EF21<::Class_1_1685EC66FBD28897*>*, ::Il2CppArray<::Struct_2_6AB58C5477BF48DC>*>(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_CREATEFILTERANDSORTDATA_OFFSET))(this, classTypes);
		}

		::System::Void GotoDetail()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER_GOTODETAIL_OFFSET))(this);
		}

		::System::Void _InitView_b__32_0()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__INITVIEW_B__32_0_OFFSET))(this);
		}

		::System::Void _InitView_b__32_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__INITVIEW_B__32_1_OFFSET))(this);
		}

		::System::Void _InitView_b__32_2()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__INITVIEW_B__32_2_OFFSET))(this);
		}

		static ::System::Void _RefreshCurTabItemsData_g__AddItemToIconList_38_0(::System::Int32& idx, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>* list, ::Class_1_0D6706375CDAAE8C* data)
		{
			return ((::System::Void(*)(::System::Int32&, ::System::Collections::Generic::List_1<::Class_1_1685EC66FBD28897*>*, ::Class_1_0D6706375CDAAE8C*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER__REFRESHCURTABITEMSDATA_G__ADDITEMTOICONLIST_38_0_OFFSET))(idx, list, data);
		}

		::System::Void __base_OnCreateView(::MoleMole::UIControlReference* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControlReference*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONCREATEVIEW_OFFSET))(this, P0);
		}

		::System::Void __base_OnGamepadModuleFocus(::MoleMole::MonoGamepadModule* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::MonoGamepadModule*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONGAMEPADMODULEFOCUS_OFFSET))(this, P0);
		}

		::System::Void __base_OnShow(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONSHOW_OFFSET))(this, P0);
		}

		::System::Void __base_OnUIClose()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUICLOSE_OFFSET))(this);
		}

		::System::Void __base_OnUIDestroy()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUIDESTROY_OFFSET))(this);
		}

		::System::Void __base_OnUIInit()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUIINIT_OFFSET))(this);
		}

		::System::Void __base_OnUIOpen(::MoleMole::UIControllerContextBase* P0)
		{
			return ((::System::Void(*)(::PVOID, ::MoleMole::UIControllerContextBase*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIDEPOSITORYGACHAPREVIEWPAGECONTROLLER___BASE_ONUIOPEN_OFFSET))(this, P0);
		}
	};
}
