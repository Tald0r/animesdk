#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemUIState_TypeDefinitionIndex = 17473;

	enum class EHollowSystemUIState : ::System::Int16
	{
		Brighten = 2,
		Close = 1,
		Normal = 0,
	};
}
