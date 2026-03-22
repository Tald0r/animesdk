#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace Foundation::ViewObject::Structures
{
	inline static constexpr unsigned int FChatEventArgs_TypeDefinitionIndex = 67761;

	struct alignas(8) FChatEventArgs
	{
		::System::String* ChatName; // 0x10
	};
}
