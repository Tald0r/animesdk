#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int BehaviorInstance_1_EBehaviorInstanceFinishOperation_TypeDefinitionIndex = 9105;

	enum class BehaviorInstance_1_EBehaviorInstanceFinishOperation : ::System::Byte
	{
		WithBlendOut = 0x2,
		None = 0x0,
		Finished = 0x1,
	};
}
