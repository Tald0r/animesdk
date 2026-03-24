#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_A8BA991D2B15601F_TypeDefinitionIndex = 56599;

enum class Enum_3_A8BA991D2B15601F : ::System::UInt32
{
	StateRunTerminated = 0x3,
	StateRunFail = 0x2,
	StateRunSuccess = 0x1,
	OnStateFinish = 0x4,
	NB = 0x7,
	None = 0x0,
	OnReachTargetState = 0x6,
	OnStateResume = 0x5,
};
