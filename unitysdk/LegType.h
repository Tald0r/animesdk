#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int LegType_TypeDefinitionIndex = 65281;

enum class LegType : ::System::Int32
{
	Humanoid = 0,
	Quadruped = 2,
	BipedAntiJoint = 1,
};
