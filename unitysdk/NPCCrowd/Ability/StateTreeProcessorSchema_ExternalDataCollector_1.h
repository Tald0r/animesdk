#pragma once
#include "unitysdk/unitysdk.h"
#include "unitysdk/NativeTypes/NativeRawPtr_1.h"
#include "unitysdk/System/ValueType.h"

namespace NPCCrowd::Ability
{
	inline static constexpr unsigned int StateTreeProcessorSchema_ExternalDataCollector_1_TypeDefinitionIndex = 64118;

	template <typename TJob>
	struct StateTreeProcessorSchema_ExternalDataCollector_1
	{
		::System::Int32 _index; // 0x0
		::NativeTypes::NativeRawPtr_1<TJob> _job; // 0x0
	};
}
