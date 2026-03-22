#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_2C64F2C5F87748B5_TypeDefinitionIndex = 51685;

enum class Enum_3_2C64F2C5F87748B5 : ::System::UInt16
{
	ManualLifeCycle = 0x1,
	OnStopClearFlags = 0xC006,
	ExplictCompleteTime = 0x4,
	TickStarted = 0x4000,
	DoTickIfNoStartAction = 0x10,
	None = 0x0,
	Activated = 0x8000,
	ExplictStartTime = 0x2,
	PreciselyTick = 0x8,
};
