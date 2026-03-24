#pragma once
#include "unitysdk/unitysdk.h"

namespace Share
{
	inline static constexpr unsigned int EHollowEventListRandomType_TypeDefinitionIndex = 10314;

	enum class EHollowEventListRandomType : ::System::Int16
	{
		EnumCount = 2,
		Unlimited = 0,
		Limited = 1,
	};
}
