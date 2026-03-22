#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NativeTypes
{
	inline static constexpr unsigned int NativeStaticArray_1_TypeDefinitionIndex = 9189;

	template <typename T>
	struct NativeStaticArray_1
	{
		::Unity::Collections::Allocator _allocator; // 0x0
		::System::Void* _storage; // 0x0
		::System::Int32 _length; // 0x0
	};
}
