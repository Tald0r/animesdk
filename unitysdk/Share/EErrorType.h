#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EErrorType_TypeDefinitionIndex = 14992;

	enum class EErrorType : ::System::Int32
	{
		Special = 3,
		Modal = 2,
		Floats = 1,
	};
}
