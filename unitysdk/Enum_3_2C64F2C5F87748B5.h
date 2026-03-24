#pragma once
#include "unitysdk/unitysdk.h"

inline static constexpr unsigned int Enum_3_2C64F2C5F87748B5_TypeDefinitionIndex = 45383;

enum class Enum_3_2C64F2C5F87748B5 : ::System::UInt16
{
	Activated = 0x8000,
	TickStarted = 0x4000,
	ManualLifeCycle = 0x1,
	OnStopClearFlags = 0xC006,
	None = 0x0,
	ExplictCompleteTime = 0x4,
	PreciselyTick = 0x8,
	ExplictStartTime = 0x2,
	DoTickIfNoStartAction = 0x10,
};
