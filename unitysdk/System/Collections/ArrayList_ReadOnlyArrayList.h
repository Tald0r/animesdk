#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ArrayList.h"

namespace System { class Array; }
namespace System { class Object; }
namespace System { class Type; }
namespace System::Collections { class ICollection; }
namespace System::Collections { class IComparer; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x19AF7480)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADD_OFFSET UNITYSDK_OFFSET(0x19AF7420)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLEAR_OFFSET UNITYSDK_OFFSET(0x19AF7540)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLONE_OFFSET UNITYSDK_OFFSET(0x19AF75A0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19AF7690)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_1_OFFSET UNITYSDK_OFFSET(0x19AF76F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_OFFSET UNITYSDK_OFFSET(0x19AF76C0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x19AF7730)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x19AF72E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISFIXEDSIZE_OFFSET UNITYSDK_OFFSET(0x19AF7320)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISREADONLY_OFFSET UNITYSDK_OFFSET(0x19AF7310)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x19AF7330)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19AF7360)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x19AF73F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19AF7760)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERTRANGE_OFFSET UNITYSDK_OFFSET(0x19AF77F0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERT_OFFSET UNITYSDK_OFFSET(0x19AF7790)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVEAT_OFFSET UNITYSDK_OFFSET(0x19AF78B0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVERANGE_OFFSET UNITYSDK_OFFSET(0x19AF7910)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVE_OFFSET UNITYSDK_OFFSET(0x19AF7850)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_CAPACITY_OFFSET UNITYSDK_OFFSET(0x19AF74E0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x19AF7390)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SORT_OFFSET UNITYSDK_OFFSET(0x19AF7970)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_1_OFFSET UNITYSDK_OFFSET(0x19AF7A00)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_OFFSET UNITYSDK_OFFSET(0x19AF79D0)
#define SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST__CTOR_OFFSET UNITYSDK_OFFSET(0x19AF7280)

namespace System::Collections
{
	inline static constexpr unsigned int ArrayList_ReadOnlyArrayList_TypeDefinitionIndex = 1449;

	class ArrayList_ReadOnlyArrayList : public ::System::Collections::ArrayList
	{
	public:
		::System::Collections::ArrayList* _list; // 0x28

		::System::Void _ctor(::System::Collections::ArrayList* l)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ArrayList*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST__CTOR_OFFSET))(this, l);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsReadOnly()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISREADONLY_OFFSET))(this);
		}

		::System::Boolean get_IsFixedSize()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISFIXEDSIZE_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_Item(::System::Int32 index)
		{
			return ((::System::Object*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Int32 Add(::System::Object* obj)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADD_OFFSET))(this, obj);
		}

		::System::Void AddRange(::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_ADDRANGE_OFFSET))(this, c);
		}

		::System::Void set_Capacity(::System::Int32 value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SET_CAPACITY_OFFSET))(this, value);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_CONTAINS_OFFSET))(this, obj);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_OFFSET))(this, array, index);
		}

		::System::Void CopyTo_1(::System::Int32 index, ::System::Array* array, ::System::Int32 arrayIndex, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Array*, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_COPYTO_1_OFFSET))(this, index, array, arrayIndex, count);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_GETENUMERATOR_OFFSET))(this);
		}

		::System::Int32 IndexOf(::System::Object* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERT_OFFSET))(this, index, obj);
		}

		::System::Void InsertRange(::System::Int32 index, ::System::Collections::ICollection* c)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Collections::ICollection*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_INSERTRANGE_OFFSET))(this, index, c);
		}

		::System::Void Remove(::System::Object* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVE_OFFSET))(this, value);
		}

		::System::Void RemoveAt(::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVEAT_OFFSET))(this, index);
		}

		::System::Void RemoveRange(::System::Int32 index, ::System::Int32 count)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_REMOVERANGE_OFFSET))(this, index, count);
		}

		::System::Void Sort(::System::Int32 index, ::System::Int32 count, ::System::Collections::IComparer* comparer)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Int32, ::System::Collections::IComparer*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_SORT_OFFSET))(this, index, count, comparer);
		}

		::Il2CppArray<::System::Object*>* ToArray()
		{
			return ((::Il2CppArray<::System::Object*>*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_OFFSET))(this);
		}

		::System::Array* ToArray_1(::System::Type* type)
		{
			return ((::System::Array*(*)(::PVOID, ::System::Type*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_ARRAYLIST_READONLYARRAYLIST_TOARRAY_1_OFFSET))(this, type);
		}
	};
}
