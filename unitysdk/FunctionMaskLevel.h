#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FunctionMaskLevel_TypeDefinitionIndex = 67960;

enum class FunctionMaskLevel : ::System::Int32
{
	Disable = 3,
	Malfunction = 2,
	Invisible = 4,
	Lock = 1,
	None = 0,
};
