#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_RunningPhase_TypeDefinitionIndex = 34133;

	enum class EcsWorldTimeCenter_RunningPhase : ::System::Byte
	{
		Error = 0x5,
		None = 0x0,
		Running = 0x2,
		Paused = 0x3,
		Stopped = 0x4,
		Initialized = 0x1,
		Destroyed = 0x6,
	};
}
