#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoopStyle_TypeDefinitionIndex = 70736;

	enum class LoopStyle : ::System::Int32
	{
		PingPong = 2,
		Once = 0,
		Loop = 1,
	};
}
