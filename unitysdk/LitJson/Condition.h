#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 7928;

	enum class Condition : ::System::Int32
	{
		NotAProperty = 2,
		InObject = 1,
		Comment = 5,
		Property = 3,
		InArray = 0,
		Value = 4,
	};
}
