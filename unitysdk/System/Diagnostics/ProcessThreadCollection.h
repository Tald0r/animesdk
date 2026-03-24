#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Collections/ReadOnlyCollectionBase.h"

namespace System::Diagnostics { class ProcessThread; }

#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_ADD_OFFSET UNITYSDK_OFFSET(0x19420630)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_CONTAINS_OFFSET UNITYSDK_OFFSET(0x19420790)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_COPYTO_OFFSET UNITYSDK_OFFSET(0x19420870)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_GET_ITEM_OFFSET UNITYSDK_OFFSET(0x19420560)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INDEXOF_OFFSET UNITYSDK_OFFSET(0x19420720)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INSERT_OFFSET UNITYSDK_OFFSET(0x194206A0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_REMOVE_OFFSET UNITYSDK_OFFSET(0x19420800)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_1_OFFSET UNITYSDK_OFFSET(0x194204F0)
#define SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_OFFSET UNITYSDK_OFFSET(0x194204E0)

namespace System::Diagnostics
{
	inline static constexpr unsigned int ProcessThreadCollection_TypeDefinitionIndex = 2789;

	class ProcessThreadCollection : public ::System::Collections::ReadOnlyCollectionBase
	{
	public:
		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::Il2CppArray<::System::Diagnostics::ProcessThread*>* processThreads)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::ProcessThread*>*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION__CTOR_1_OFFSET))(this, processThreads);
		}

		::System::Diagnostics::ProcessThread* get_Item(::System::Int32 index)
		{
			return ((::System::Diagnostics::ProcessThread*(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_GET_ITEM_OFFSET))(this, index);
		}

		::System::Int32 Add(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_ADD_OFFSET))(this, thread);
		}

		::System::Void Insert(::System::Int32 index, ::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INSERT_OFFSET))(this, index, thread);
		}

		::System::Int32 IndexOf(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Int32(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_INDEXOF_OFFSET))(this, thread);
		}

		::System::Boolean Contains(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_CONTAINS_OFFSET))(this, thread);
		}

		::System::Void Remove(::System::Diagnostics::ProcessThread* thread)
		{
			return ((::System::Void(*)(::PVOID, ::System::Diagnostics::ProcessThread*))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_REMOVE_OFFSET))(this, thread);
		}

		::System::Void CopyTo(::Il2CppArray<::System::Diagnostics::ProcessThread*>* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::Il2CppArray<::System::Diagnostics::ProcessThread*>*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_DIAGNOSTICS_PROCESSTHREADCOLLECTION_COPYTO_OFFSET))(this, array, index);
		}
	};
}
