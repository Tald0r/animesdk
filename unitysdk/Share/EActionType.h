#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EActionType_TypeDefinitionIndex = 12288;

	enum class EActionType : ::System::Int16
	{
		Server = 1,
		Client = 0,
		ClientServer = 2,
	};
}
