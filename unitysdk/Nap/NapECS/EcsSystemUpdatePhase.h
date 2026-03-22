#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdatePhase_TypeDefinitionIndex = 34186;

	enum class EcsSystemUpdatePhase : ::System::Byte
	{
		Update = 0x1,
		EndOfFixedUpdate = 0xA,
		LateUpdateAgain = 0x3,
		AnimIKPostUpdate = 0xB,
		PostLateUpdate = 0x4,
		AfterAnimatorFixedUpdate = 0x7,
		PostSimulationUpdate = 0xD,
		WaitForFixedUpdate = 0x8,
		FixedUpdate = 0x5,
		Max = 0xE,
		LateUpdate = 0x2,
		WaitForFixedUpdateAgain = 0x9,
		FixedUpdateAgain = 0x6,
		None = 0x0,
		PostParticleSystemUpdate = 0xC,
	};
}
