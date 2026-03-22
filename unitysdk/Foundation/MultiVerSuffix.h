#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation
{
	inline static constexpr unsigned int MultiVerSuffix_TypeDefinitionIndex = 7967;

	enum class MultiVerSuffix : ::System::Int32
	{
		Unknown = 1,
		RepeatBasePath = 4,
		ErrorBasePath = 2,
		Correct = 0,
		ErrorMultiVerPath = 3,
	};
}
