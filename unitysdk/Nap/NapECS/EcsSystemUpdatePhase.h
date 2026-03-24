#pragma once
#include "unitysdk/unitysdk.h"

namespace Nap::NapECS
{
	inline static constexpr unsigned int EcsSystemUpdatePhase_TypeDefinitionIndex = 35216;

	enum class EcsSystemUpdatePhase : ::System::Byte
	{
		AnimIKPostUpdate = 0xB,
		PostParticleSystemUpdate = 0xC,
		FixedUpdateAgain = 0x6,
		LateUpdateAgain = 0x3,
		PostLateUpdate = 0x4,
		None = 0x0,
		FixedUpdate = 0x5,
		PostSimulationUpdate = 0xD,
		EndOfFixedUpdate = 0xA,
		WaitForFixedUpdateAgain = 0x9,
		Max = 0xE,
		LateUpdate = 0x2,
		AfterAnimatorFixedUpdate = 0x7,
		WaitForFixedUpdate = 0x8,
		Update = 0x1,
	};
}
