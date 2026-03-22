#pragma once
#include "unitysdk/unitysdk.h"

namespace FluffyUnderware::Curvy
{
	inline static constexpr unsigned int CurvyClamping_TypeDefinitionIndex = 35617;

	enum class CurvyClamping : ::System::Int32
	{
		Clamp = 0,
		Loop = 1,
		PingPong = 2,
	};
}
