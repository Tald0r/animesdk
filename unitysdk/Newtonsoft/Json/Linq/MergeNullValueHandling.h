#pragma once
#include "unitysdk/unitysdk.h"

namespace Newtonsoft::Json::Linq
{
	inline static constexpr unsigned int MergeNullValueHandling_TypeDefinitionIndex = 7062;

	enum class MergeNullValueHandling : ::System::Int32
	{
		Ignore = 0,
		Merge = 1,
	};
}
