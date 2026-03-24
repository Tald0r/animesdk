#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/Class_1_F57C3EEEB03201AF.h"

namespace MoleMole { class UIHandBookSuibianWidgetController_ItemRowData; }
namespace MoleMole { class UIHandBookSuibianWidgetController_SuibianStore; }
namespace System::Collections::Generic { template <typename T> class List_1; }
template <typename T> class Class_0_16E4307DCC419505_118;
template <typename T> class Class_0_16E4307DCC419505_126;
template <typename T> class Class_0_16E4307DCC41950C_13;

#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBB1BB00)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0xBB1BBE0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_STORELIST_OFFSET UNITYSDK_OFFSET(0xBB1BBC0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET UNITYSDK_OFFSET(0xBB1BC00)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_LEVEL_OFFSET UNITYSDK_OFFSET(0xBB1BB10)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_ROWDATALIST_OFFSET UNITYSDK_OFFSET(0xBB1BBF0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_STORELIST_OFFSET UNITYSDK_OFFSET(0xBB1BBD0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET UNITYSDK_OFFSET(0xBB1BDE0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__13_0_OFFSET UNITYSDK_OFFSET(0xBB1BEF0)
#define MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__13_1_OFFSET UNITYSDK_OFFSET(0xBB1BF00)

namespace MoleMole
{
	inline static constexpr unsigned int UIHandBookSuibianWidgetController_ViewModel_TypeDefinitionIndex = 48644;

	class UIHandBookSuibianWidgetController_ViewModel : public ::Class_1_F57C3EEEB03201AF
	{
	public:
		::Class_0_16E4307DCC41950C_13<::System::Int32>* _level; // 0x60
		::Class_0_16E4307DCC419505_126<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>* _RowDataList_k__BackingField; // 0x68
		::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>* _rowDataList; // 0x70
		::Class_0_16E4307DCC419505_118<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>* _StoreList_k__BackingField; // 0x78

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__CTOR_OFFSET))(this);
		}

		::Class_0_16E4307DCC41950C_13<::System::Int32>* get_Level()
		{
			return ((::Class_0_16E4307DCC41950C_13<::System::Int32>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_LEVEL_OFFSET))(this);
		}

		::System::Void set_Level(::Class_0_16E4307DCC41950C_13<::System::Int32>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC41950C_13<::System::Int32>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_LEVEL_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_118<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>* get_StoreList()
		{
			return ((::Class_0_16E4307DCC419505_118<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_STORELIST_OFFSET))(this);
		}

		::System::Void set_StoreList(::Class_0_16E4307DCC419505_118<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_118<::MoleMole::UIHandBookSuibianWidgetController_SuibianStore*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_STORELIST_OFFSET))(this, value);
		}

		::Class_0_16E4307DCC419505_126<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>* get_RowDataList()
		{
			return ((::Class_0_16E4307DCC419505_126<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_GET_ROWDATALIST_OFFSET))(this);
		}

		::System::Void set_RowDataList(::Class_0_16E4307DCC419505_126<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Class_0_16E4307DCC419505_126<::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_SET_ROWDATALIST_OFFSET))(this, value);
		}

		::System::Void OnCreateProperty()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL_ONCREATEPROPERTY_OFFSET))(this);
		}

		::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>* _OnCreateProperty_b__13_0()
		{
			return ((::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__13_0_OFFSET))(this);
		}

		::System::Void _OnCreateProperty_b__13_1(::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::MoleMole::UIHandBookSuibianWidgetController_ItemRowData*>*))((::PBYTE)hIl2Cpp + MOLEMOLE_UIHANDBOOKSUIBIANWIDGETCONTROLLER_VIEWMODEL__ONCREATEPROPERTY_B__13_1_OFFSET))(this, value);
		}
	};
}
