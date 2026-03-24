#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsWorldTimeCenter_RunningPhase_TypeDefinitionIndex = 35122;

	enum class EcsWorldTimeCenter_RunningPhase : ::System::Byte
	{
		Error = 0x5,
		Running = 0x2,
		None = 0x0,
		Destroyed = 0x6,
		Stopped = 0x4,
		Initialized = 0x1,
		Paused = 0x3,
	};
}
