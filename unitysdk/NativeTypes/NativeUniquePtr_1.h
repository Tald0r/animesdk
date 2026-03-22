#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"
#include "unitysdk/Unity/Collections/Allocator.h"

namespace NativeTypes
{
	inline static constexpr unsigned int NativeUniquePtr_1_TypeDefinitionIndex = 9197;

	template <typename T>
	struct NativeUniquePtr_1
	{
		::Unity::Collections::Allocator _allocator; // 0x0
		::System::Void* _ptr; // 0x0
	};
}
