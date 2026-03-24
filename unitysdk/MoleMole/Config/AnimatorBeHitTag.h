#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorBeHitTag_TypeDefinitionIndex = 55074;

	enum class AnimatorBeHitTag : ::System::Int32
	{
		SwitchPhase = 504,
		Strike = 35,
		SubPartDestroy = 503,
		Ignite = 30,
		Electric = 27,
		Stun = 1,
		IceBreak = 505,
		Chaos = 34,
		Overload = 31,
		Unknown = 500,
		Frostbite = 36,
		ExhaustedStart = 501,
		ExhaustedEnd = 502,
	};
}
