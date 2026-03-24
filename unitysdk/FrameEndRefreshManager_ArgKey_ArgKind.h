#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int FrameEndRefreshManager_ArgKey_ArgKind_TypeDefinitionIndex = 68157;

enum class FrameEndRefreshManager_ArgKey_ArgKind : ::System::Int32
{
	String = 2,
	Array = 3,
	UnityObj = 1,
	Object = 4,
	Null = 0,
};
