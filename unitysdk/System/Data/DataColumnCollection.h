#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/InternalDataCollectionBase.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections::Generic { template <typename T1, typename T2> class Dictionary_2; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::ComponentModel { class CollectionChangeEventHandler; }
namespace System::Data { class DataColumn; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDAT_OFFSET UNITYSDK_OFFSET(0x1A4C2240)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDCOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET UNITYSDK_OFFSET(0x1A4C4E10)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A4C2CC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLUMNPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A4C2DC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1A4C2230)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_1_OFFSET UNITYSDK_OFFSET(0x1A4C2B50)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x1A4C2BC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYREMOVE_OFFSET UNITYSDK_OFFSET(0x1A4C2F00)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ASSIGNNAME_OFFSET UNITYSDK_OFFSET(0x1A4C3190)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEADD_OFFSET UNITYSDK_OFFSET(0x1A4C27B0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEGROUPSWITCH_OFFSET UNITYSDK_OFFSET(0x1A4C3C10)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x1A4C3ED0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x1A4C5A90)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREMOVE_OFFSET UNITYSDK_OFFSET(0x1A4C4050)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CHECKICHANGETRACKING_OFFSET UNITYSDK_OFFSET(0x1A4C2EC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1A4C4F10)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1A4C53E0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1A4C5310)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_FINISHINITCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1A4C5660)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1A4C1A50)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_2_OFFSET UNITYSDK_OFFSET(0x1A4C2120)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1A4C1840)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1A4C1830)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOFCASEINSENSITIVE_OFFSET UNITYSDK_OFFSET(0x1A4C1CC0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1A4C54E0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_MAKENAME_OFFSET UNITYSDK_OFFSET(0x1A4C3290)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A4C2C50)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGING_OFFSET UNITYSDK_OFFSET(0x1A4C2790)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLUMNPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A4C5750)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REGISTERCOLUMNNAME_OFFSET UNITYSDK_OFFSET(0x1A4C34C0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVECOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET UNITYSDK_OFFSET(0x1A4C3030)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1A4C2D40)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLUMNPROPERTYCHANGED_OFFSET UNITYSDK_OFFSET(0x1A4C2E40)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1A4C5B10)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION_UNREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x1A4C3990)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1A4C5CE0)
#define SYSTEM_DATA_DATACOLUMNCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1A4C1720)

namespace System::Data
{
	inline static constexpr unsigned int DataColumnCollection_TypeDefinitionIndex = 35389;

	class DataColumnCollection : public ::System::Data::InternalDataCollectionBase
	{
	public:
		::Il2CppArray<::System::Data::DataColumn*>* _columnsImplementingIChangeTracking; // 0x10
		::System::Collections::Generic::Dictionary_2<::System::String*, ::System::Data::DataColumn*>* _columnFromName; // 0x18
		::System::Data::DataTable* _table; // 0x20
		::System::ComponentModel::CollectionChangeEventHandler* CollectionChanging; // 0x28
		::System::ComponentModel::CollectionChangeEventHandler* CollectionChanged; // 0x30
		::System::Collections::ArrayList* _list; // 0x38
		::System::ComponentModel::CollectionChangeEventHandler* ColumnPropertyChanged; // 0x40
		::Il2CppArray<::System::Data::DataColumn*>* _delayedAddRangeColumns; // 0x48
		::System::Boolean _fInClear; // 0x50
		::System::Int32 _defaultNameIndex; // 0x54
		::System::Int32 _nColumnsImplementingIRevertibleChangeTracking; // 0x58
		::System::Int32 _nColumnsImplementingIChangeTracking; // 0x5C

		::System::Void _ctor(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION__CTOR_OFFSET))(this, table);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_List()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_LIST_OFFSET))(this);
		}

		::System::Data::DataColumn* get_Item(::System::Int32 index)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Data::DataColumn* get_Item_1(::System::String* name)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Data::DataColumn* get_Item_2(::System::String* name, ::System::String* ns)
		{
			return ((::System::Data::DataColumn*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_GET_ITEM_2_OFFSET))(this, name, ns);
		}

		::System::Void Add(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_OFFSET))(this, column);
		}

		::System::Void AddAt(::System::Int32 index, ::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDAT_OFFSET))(this, index, column);
		}

		::System::Void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::Void add_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADD_COLUMNPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_ColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_COLUMNPROPERTYCHANGED_OFFSET))(this, value);
		}

		::System::Void ArrayAdd(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_OFFSET))(this, column);
		}

		::System::Void ArrayAdd_1(::System::Int32 index, ::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYADD_1_OFFSET))(this, index, column);
		}

		::System::Void ArrayRemove(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ARRAYREMOVE_OFFSET))(this, column);
		}

		::System::String* AssignName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ASSIGNNAME_OFFSET))(this);
		}

		::System::Void BaseAdd(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEADD_OFFSET))(this, column);
		}

		::System::Void BaseGroupSwitch(::Il2CppArray<::System::Data::DataColumn*>* oldArray, ::System::Int32 oldLength, ::Il2CppArray<::System::Data::DataColumn*>* newArray, ::System::Int32 newLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Int32, ::Il2CppArray<::System::Data::DataColumn*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEGROUPSWITCH_OFFSET))(this, oldArray, oldLength, newArray, newLength);
		}

		::System::Void BaseRemove(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_BASEREMOVE_OFFSET))(this, column);
		}

		::System::Boolean CanRemove(::System::Data::DataColumn* column, ::System::Boolean fThrowException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataColumn*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREMOVE_OFFSET))(this, column, fThrowException);
		}

		::System::Void CheckIChangeTracking(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CHECKICHANGETRACKING_OFFSET))(this, column);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_OFFSET))(this, name);
		}

		::System::Boolean Contains_1(::System::String* name, ::System::Boolean caseSensitive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CONTAINS_1_OFFSET))(this, name, caseSensitive);
		}

		::System::Int32 IndexOf(::System::String* columnName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOF_OFFSET))(this, columnName);
		}

		::System::Int32 IndexOfCaseInsensitive(::System::String* name)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_INDEXOFCASEINSENSITIVE_OFFSET))(this, name);
		}

		::System::Void FinishInitCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_FINISHINITCOLLECTION_OFFSET))(this);
		}

		::System::String* MakeName(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_MAKENAME_OFFSET))(this, index);
		}

		::System::Void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGED_OFFSET))(this, ccevent);
		}

		::System::Void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLLECTIONCHANGING_OFFSET))(this, ccevent);
		}

		::System::Void OnColumnPropertyChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ONCOLUMNPROPERTYCHANGED_OFFSET))(this, ccevent);
		}

		::System::Void RegisterColumnName(::System::String* name, ::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REGISTERCOLUMNNAME_OFFSET))(this, name, column);
		}

		::System::Boolean CanRegisterName(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_CANREGISTERNAME_OFFSET))(this, name);
		}

		::System::Void Remove(::System::Data::DataColumn* column)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVE_OFFSET))(this, column);
		}

		::System::Void UnregisterName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_UNREGISTERNAME_OFFSET))(this, name);
		}

		::System::Void AddColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_ADDCOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET))(this, dataColumn);
		}

		::System::Void RemoveColumnsImplementingIChangeTrackingList(::System::Data::DataColumn* dataColumn)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataColumn*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATACOLUMNCOLLECTION_REMOVECOLUMNSIMPLEMENTINGICHANGETRACKINGLIST_OFFSET))(this, dataColumn);
		}
	};
}
