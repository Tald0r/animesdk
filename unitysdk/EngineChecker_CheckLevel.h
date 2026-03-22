#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int EngineChecker_CheckLevel_TypeDefinitionIndex = 50042;

enum class EngineChecker_CheckLevel : ::System::Int32
{
	kCrash = 2,
	kLog = 1,
	kNoCheck = 0,
};
