#pragma once
#include "unitysdk/unitysdk.h"

namespace Foundation::Unreal
{
	inline static constexpr unsigned int GameplayTagQueryExpressionType_TypeDefinitionIndex = 9117;

	enum class GameplayTagQueryExpressionType : ::System::Int32
	{
		AllTagsMatch = 2,
		Undefined = 0,
		NoTagsMatch = 3,
		AnyTagsMatch = 1,
		AllExprMatch = 5,
		NoExprMatch = 6,
		AnyExprMatch = 4,
	};
}
