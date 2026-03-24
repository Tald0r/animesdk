#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Attribute.h"

namespace System { class String; }

#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B1150A0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEITEMS_OFFSET UNITYSDK_OFFSET(0x1B114F70)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B1150C0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B115010)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1B114FF0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLYHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B1150B0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B114FB0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGEHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B115090)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGE_OFFSET UNITYSDK_OFFSET(0x1B114F90)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ONTITLEBARGUI_OFFSET UNITYSDK_OFFSET(0x1B115050)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_PAGINGHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B115070)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELSHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B1150D0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELS_OFFSET UNITYSDK_OFFSET(0x1B115030)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNTHASVALUE_OFFSET UNITYSDK_OFFSET(0x1B115080)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B114FD0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1B114F50)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_DRAGGABLEITEMS_OFFSET UNITYSDK_OFFSET(0x1B114F80)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDEDLEVEL_OFFSET UNITYSDK_OFFSET(0x1B115020)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDED_OFFSET UNITYSDK_OFFSET(0x1B115000)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x1B114FC0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_NUMBEROFITEMSPERPAGE_OFFSET UNITYSDK_OFFSET(0x1B114FA0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ONTITLEBARGUI_OFFSET UNITYSDK_OFFSET(0x1B115060)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWINDEXLABELS_OFFSET UNITYSDK_OFFSET(0x1B115040)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWITEMCOUNT_OFFSET UNITYSDK_OFFSET(0x1B114FE0)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWPAGING_OFFSET UNITYSDK_OFFSET(0x1B114F60)
#define SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE__CTOR_OFFSET UNITYSDK_OFFSET(0x1B1150E0)

namespace Sirenix::OdinInspector
{
	inline static constexpr unsigned int ListDrawerSettingsAttribute_TypeDefinitionIndex = 7194;

	class ListDrawerSettingsAttribute : public ::System::Attribute
	{
	public:
		::System::String* OriginalItemHandlerIdentifier; // 0x10
		::System::String* CustomAddFunction; // 0x18
		::System::String* CustomRemoveElementFunction; // 0x20
		::System::String* onTitleBarGUI; // 0x28
		::System::String* ListElementLabelName; // 0x30
		::System::String* CustomRemoveElementFunction4Array; // 0x38
		::System::String* CustomRemoveIndexFunction; // 0x40
		::System::String* PagingController; // 0x48
		::System::String* OnBeginListElementGUI; // 0x50
		::System::String* AddItemHandlerIdentifier; // 0x58
		::System::String* OnListElementAdd; // 0x60
		::System::String* OnEndListElementGUI; // 0x68
		::System::Boolean AddCopiesLastElement; // 0x70
		::System::Boolean paging; // 0x71
		::System::Boolean showItemCount; // 0x72
		::System::Boolean showIndexLabels; // 0x73
		::System::Boolean showIndexLabelsHasValue; // 0x74
		::System::Boolean AlwaysAddDefaultValue; // 0x75
		::System::Boolean draggableHasValue; // 0x76
		::System::Boolean HideRemoveButton; // 0x77
		::System::Int32 expandedLevel; // 0x78
		::System::Boolean numberOfItemsPerPageHasValue; // 0x7C
		::System::Boolean expandedHasValue; // 0x7D
		::System::Boolean isReadOnly; // 0x7E
		::System::Boolean showItemCountHasValue; // 0x7F
		::System::Boolean pagingHasValue; // 0x80
		::System::Boolean draggable; // 0x81
		::System::Boolean isReadOnlyHasValue; // 0x82
		::System::Boolean HideAddButton; // 0x83
		::System::Boolean expanded; // 0x84
		::System::Int32 numberOfItemsPerPage; // 0x88

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE__CTOR_OFFSET))(this);
		}

		::System::Boolean get_ShowPaging()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWPAGING_OFFSET))(this);
		}

		::System::Void set_ShowPaging(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWPAGING_OFFSET))(this, value);
		}

		::System::Boolean get_DraggableItems()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEITEMS_OFFSET))(this);
		}

		::System::Void set_DraggableItems(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_DRAGGABLEITEMS_OFFSET))(this, value);
		}

		::System::Int32 get_NumberOfItemsPerPage()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGE_OFFSET))(this);
		}

		::System::Void set_NumberOfItemsPerPage(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_NUMBEROFITEMSPERPAGE_OFFSET))(this, value);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Void set_IsReadOnly(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ISREADONLY_OFFSET))(this, value);
		}

		::System::Boolean get_ShowItemCount()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNT_OFFSET))(this);
		}

		::System::Void set_ShowItemCount(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWITEMCOUNT_OFFSET))(this, value);
		}

		::System::Boolean get_Expanded()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDED_OFFSET))(this);
		}

		::System::Void set_Expanded(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDED_OFFSET))(this, value);
		}

		::System::Int32 get_ExpandedLevel()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDLEVEL_OFFSET))(this);
		}

		::System::Void set_ExpandedLevel(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_EXPANDEDLEVEL_OFFSET))(this, value);
		}

		::System::Boolean get_ShowIndexLabels()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELS_OFFSET))(this);
		}

		::System::Void set_ShowIndexLabels(::System::Boolean value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Boolean))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_SHOWINDEXLABELS_OFFSET))(this, value);
		}

		::System::String* get_OnTitleBarGUI()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ONTITLEBARGUI_OFFSET))(this);
		}

		::System::Void set_OnTitleBarGUI(::System::String* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_SET_ONTITLEBARGUI_OFFSET))(this, value);
		}

		::System::Boolean get_PagingHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_PAGINGHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_ShowItemCountHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWITEMCOUNTHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_NumberOfItemsPerPageHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_NUMBEROFITEMSPERPAGEHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_DraggableHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_DRAGGABLEHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnlyHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_ISREADONLYHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_ExpandedHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_EXPANDEDHASVALUE_OFFSET))(this);
		}

		::System::Boolean get_ShowIndexLabelsHasValue()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SIRENIX_ODININSPECTOR_LISTDRAWERSETTINGSATTRIBUTE_GET_SHOWINDEXLABELSHASVALUE_OFFSET))(this);
		}
	};
}
