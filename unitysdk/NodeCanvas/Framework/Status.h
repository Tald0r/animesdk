#pragma once
#include "unitysdk/unitysdk.h"

namespace NodeCanvas::Framework
{
	inline static constexpr unsigned int Status_TypeDefinitionIndex = 26553;

	enum class Status : ::System::Int32
	{
		Optional = 5,
		Error = 4,
		Resting = 3,
		Failure = 0,
		Running = 2,
		Success = 1,
	};
}
