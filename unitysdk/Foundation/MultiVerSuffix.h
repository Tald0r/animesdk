#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiVerSuffix_TypeDefinitionIndex = 8090;

	enum class MultiVerSuffix : ::System::Int32
	{
		RepeatBasePath = 4,
		Correct = 0,
		ErrorMultiVerPath = 3,
		ErrorBasePath = 2,
		Unknown = 1,
	};
}
