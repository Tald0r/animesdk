#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole::Config
{
	inline static constexpr unsigned int AnimatorBeHitTag_TypeDefinitionIndex = 43045;

	enum class AnimatorBeHitTag : ::System::Int32
	{
		SubPartDestroy = 503,
		ExhaustedStart = 501,
		IceBreak = 505,
		Strike = 35,
		Chaos = 34,
		Ignite = 30,
		SwitchPhase = 504,
		Unknown = 500,
		Overload = 31,
		ExhaustedEnd = 502,
		Electric = 27,
		Stun = 1,
		Frostbite = 36,
	};
}
