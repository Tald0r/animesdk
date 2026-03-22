#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace NativeTypes
{
	inline static constexpr unsigned int NativeArrayView_1_TypeDefinitionIndex = 9190;

	template <typename T>
	struct NativeArrayView_1
	{
		::System::Void* _storage; // 0x0
		::System::Int32 _length; // 0x0
	};
}
