#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Data/InternalDataCollectionBase.h"

namespace System { class String; }
namespace System::Collections { class ArrayList; }
namespace System::Collections::Generic { template <typename T> class List_1; }
namespace System::ComponentModel { class CollectionChangeEventArgs; }
namespace System::ComponentModel { class CollectionChangeEventHandler; }
namespace System::Data { class DataSet; }
namespace System::Data { class DataTable; }

#define SYSTEM_DATA_DATATABLECOLLECTION_ADD_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1AB9FE50)
#define SYSTEM_DATA_DATATABLECOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x1AB9F740)
#define SYSTEM_DATA_DATATABLECOLLECTION_ARRAYADD_OFFSET UNITYSDK_OFFSET(0x1AB9FD70)
#define SYSTEM_DATA_DATATABLECOLLECTION_ASSIGNNAME_OFFSET UNITYSDK_OFFSET(0x1AB9FFD0)
#define SYSTEM_DATA_DATATABLECOLLECTION_BASEADD_OFFSET UNITYSDK_OFFSET(0x1AB9FA70)
#define SYSTEM_DATA_DATATABLECOLLECTION_BASEGROUPSWITCH_OFFSET UNITYSDK_OFFSET(0x1ABA0580)
#define SYSTEM_DATA_DATATABLECOLLECTION_BASEREMOVE_OFFSET UNITYSDK_OFFSET(0x1ABA07E0)
#define SYSTEM_DATA_DATATABLECOLLECTION_CANREMOVE_OFFSET UNITYSDK_OFFSET(0x1ABA08A0)
#define SYSTEM_DATA_DATATABLECOLLECTION_CLEAR_OFFSET UNITYSDK_OFFSET(0x1ABA1120)
#define SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_1_OFFSET UNITYSDK_OFFSET(0x1ABA1420)
#define SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_2_OFFSET UNITYSDK_OFFSET(0x1ABA1810)
#define SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1ABA0100)
#define SYSTEM_DATA_DATATABLECOLLECTION_FINISHINITCOLLECTION_OFFSET UNITYSDK_OFFSET(0x1ABA1BB0)
#define SYSTEM_DATA_DATATABLECOLLECTION_GETTABLESMART_OFFSET UNITYSDK_OFFSET(0x1AB9F530)
#define SYSTEM_DATA_DATATABLECOLLECTION_GETTABLE_OFFSET UNITYSDK_OFFSET(0x1AB9F320)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_1_OFFSET UNITYSDK_OFFSET(0x1AB9EA70)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_2_OFFSET UNITYSDK_OFFSET(0x1AB9EE70)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x1AB9E960)
#define SYSTEM_DATA_DATATABLECOLLECTION_GET_LIST_OFFSET UNITYSDK_OFFSET(0x1AB9E950)
#define SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1ABA1AA0)
#define SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_2_OFFSET UNITYSDK_OFFSET(0x1ABA1AC0)
#define SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x1ABA19B0)
#define SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_1_OFFSET UNITYSDK_OFFSET(0x1AB9EF60)
#define SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_OFFSET UNITYSDK_OFFSET(0x1AB9EB50)
#define SYSTEM_DATA_DATATABLECOLLECTION_MAKENAME_OFFSET UNITYSDK_OFFSET(0x1ABA0090)
#define SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1AB9FDA0)
#define SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGING_OFFSET UNITYSDK_OFFSET(0x1AB9F9C0)
#define SYSTEM_DATA_DATATABLECOLLECTION_REGISTERNAME_OFFSET UNITYSDK_OFFSET(0x1ABA0120)
#define SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET UNITYSDK_OFFSET(0x1AB9FF10)
#define SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x1ABA1C30)
#define SYSTEM_DATA_DATATABLECOLLECTION_REPLACEFROMINFERENCE_OFFSET UNITYSDK_OFFSET(0x1ABA1B60)
#define SYSTEM_DATA_DATATABLECOLLECTION_UNREGISTERNAME_OFFSET UNITYSDK_OFFSET(0x1ABA0EF0)
#define SYSTEM_DATA_DATATABLECOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1ABA1E30)
#define SYSTEM_DATA_DATATABLECOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x1AB9E820)

namespace System::Data
{
	inline static constexpr unsigned int DataTableCollection_TypeDefinitionIndex = 36450;

	class DataTableCollection : public ::System::Data::InternalDataCollectionBase
	{
	public:
		static ::System::Int32* StaticGet_s_objectTypeCount()
		{
			return (::System::Int32*)Il2CppClass::FromTypeDefinitionIndex(DataTableCollection_TypeDefinitionIndex)->GetStaticField(0x8CA0);
		}
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangedDelegate; // 0x10
		::System::Collections::ArrayList* _list; // 0x18
		::System::ComponentModel::CollectionChangeEventHandler* _onCollectionChangingDelegate; // 0x20
		::System::Data::DataSet* _dataSet; // 0x28
		::Il2CppArray<::System::Data::DataTable*>* _delayedAddRangeTables; // 0x30
		::System::Int32 _objectID; // 0x38
		::System::Int32 _defaultNameIndex; // 0x3C

		::System::Void _ctor(::System::Data::DataSet* dataSet)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataSet*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION__CTOR_OFFSET))(this, dataSet);
		}

		::System::Void _ctor_1()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION__CTOR_1_OFFSET))(this);
		}

		::System::Collections::ArrayList* get_List()
		{
			return ((::System::Collections::ArrayList*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_LIST_OFFSET))(this);
		}

		::System::Data::DataTable* get_Item(::System::Int32 index)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Data::DataTable* get_Item_1(::System::String* name)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_1_OFFSET))(this, name);
		}

		::System::Data::DataTable* get_Item_2(::System::String* name, ::System::String* tableNamespace)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GET_ITEM_2_OFFSET))(this, name, tableNamespace);
		}

		::System::Data::DataTable* GetTable(::System::String* name, ::System::String* ns)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GETTABLE_OFFSET))(this, name, ns);
		}

		::System::Data::DataTable* GetTableSmart(::System::String* name, ::System::String* ns)
		{
			return ((::System::Data::DataTable*(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_GETTABLESMART_OFFSET))(this, name, ns);
		}

		::System::Void Add(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ADD_OFFSET))(this, table);
		}

		::System::Void add_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ADD_COLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::Void remove_CollectionChanged(::System::ComponentModel::CollectionChangeEventHandler* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventHandler*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_COLLECTIONCHANGED_OFFSET))(this, value);
		}

		::System::Void ArrayAdd(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ARRAYADD_OFFSET))(this, table);
		}

		::System::String* AssignName()
		{
			return ((::System::String*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ASSIGNNAME_OFFSET))(this);
		}

		::System::Void BaseAdd(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_BASEADD_OFFSET))(this, table);
		}

		::System::Void BaseGroupSwitch(::Il2CppArray<::System::Data::DataTable*>* oldArray, ::System::Int32 oldLength, ::Il2CppArray<::System::Data::DataTable*>* newArray, ::System::Int32 newLength)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Data::DataTable*>*, ::System::Int32, ::Il2CppArray<::System::Data::DataTable*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_BASEGROUPSWITCH_OFFSET))(this, oldArray, oldLength, newArray, newLength);
		}

		::System::Void BaseRemove(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_BASEREMOVE_OFFSET))(this, table);
		}

		::System::Boolean CanRemove(::System::Data::DataTable* table, ::System::Boolean fThrowException)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Data::DataTable*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CANREMOVE_OFFSET))(this, table, fThrowException);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CLEAR_OFFSET))(this);
		}

		::System::Boolean Contains(::System::String* name)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_OFFSET))(this, name);
		}

		::System::Boolean Contains_1(::System::String* name, ::System::String* tableNamespace, ::System::Boolean checkProperty, ::System::Boolean caseSensitive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_1_OFFSET))(this, name, tableNamespace, checkProperty, caseSensitive);
		}

		::System::Boolean Contains_2(::System::String* name, ::System::Boolean caseSensitive)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_CONTAINS_2_OFFSET))(this, name, caseSensitive);
		}

		::System::Int32 IndexOf(::System::Data::DataTable* table)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_OFFSET))(this, table);
		}

		::System::Int32 IndexOf_1(::System::String* tableName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_1_OFFSET))(this, tableName);
		}

		::System::Int32 IndexOf_2(::System::String* tableName, ::System::String* tableNamespace, ::System::Boolean chekforNull)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*, ::System::Boolean))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INDEXOF_2_OFFSET))(this, tableName, tableNamespace, chekforNull);
		}

		::System::Void ReplaceFromInference(::System::Collections::Generic::List_1<::System::Data::DataTable*>* tableList)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::Generic::List_1<::System::Data::DataTable*>*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REPLACEFROMINFERENCE_OFFSET))(this, tableList);
		}

		::System::Int32 InternalIndexOf(::System::String* tableName)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_OFFSET))(this, tableName);
		}

		::System::Int32 InternalIndexOf_1(::System::String* tableName, ::System::String* tableNamespace)
		{
			return ((::System::Int32(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_INTERNALINDEXOF_1_OFFSET))(this, tableName, tableNamespace);
		}

		::System::Void FinishInitCollection()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_FINISHINITCOLLECTION_OFFSET))(this);
		}

		::System::String* MakeName(::System::Int32 index)
		{
			return ((::System::String*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_MAKENAME_OFFSET))(this, index);
		}

		::System::Void OnCollectionChanged(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGED_OFFSET))(this, ccevent);
		}

		::System::Void OnCollectionChanging(::System::ComponentModel::CollectionChangeEventArgs* ccevent)
		{
			return ((::System::Void(*)(::PVOID, ::System::ComponentModel::CollectionChangeEventArgs*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_ONCOLLECTIONCHANGING_OFFSET))(this, ccevent);
		}

		::System::Void RegisterName(::System::String* name, ::System::String* tbNamespace)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REGISTERNAME_OFFSET))(this, name, tbNamespace);
		}

		::System::Void Remove(::System::Data::DataTable* table)
		{
			return ((::System::Void(*)(::PVOID, ::System::Data::DataTable*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_REMOVE_OFFSET))(this, table);
		}

		::System::Void UnregisterName(::System::String* name)
		{
			return ((::System::Void(*)(::PVOID, ::System::String*))((::PBYTE)hIl2Cpp + SYSTEM_DATA_DATATABLECOLLECTION_UNREGISTERNAME_OFFSET))(this, name);
		}
	};
}
