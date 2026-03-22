#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/CollectionBase.h"

namespace System::Diagnostics { class EventLogPermissionEntry; }

#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_ADDRANGE_1_OFFSET UNITYSDK_OFFSET(0x18238EB0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_ADDRANGE_OFFSET UNITYSDK_OFFSET(0x18238E70)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x18238E30)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x18238EF0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x18238F30)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x18238DB0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x18238F70)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x18238FB0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x18238FF0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_SET_ITEM_OFFSET UNITYSDK_OFFSET(0x18238DF0)
#define SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x18238D70)

namespace System::Diagnostics
{
	inline static constexpr unsigned int EventLogPermissionEntryCollection_TypeDefinitionIndex = 4173;

	class EventLogPermissionEntryCollection : public ::System::Collections::CollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Diagnostics::EventLogPermissionEntry* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::EventLogPermissionEntry*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Void set_Item(::System::Int32 index, ::System::Diagnostics::EventLogPermissionEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::EventLogPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_SET_ITEM_OFFSET))(this, index, value);
		}

		::System::Int32 Add(::System::Diagnostics::EventLogPermissionEntry* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::EventLogPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_ADD_OFFSET))(this, value);
		}

		::System::Void AddRange(::System::Diagnostics::EventLogPermissionEntryCollection* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogPermissionEntryCollection*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_ADDRANGE_OFFSET))(this, value);
		}

		::System::Void AddRange_1(::Il2CppArray<::System::Diagnostics::EventLogPermissionEntry*>* value)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::EventLogPermissionEntry*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_ADDRANGE_1_OFFSET))(this, value);
		}

		::System::Boolean Contains(::System::Diagnostics::EventLogPermissionEntry* value)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::EventLogPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_CONTAINS_OFFSET))(this, value);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::EventLogPermissionEntry*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::EventLogPermissionEntry*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}

		::System::Int32 IndexOf(::System::Diagnostics::EventLogPermissionEntry* value)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::EventLogPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_INDEXOF_OFFSET))(this, value);
		}

		::System::Void Insert(::System::Int32 index, ::System::Diagnostics::EventLogPermissionEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::EventLogPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_INSERT_OFFSET))(this, index, value);
		}

		::System::Void Remove(::System::Diagnostics::EventLogPermissionEntry* value)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::EventLogPermissionEntry*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_EVENTLOGPERMISSIONENTRYCOLLECTION_REMOVE_OFFSET))(this, value);
		}
	};
}
