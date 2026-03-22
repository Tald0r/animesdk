#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeListView_1.h"
#include "unitysdk/System/ValueType.h"

namespace NativeTypes
{
	inline static constexpr unsigned int NativeListView_1_Enumerator_TypeDefinitionIndex = 9193;

	template <typename T>
	struct NativeListView_1_Enumerator
	{
		::NativeTypes::NativeListView_1<T> _listView; // 0x0
		::System::Int32 _index; // 0x0
	};
}
