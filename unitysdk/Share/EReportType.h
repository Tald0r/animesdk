#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EReportType_TypeDefinitionIndex = 10293;

	enum class EReportType : ::System::Int16
	{
		DialogInFairy = 3,
		Task = 2,
		Dialog = 1,
		Fairy = 0,
	};
}
