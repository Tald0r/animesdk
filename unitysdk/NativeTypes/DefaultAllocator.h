#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

#define NATIVETYPES_DEFAULTALLOCATOR_FREE_OFFSET UNITYSDK_OFFSET(0x8EEC00)
#define NATIVETYPES_DEFAULTALLOCATOR_MALLOC_OFFSET UNITYSDK_OFFSET(0x8EEC20)
#define NATIVETYPES_DEFAULTALLOCATOR__CTOR_OFFSET UNITYSDK_OFFSET(0x2D3600)

namespace NativeTypes
{
	inline static constexpr unsigned int DefaultAllocator_TypeDefinitionIndex = 9188;

	struct alignas(4) DefaultAllocator
	{
		::Unity::Collections::Allocator _allocator; // 0x10

		::System::Void _ctor(::Unity::Collections::Allocator allocator)
		{
			return ((::System::Void(*)(::PVOID, ::Unity::Collections::Allocator))((::PBYTE)hIl2Cpp + NATIVETYPES_DEFAULTALLOCATOR__CTOR_OFFSET))(this, allocator);
		}

		::System::Void* Malloc(::System::Int64 size, ::System::Int32 alignment)
		{
			return ((::System::Void*(*)(::PVOID, ::System::Int64, ::System::Int32))((::PBYTE)hIl2Cpp + NATIVETYPES_DEFAULTALLOCATOR_MALLOC_OFFSET))(this, size, alignment);
		}

		::System::Void Free(::System::Void* memory)
		{
			return ((::System::Void(*)(::PVOID, ::System::Void*))((::PBYTE)hIl2Cpp + NATIVETYPES_DEFAULTALLOCATOR_FREE_OFFSET))(this, memory);
		}
	};
}
