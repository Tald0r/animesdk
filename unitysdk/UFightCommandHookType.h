#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightCommandHookType_TypeDefinitionIndex = 25856;

enum class UFightCommandHookType : ::System::Int32
{
	Continue = 2,
	Error = 3,
	Finish = 1,
	None = 0,
};
