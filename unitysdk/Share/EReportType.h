#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EReportType_TypeDefinitionIndex = 17644;

	enum class EReportType : ::System::Int16
	{
		Dialog = 1,
		DialogInFairy = 3,
		Fairy = 0,
		Task = 2,
	};
}
