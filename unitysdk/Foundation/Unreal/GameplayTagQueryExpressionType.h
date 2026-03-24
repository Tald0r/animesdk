#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagQueryExpressionType_TypeDefinitionIndex = 9099;

	enum class GameplayTagQueryExpressionType : ::System::Int32
	{
		AllExprMatch = 5,
		NoExprMatch = 6,
		NoTagsMatch = 3,
		Undefined = 0,
		AllTagsMatch = 2,
		AnyExprMatch = 4,
		AnyTagsMatch = 1,
	};
}
