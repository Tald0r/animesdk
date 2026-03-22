#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int EffectPatternInfoConfig_ParticleSystemFreqMode_TypeDefinitionIndex = 42120;

	enum class EffectPatternInfoConfig_ParticleSystemFreqMode : ::System::Byte
	{
		None = 0x0,
		kFreqModeKeepSpeed = 0x2,
		kFreqModeSpeedScaling = 0x1,
	};
}
