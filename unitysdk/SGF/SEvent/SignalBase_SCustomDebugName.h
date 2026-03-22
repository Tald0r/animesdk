#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/SGF/SEvent/SignalBase_SCustomDebugName_EMode.h"
#include "unitysdk/System/ValueType.h"

namespace System { class String; }

namespace SGF::SEvent
{
	inline static constexpr unsigned int SignalBase_SCustomDebugName_TypeDefinitionIndex = 7912;

	struct alignas(8) SignalBase_SCustomDebugName
	{
		::SGF::SEvent::SignalBase_SCustomDebugName_EMode Mode; // 0x10
		::System::String* Name; // 0x18
	};
}
