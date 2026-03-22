#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int UFightCommandHookType_TypeDefinitionIndex = 24893;

enum class UFightCommandHookType : ::System::Int32
{
	Continue = 2,
	Finish = 1,
	Error = 3,
	None = 0,
};
