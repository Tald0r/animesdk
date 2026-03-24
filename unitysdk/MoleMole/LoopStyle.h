#pragma once
#include "unitysdk/unitysdk.h"

namespace MoleMole
{
	inline static constexpr unsigned int LoopStyle_TypeDefinitionIndex = 67741;

	enum class LoopStyle : ::System::Int32
	{
		PingPong = 2,
		Loop = 1,
		Once = 0,
	};
}
