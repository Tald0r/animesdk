#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/Object.h"

namespace System { class Array; }
namespace System::Collections { class IEnumerator; }

#define SYSTEM_COLLECTIONS_STACK_CLEAR_OFFSET UNITYSDK_OFFSET(0x1959E720)
#define SYSTEM_COLLECTIONS_STACK_CLONE_OFFSET UNITYSDK_OFFSET(0x1959E750)
#define SYSTEM_COLLECTIONS_STACK_CONTAINS_OFFSET UNITYSDK_OFFSET(0x1959E840)
#define SYSTEM_COLLECTIONS_STACK_COPYTO_OFFSET UNITYSDK_OFFSET(0x1959E920)
#define SYSTEM_COLLECTIONS_STACK_GETENUMERATOR_OFFSET UNITYSDK_OFFSET(0x1959EBE0)
#define SYSTEM_COLLECTIONS_STACK_GET_COUNT_OFFSET UNITYSDK_OFFSET(0x1959E6C0)
#define SYSTEM_COLLECTIONS_STACK_GET_ISSYNCHRONIZED_OFFSET UNITYSDK_OFFSET(0x1959E6D0)
#define SYSTEM_COLLECTIONS_STACK_GET_SYNCROOT_OFFSET UNITYSDK_OFFSET(0x1959E6E0)
#define SYSTEM_COLLECTIONS_STACK_PEEK_OFFSET UNITYSDK_OFFSET(0x1959EC40)
#define SYSTEM_COLLECTIONS_STACK_POP_OFFSET UNITYSDK_OFFSET(0x1959ECE0)
#define SYSTEM_COLLECTIONS_STACK_PUSH_OFFSET UNITYSDK_OFFSET(0x1959ED90)
#define SYSTEM_COLLECTIONS_STACK__CTOR_1_OFFSET UNITYSDK_OFFSET(0x1959E630)
#define SYSTEM_COLLECTIONS_STACK__CTOR_OFFSET UNITYSDK_OFFSET(0x1959E600)

namespace System::Collections
{
	inline static constexpr unsigned int Stack_TypeDefinitionIndex = 1490;

	class Stack : public ::System::Object
	{
	public:
		::Il2CppArray<::System::Object*>* _array; // 0x10
		::System::Int32 _size; // 0x18
		::System::Int32 _version; // 0x1C
		::System::Object* _syncRoot; // 0x20

		::System::Void _ctor()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK__CTOR_OFFSET))(this);
		}

		::System::Void _ctor_1(::System::Int32 initialCapacity)
		{
			return ((::System::Void(*)(::PVOID, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK__CTOR_1_OFFSET))(this, initialCapacity);
		}

		::System::Int32 get_Count()
		{
			return ((::System::Int32(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GET_COUNT_OFFSET))(this);
		}

		::System::Boolean get_IsSynchronized()
		{
			return ((::System::Boolean(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GET_ISSYNCHRONIZED_OFFSET))(this);
		}

		::System::Object* get_SyncRoot()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GET_SYNCROOT_OFFSET))(this);
		}

		::System::Void Clear()
		{
			return ((::System::Void(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_CLEAR_OFFSET))(this);
		}

		::System::Object* Clone()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_CLONE_OFFSET))(this);
		}

		::System::Boolean Contains(::System::Object* obj)
		{
			return ((::System::Boolean(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_CONTAINS_OFFSET))(this, obj);
		}

		::System::Void CopyTo(::System::Array* array, ::System::Int32 index)
		{
			return ((::System::Void(*)(::PVOID, ::System::Array*, ::System::Int32))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_COPYTO_OFFSET))(this, array, index);
		}

		::System::Collections::IEnumerator* GetEnumerator()
		{
			return ((::System::Collections::IEnumerator*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_GETENUMERATOR_OFFSET))(this);
		}

		::System::Object* Peek()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_PEEK_OFFSET))(this);
		}

		::System::Object* Pop()
		{
			return ((::System::Object*(*)(::PVOID))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_POP_OFFSET))(this);
		}

		::System::Void Push(::System::Object* obj)
		{
			return ((::System::Void(*)(::PVOID, ::System::Object*))((::PBYTE)hIl2Cpp + SYSTEM_COLLECTIONS_STACK_PUSH_OFFSET))(this, obj);
		}
	};
}
