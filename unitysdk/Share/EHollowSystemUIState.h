#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowSystemUIState_TypeDefinitionIndex = 15033;

	enum class EHollowSystemUIState : ::System::Int16
	{
		Close = 1,
		Normal = 0,
		Brighten = 2,
	};
}
