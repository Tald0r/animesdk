#pragma once
#include "unitysdk/unitysdk.h"

namespace LitJson
{
	inline static constexpr unsigned int Condition_TypeDefinitionIndex = 7875;

	enum class Condition : ::System::Int32
	{
		InObject = 1,
		InArray = 0,
		Property = 3,
		Value = 4,
		NotAProperty = 2,
		Comment = 5,
	};
}
